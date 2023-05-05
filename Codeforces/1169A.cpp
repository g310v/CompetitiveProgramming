#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, a, x, b, y;
    cin >> n >> a >> x >> b >> y;

    vector<bool> t1, t2;

    string ans = "NO";

    while (1) {
        if (a == b) {
            ans = "YES";
            break;
        }

        if (a == x || b == y) break;

        if (a == n) a = 1;
        else a++;

        if (b == 1) b = n;
        else b--;
    }
    
    cout << ans;
}

