#include<bits/stdc++.h>
using namespace std;
using ll = long long int;

void setIO(string s) {
	freopen((s + ".in").c_str(), "r", stdin);
	freopen((s + ".out").c_str(), "w", stdout);
}

int main() {
    setIO("cownomics");
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, k; cin >> n >> k;
    vector<string> a(n*2);
    for (int i = 0; i < n * 2; i++) cin >> a[i];
    int ans = 0;
    for (int i = 0; i < k; i++) {
        bool valid = true;
        map<char, bool> mp;
        for (int j = 0; j < n; j++) {
            mp[a[j][i]] = true;
        }
        for (int j = n; j < n * 2; j++) {
            if (mp[a[j][i]]) {
                valid = false;
                break;
            }
        }
        if (valid) ans++;
    }
    cout << ans << "\n";
}

