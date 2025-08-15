#include<bits/stdc++.h>
using namespace std;
using ll = long long int;

void setIO(string s) {
	freopen((s + ".in").c_str(), "r", stdin);
	freopen((s + ".out").c_str(), "w", stdout);
}

int main() {
    setIO("gymnastics");
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int k, n; cin >> k >> n;
    map<int, vector<int>> mp;
    for (int i = 0; i < k; i++) {
        for (int j = 0; j < n; j++) {
            int a; cin >> a;
            mp[a].push_back(j);
        }
    }
    int ans = 0;
    for (int i = 1; i < n; i++) {
        for (int j = i + 1; j <= n; j++) {
            bool valid = true;
            int cond = 0; // 0 if i < j, else 1
            for (int l = 0; l < k; l++) {
                if (mp[i][l] == mp[j][l]) {
                    valid = false;
                    break;
                }
                else if (l == 0) {
                    if (mp[i][l] < mp[j][l]) cond = 0;
                    else cond = 1;
                }
                else {
                    if (cond == 0) {
                        if (mp[i][l] > mp[j][l]) {
                            valid = false;
                            break;
                        }
                    }
                    else {
                        if (mp[i][l] < mp[j][l]) {
                            valid = false;
                            break;
                        }
                    }
                }
            }
            if (valid) ans++;
        }
    }
    cout << ans << "\n";
}
