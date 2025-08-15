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

const int MAXN = 1000;
int n;
vector<string> grid(MAXN);
vector<vector<int>> visited(MAXN, vector<int>(MAXN));
int area = -1, perimeter = -1;
int cur_area = 0, cur_perimeter = 0;

void dfs(int r, int c) {
    if (r >= n || c >= n || r < 0 || c < 0) {
        if (cur_area > 0) cur_perimeter++;
        return;
    }
    if (grid[r][c] == '.') {
        if (cur_area > 0) cur_perimeter++;
        return;
    }
    if (visited[r][c]) return;
    visited[r][c] = true;
    cur_area++;
    dfs(r-1,c);
    dfs(r+1,c);
    dfs(r,c-1);
    dfs(r,c+1);
}



int main() {
    setIO("perimeter");
    fast_io;

    cin >> n;
    for (int i = 0; i < n; i++) cin >> grid[i];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (grid[i][j] == '#' && !visited[i][j]) {
                cur_area = 0;
                cur_perimeter = 0;
                dfs(i, j);
                if (area == -1) {
                    area = cur_area;
                    perimeter = cur_perimeter;
                }
                else {
                    if (cur_area > area) {
                        area = cur_area;
                        perimeter = cur_perimeter;
                    }
                    else if (cur_area == area) {
                        perimeter = min(perimeter, cur_perimeter);
                    }
                }
            }
        }
    }
    
    cout << area << " " << perimeter << "\n";
}



