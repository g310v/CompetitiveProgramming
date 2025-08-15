#include<bits/stdc++.h>
using namespace std;
using ll = long long int;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;

    int INF = n + 1;
    vector<int> dp(n + 1, INF);
    dp[0] = 0;
    for (int i = 1; i <= n; i++) {
        int temp = i;
        while (temp > 0) {
            int cur = temp % 10;
            if (i - cur >= 0) {
                dp[i] = min(dp[i], dp[i - cur] + 1);
            }
            temp /= 10;
        }
    }
    // dp[x] = min steps from x to 0
    // dp[x] = min(dp[x - d1] + 1, ..., dp[x - dn] + 1)
    cout << dp[n] << "\n";
}
