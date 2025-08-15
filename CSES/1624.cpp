#include<bits/stdc++.h>
using namespace std;
using ll = long long int;

int ans = 0;
vector<string> a(8);
vector<int> col(8, 0), diag1(15, 0), diag2(15, 0);  

void solve(int y) {
    if (y == 8) {
        ans++;
        return;
    }
    for (int x = 0; x < 8; x++) {
        if (col[x] || diag1[x+y] || diag2[x-y+8-1] || (a[y][x] == '*')) continue;
        col[x] = diag1[x+y] = diag2[x-y+8-1] = 1;
        solve(y+1);
        col[x] = diag1[x+y] = diag2[x-y+8-1] = 0;
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    for (int i = 0; i < 8; i++) cin >> a[i];
    solve(0);

    cout << ans << "\n";
}
