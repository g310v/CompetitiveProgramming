#include<bits/stdc++.h>
using namespace std;
using ll = long long int;

const int N = 1e5;
vector<int> adj[N + 1];
vector<bool> visited(N + 1, 0);
vector<int> color(N + 1);

bool valid = true;

void dfs(int x, int c) {
    if (visited[x]) {
        if (color[x] != c) valid = false;
        return;
    }
    visited[x] = true;
    color[x] = c;
    if (c == 1) c++;
    else c--;
    for (auto u : adj[x]) {
        dfs(u, c);
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int a, b; cin >> a >> b;
        adj[a].push_back(b); 
        adj[b].push_back(a);
    }
    
    for (int i = 1; i <= n; i++) {
        if (!visited[i]) {
            dfs(i, 1); 
        }
    }

    if (valid) {
        for (int i = 1; i <= n; i++) {
            cout << color[i] << " ";
        }
        cout << "\n";
    }
    else {
        cout << "IMPOSSIBLE\n";
    }
}
