#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int k, s;
    cin >> k >> s;

    int ans = 0;

    for (int i = 0; i <= k; i++) {
        for (int j = 0; j <= k; j++) {
            int need = s - (i + j);
            if (need >= 0 && need <= k) ans++; 
        }
    }

    cout << ans;
}
