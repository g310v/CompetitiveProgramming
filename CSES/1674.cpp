#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
#define f first
#define s second
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
#define pb push_back

// usaco 
/*
void setIO(string s) {
    freopen((s + ".in").c_str(), "r", stdin);
    freopen((s + ".out").c_str(), "w", stdout);
}
*/

const int MAXN = 2*1e5;
vector<vector<int>> adj(MAXN);
vector<int> visited(MAXN, false);
vector<int> ans(MAXN, 0);

int dfs(int cur) {
    if (visited[cur]) return 0;
    visited[cur] = true;
    int cur_ans = 1;
    for (auto u : adj[cur]) {
        cur_ans += dfs(u);
    }
    ans[cur] = cur_ans;
    return cur_ans;
}


int main() {
    //setIO("fenceplan");
    fast_io;

    int n; cin >> n;
    for (int i = 2; i <= n; i++) {
        int x; cin >> x;
        adj[x].pb(i);
    }

    int x = dfs(1);

    for (int i = 1; i <= n; i++) {
        cout << ans[i] - 1 << " ";
    }

    cout << "\n";
}



