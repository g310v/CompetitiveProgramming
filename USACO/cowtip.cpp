#include<bits/stdc++.h>
using namespace std;
using ll = long long int;

void setIO(string s) {
	freopen((s + ".in").c_str(), "r", stdin);
	freopen((s + ".out").c_str(), "w", stdout);
}

int main() {
    setIO("cowtip");
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;
    vector<string> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    vector<pair<int, int>> vp;
    int ans = 0;
    for (int i = n - 1; i >= 0; i--) {
        for (int j = n - 1; j >= 0; j--) {
            int ct = 0;
            for (pair<int, int> p : vp) {
                if (p.first >= i && p.second >= j) ct++;
            }
            if (ct % 2 == 1) v[i][j] = '0' + ('1' - v[i][j]);
            if (v[i][j] == '1') {
                vp.push_back(make_pair(i, j));
                v[i][j] = '0';
                ans++;
            }
        }
    }
    cout << ans << "\n";
}


