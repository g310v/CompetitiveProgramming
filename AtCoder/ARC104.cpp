#include<bits/stdc++.h>
using namespace std;

/*
 * 2 1 3 5 4
 * 3 5 2 1 4
 */

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    string s;
    cin >> n >> s;

    int ans = 0;

    for (int i = 0; i < n; i++) {
        int cur1 = 0, cur2 = 0;
        for (int j = i; j < n; j++) {
            if (s[j] == 'A') cur1++;
            else if (s[j] == 'T') cur1--;
            else if (s[j] == 'C') cur2++;
            else cur2--;

            if (cur1 == 0 && cur2 == 0) ans++;
        }
    }

    cout << ans;
}
