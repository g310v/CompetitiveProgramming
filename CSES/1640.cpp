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
    sort(a.begin(), a.end());
    int l = 0, r = n - 1;
    bool found = false;
    while (l < r) {
        int cur = a[l].first + a[r].first;
        if (cur == x) {
            cout << a[l].second + 1 << " " << a[r].second + 1 << "\n";
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
    if (!found) cout << "IMPOSSIBLE\n";
}
