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

double dist(pii a, pii b) {
    double aa = (b.f-a.f)*(b.f-a.f); 
    double bb = (b.s-a.s)*(b.s-a.s);
    return sqrt(aa + bb);
}

int main() {
    fast_io;
    setIO("moocast");

    int n; cin >> n;
    vector<tuple<int, int, int>> v(n);
    for (int i = 0; i < n; i++) {
        int x, y, p;
        cin >> x >> y >> p;
        v[i] = {x, y, p};
    }
    vector<int> adj[n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            pii a = {get<0>(v[i]), get<1>(v[i])};
            pii b = {get<0>(v[j]), get<1>(v[j])};
            double power = get<2>(v[i]);
            if (dist(a, b) <= power) {
                // then a can reach b
                adj[i].push_back(j);
            }
        }
    }
    /*
    int idx = 0;
    for (vector<int> cur : adj) {
        cout << idx << "\n";
        for (auto i : cur) {
            cout << i << " ";
        }
        idx++;
        cout << "\n";
    }
    */
    int ans = 0;
    for (int i = 0; i < n; i++) {
        int cur_mx = 1;
        vector<bool> visited(n, 0);
        // bfs
        visited[i] = true;
        deque<int> todo{i};
        while (!todo.empty()) {
            int cur = todo.front();
            todo.pop_front();
            for (auto u : adj[cur]) {
                if (!visited[u]) {
                    cur_mx++;
                    visited[u] = true;
                    todo.push_back(u);
                }
            }
        }
        ans = max(ans, cur_mx);
    }
    cout << ans << "\n";
}
