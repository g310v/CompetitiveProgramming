#include<bits/stdc++.h>
using namespace std;
using ll = long long int;

void setIO(string s) {
	freopen((s + ".in").c_str(), "r", stdin);
	freopen((s + ".out").c_str(), "w", stdout);
}

int main() {
    setIO("milkorder");
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, m, k; cin >> n >> m >> k;
    vector<int> ms(m);
    vector<int> order(n, 0);
    map<int, int> mp;
    for (ll i = 0; i < m; i++) cin >> ms[i];
    for (ll i = 1; i <= n; i++) mp[i] = -1; 
    for (ll i = 0; i < k; i++) {
        int a, b; cin >> a >> b;
        order[b - 1] = a;
        mp[a] = b - 1;
    }

    int ms_p = m - 1;
    int order_p = n - 1;
    while (ms_p >= 0 && order_p >= 0) {
        if (ms[ms_p] == 1) {
            break;
        }
        else if (order[order_p] != 0) order_p--;  
        else if (mp[ms[ms_p]] != -1) {
            order_p = mp[ms[ms_p]] - 1;
            ms_p--;
        }
        else {
            order[order_p] = ms[ms_p];
            mp[ms[ms_p]] = order_p;
            order_p--;
            ms_p--;
        }
    }

    order_p = 0;
    ms_p = 0;
    while (ms_p < ms.size() && order_p < n) {
        if (order[order_p] != 0) order_p++;
        else if (mp[ms[ms_p]] != -1) {
            order_p = mp[ms[ms_p]] + 1;
            ms_p++;
        }
        else {
            order[order_p] = ms[ms_p];
            mp[ms[ms_p]] = order_p;
            if (ms[ms_p] == 1) {
                break;
            }
            order_p++;
            ms_p++;
        }
    }

    if (mp[1] != -1) cout << mp[1] + 1 << "\n";
    else {
        for (ll i = 0; i < n; i++) {
            if (order[i] == 0) {
                cout << i + 1 << "\n";
                break;
            }
        }
    }
}

