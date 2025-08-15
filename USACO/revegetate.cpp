#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
#define f first
#define s second
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
#define pb push_back

// usaco 
void setIO(string s) {
    freopen((s + ".in").c_str(), "r", stdin);
    freopen((s + ".out").c_str(), "w", stdout);
}


int main() {
    setIO("revegetate");
    fast_io;

    int n, m; cin >> n >> m;
    vector<vector<pair<int, bool>>> adj(n);

    for (int i = 0; i < m; i++) {
        char type;
        int u, v;
        cin >> type >> u >> v;

        adj[--u].push_back({--v, type == 'S'});
        adj[v].push_back({u, type == 'S'});
    }

    int ans = 0;
    bool valid = true;
    vector<int> color(n, -1);

    for (int i = 0; i < n; i++) {
        if (color[i] == -1) {
            ans++;
            deque<pair<int, bool>> todo;
            todo.pb({i, true});

            while (!todo.empty()) {
                pair<int, bool> cur = todo.front();
                todo.pop_front();

                color[cur.f] = cur.s;

                for (auto u : adj[cur.f]) {
                    bool type = u.s ? cur.s : !cur.s;
                    if (color[u.f] == -1) {
                        todo.push_back({u.f, type});
                    } else if (color[u.f] == !type) {
                        valid = false;
                        break;
                    }
                }
            }
        }
    }

    if (!valid) cout << 0 << "\n";
    else {
        cout << 1;
        for (int i = 0; i < ans; i++) cout << 0;
        cout << "\n";
    }
}



