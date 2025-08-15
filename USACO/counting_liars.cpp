#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int l, r;
    cin >> l >> r;

    int ans = -1;

    for (int i = l; i <= r; i++) {
        vector<int> a(10);
        int x = i;
        bool valid = true;
        while (x > 0) {
            if (a[x % 10] == 1) {
                valid = false;
                break;
            }
            else {
                a[x % 10]++;
            }
            x = x / 10;
        }
        if (valid) {
            ans = i;
            break;
        }
    }

    cout << ans;
}
