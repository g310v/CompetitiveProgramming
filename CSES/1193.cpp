#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
/*
#define f first
#define s second
*/
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
bool found = false;
int n, m;
int path_sz = -1;
string path = "";

void dfs(int i, int j, string cur) {
    if ((i < 0 || j < 0 || i >= n || j >= m) || grid[i][j] == '#' || vis[i][j]) {
        return;
    }
    if (grid[i][j] == 'B') {
        found = true;
        int sz = cur.size();
        if (path_sz == -1 || path_sz > sz) {
            path_sz = sz;
            path = cur;
        }
        return;
    }
    vis[i][j] = true;
    dfs(i-1,j,cur+'U');
    dfs(i+1,j,cur+'D');
    dfs(i,j-1,cur+'L');
    dfs(i,j+1,cur+'R');
}

int main() {
    //setIO("fenceplan");
    fast_io;

    cin >> n >> m;
    int r, c;
    for (int i = 0; i < n; i++) {
        cin >> grid[i];
        for (int j = 0; j < m; j++) {
            if (grid[i][j] == 'A') {
                r = i, c = j;
            }
        }
    }

    dfs(r, c, "");

    if (found) cout << "YES\n" << path_sz << "\n" << path << "\n";
    else cout << "NO\n";
}




