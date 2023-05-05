#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        long long a, b;
        cin >> a >> b;

        if (a == 1 || b == 1) {
            cout << 1 << "\n" << a << " " << b << "\n";
        }
        else if (a % b == 0 || b % a == 0 || (a % 2 == 0 && b % 2 == 0)) {
            if ((a - 1) % b != 0 && b % (a - 1) != 0) {
                cout << 2 << "\n" << a - 1 << " " << b << "\n" << a << " " << b << "\n";
            }
            else {
                cout << 2 << "\n" << a << " " << b - 1 << "\n" << a << " " << b << "\n";
            }
        }
        else {
            cout << 1 << "\n" << a << " " << b << "\n";
        }
    }
}
