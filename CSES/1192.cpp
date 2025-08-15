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

const int MAXN = 1000;

string grid[MAXN];
bool vis[MAXN][MAXN];
int n, m;

void flood_fill(int i, int j, char c) {
    if ((i < 0 || j < 0 || i >= n || j >= m) || grid[i][j] != c || vis[i][j]) {
        return;
    }
    vis[i][j] = true;
    flood_fill(i-1,j,c);
    flood_fill(i+1,j,c);
    flood_fill(i,j-1,c);
    flood_fill(i,j+1,c);
}

int main() {
    //setIO("fenceplan");
    fast_io;

    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> grid[i];
    }

    int ans = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (!vis[i][j] && grid[i][j] == '.') {
                flood_fill(i, j, grid[i][j]);
                ans++;
            }
        }
    }

    cout << ans << "\n";
}



