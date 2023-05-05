#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        ll n;
        cin >> n;

        if (n == 0) cout << 0;
        else if (n < 10) cout << 2;
        else {
            n -= 9;
            int level = (n/4);
            if (n%4!=0) {
                level++;
            }
            if (level%2==1) {
                cout << 2+level;
            }
            else {
                cout << (1+level)*2;
            }
        }
        cout << "\n";
    }
}
