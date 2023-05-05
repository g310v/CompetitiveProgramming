#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int x, y;
    cin >> x >> y;

    if (y % 2 == 1) cout << "No"; 
    else {
        y /= 2;
        if (y % 2 == 0) {
            if (x >= y / 2 && x <= y) cout << "Yes";
            else cout << "No";
        }
        else {
            if (x >= (y / 2) + 1 && x <= y) cout << "Yes";
            else cout << "No";
        }
    }
}

