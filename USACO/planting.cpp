#include<bits/stdc++.h>
using namespace std;
using ll = long long int;

void setIO(string s) {
	freopen((s + ".in").c_str(), "r", stdin);
	freopen((s + ".out").c_str(), "w", stdout);
}

int main() {
    setIO("planting");
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;
    map<int, int> mp;
    for (int i = 0; i < n - 1; i++) {
        int a, b; cin >> a >> b;
        mp[a]++;
        mp[b]++;
    }
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        ans = max(ans, mp[i] + 1); 
    }
    cout << ans << "\n";
}
