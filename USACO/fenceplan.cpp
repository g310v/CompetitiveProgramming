#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
#define f first
#define s second
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);

// usaco 
void setIO(string s) {
    freopen((s + ".in").c_str(), "r", stdin);
    freopen((s + ".out").c_str(), "w", stdout);
}


int main() {
    fast_io;
    //setIO("fenceplan");

    int n, m; cin >> n >> m;
    vector<pii> v(n + 1);
    for (int i = 1; i <= n; i++) {
        int x, y;
        cin >> x >> y;
        v[i] = {x,y};
    }
    vector<int> adj[n + 1];
    for (int i = 0; i < m; i++) {
        int a, b; cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    vector<bool> visited(n + 1, 0);
    int ans = INT_MAX;
    for (int i = 1; i <= n; i++) {
        if (visited[i]) continue;
        int left = v[i].f, right = v[i].f;
        int top = v[i].s, bottom = v[i].s;
        // bfs2 
        visited[i] = true;
        deque<int> todo{i};
        while (!todo.empty()) {
            int cur = todo.front();
            todo.pop_front();
            for (auto u : adj[cur]) {
                if (!visited[u]) {
                    left = min(left, v[u].f);
                    right = max(right, v[u].f);
                    top = max(top, v[u].s);
                    bottom = min(bottom, v[u].s);
                    visited[u] = true;
                    todo.push_back(u);
                }
            }
        }
        int cur_ans = 2 * (right - left) + 2 * (top - bottom);
        ans = min(ans, cur_ans);
    }
    cout << ans << "\n";
}

