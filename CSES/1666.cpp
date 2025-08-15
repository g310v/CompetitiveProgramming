#include<bits/stdc++.h>
using namespace std;
using ll = long long int;

const int N = 1e5;
vector<int> a[N + 1];
vector<bool> visited(N + 1, 0);

void dfs(int cur) {
    if (visited[cur]) return;
    visited[cur] = 1;
    for (auto u : a[cur]) {
        dfs(u);
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, m; cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int x, y; cin >> x >> y;
        a[x].push_back(y);
        a[y].push_back(x);
    }
    vector<int> ans;
    for (int i = 1; i <= n; i++) {
        if (!visited[i]) {
            ans.push_back(i);
            visited[i] = true;
            deque<int> dq{i};
            while (!dq.empty()) {
                int cur = dq.front();
                dq.pop_front();
                for (auto u : a[cur]) {
                    if (!visited[u]) {
                        dq.push_back(u);
                        visited[u] = true;
                    }
                }
            }
        }
    }
    cout << ans.size() - 1 << "\n";
    for (int i = 0; i < ans.size() - 1; i++) {
        cout << ans[i] << " " << ans[i + 1] << "\n";
    }
}
