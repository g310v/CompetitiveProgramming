#include<bits/stdc++.h>
using namespace std;
using ll = long long int;

void setIO(string name = "") {  // name is nonempty for USACO file I/O
    ios_base::sync_with_stdio(0);
    cin.tie(0);  // see Fast Input & Output
    // alternatively, cin.tie(0)->sync_with_stdio(0);
    if (!name.empty()) {
        freopen((name + ".in").c_str(), "r", stdin);  // see Input & Output
        freopen((name + ".out").c_str(), "w", stdout);
    }
}


int main() {
    setIO("haybales");

    int n, q; cin >> n >> q;
    vector<int> a(n);
    for (int &x : a) {
        cin >> x;
    }
    sort(a.begin(), a.end());
    while (q--) {
        int x, y; cin >> x >> y;
        cout << upper_bound(a.begin(), a.end(), y) - lower_bound(a.begin(), a.end(), x) << "\n";
    }
}
