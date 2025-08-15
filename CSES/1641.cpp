#include<bits/stdc++.h>
using namespace std;
using ll = long long int;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, x; cin >> n >> x;
    vector<pair<int, int>> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i].first;
        a[i].second = i;
    }
    if (n < 3) {
        cout << "IMPOSSIBLE\n";
    }
    else {
        sort(a.begin(), a.end());
        bool found = false;
        for (int i = 0; i <= n - 3; i++) {
            int l = i + 1, r = n - 1; 
            while (l < r) {
                int cur = a[i].first + a[l].first + a[r].first;
                if (cur == x) {
                    cout << a[i].second + 1 << " " << a[l].second + 1 << " " << a[r].second + 1 << "\n";
                    found = true;
                    break;
                }
                else if (cur < x) {
                    l++;
                }
                else {
                    r--;
                }
            }
            if (found) break;
        }
        if (!found) cout << "IMPOSSIBLE\n";
    }
}

