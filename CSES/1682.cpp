#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
#define f first
#define s second
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);

// usaco 
/*
void setIO(string s) {
    freopen((s + ".in").c_str(), "r", stdin);
    freopen((s + ".out").c_str(), "w", stdout);
}
*/


int main() {
    //setIO("fenceplan");
    fast_io;

    int n, m; cin >> n >> m;

    vector<int> adj[n + 1], adj2[n + 1];
    vector<bool> visited(n + 1, false);

    for (int i = 0; i < m; i++) {
        int a, b; cin >> a >> b;
        adj[a].push_back(b);
        adj2[b].push_back(a);
    }

    visited[1] = true;
    deque<int> dq{1};
    while (!dq.empty()) {
        int cur = dq.front();
        dq.pop_front();
        for (auto u : adj[cur]) {
            if (!visited[u]) {
                visited[u] = true;
                dq.push_back(u);
            }
        }
    }

    int anomaly = -1;
    for (int i = 1; i <= n; i++) {
        if (!visited[i]) {
            anomaly = i;
            break;
        }
    }

    if (anomaly != -1) {
        cout << "NO\n";
        cout << 1 << " " << anomaly << "\n";
    }
    else {
        vector<bool> visited2(n + 1, false);

        visited2[1] = true;
        deque<int> dq2{1};
        while (!dq2.empty()) {
            int cur = dq2.front();
            dq2.pop_front();
            for (auto u : adj2[cur]) {
                if (!visited2[u]) {
                    visited2[u] = true;
                    dq2.push_back(u);
                }
            }
        }

        for (int i = 1; i <= n; i++) {
            if (!visited2[i]) {
                anomaly = i;
                break;
            }
        }

        if (anomaly != -1) {
            cout << "NO\n";
            cout << anomaly << " 1\n";
        }
        else {
            cout << "YES\n";
        }
    }
}


