#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    string s;
    cin >> n >> s;

    int l = 0, r = n - 1;

    vector<int> a(10);

    for (char c : s) {
        if (c == 'L') {
            for (int i = 0; i < 10; i++) {
                if (a[i] == 0) {
                    a[i] = 1;
                    break;
                }
            }
        }
        else if (c == 'R') {
            for (int i = 9; i >= 0; i--) {
                if (a[i] == 0) {
                    a[i] = 1;
                    break;
                }
            }
        }
        else {
            a[c - 48] = 0;
        }
    }

    for (int x : a) {
        cout << x;
    }
}
