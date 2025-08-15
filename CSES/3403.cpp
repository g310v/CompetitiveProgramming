#include<bits/stdc++.h>
using namespace std;
using ll = long long int;

const int N = 1001;
int a[N], b[N];
int ans = 1001, n, m;
vector<int> nums;

void solve(int i, int j, vector<int> cur) {
    if (i == n || j == m) {
        if (nums.size() < cur.size()) {
            nums = cur;
        }
        return;
    }
    if (a[i] == b[j]) {
        cur.push_back(a[i]);
    }
    solve(i + 1, j, cur);
    solve(i, j + 1, cur);
}

// Dp state: dp[i][j] refers to lcs at ith of a and jth of b
// dp[i][j] = max(dp[i-1][j], dp[i][j-1]) + (a[i]==b[j]?1:0)
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;
    for (int i = 0; i <= n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i <= m; i++) {
        cin >> b[i];
    }

    solve(0, 0, {});

    cout << nums.size() << "\n";
    for (int i = 0; i < nums.size(); i++) cout << nums[i] << " ";
}
