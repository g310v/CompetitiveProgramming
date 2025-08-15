#include<bits/stdc++.h>
using namespace std;
using ll = long long int;

void setIO(string s) {
	freopen((s + ".in").c_str(), "r", stdin);
	freopen((s + ".out").c_str(), "w", stdout);
}

int main() {
    setIO("outofplace");
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    int p = -1;
    for (int i = 0; i < n; i++) {
        if (i == 0) {
            if (a[i] > a[i + 1]) {
                p = i;
                break;
            }
        }
        else {
            if (a[i] < a[i - 1]) {
                p = i;
                break;
            }
        }
    }

    int ans = 0;
    if (p == -1) {
        cout << ans << "\n";
    }
    else {
        if (p != 0 && p + 1 < n) {
            if (a[p + 1] < a[p - 1]) p = p - 1;
        }
        if (p == 0 || (p != 0 && a[p] >= a[p - 1])) {
            for (int i = p + 1; i < n; i++) {
                if (a[i] >= a[p]) break;
                else if (i == n - 1) {
                    ans++;
                }
                else if (a[i] < a[i + 1] && a[i] ) {
                    int temp = a[p];
                    a[p] = a[i];
                    a[i] = temp;
                    p = i;
                    ans++;
                }
            }
        }
        else {
            for (int i = p - 1; i >= 0; i--) {
                if (a[i] <= a[p]) break;
                else if (i == 0) {
                    ans++;
                }
                else if (a[i] > a[i - 1]) {
                    int temp = a[p];
                    a[p] = a[i];
                    a[i] = temp;
                    p = i;
                    ans++;
                }
            }
        }
        cout << ans << "\n";
    }
}

