#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    vector<vector<int>> a(9, vector<int>(9));

    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            cin >> a[i][j];
        }
    }

    bool row = true;
    for (int i = 0; i < 9; i++) {
        for (int j = 1; j <= 9; j++) {
            bool found = false;
            for (int k = 0; k < 9; k++) {
                if (a[i][k] == j) {
                    found = true;
                    break;
                }
            }
            if (!found) {
                row = false;
                break;
            }
        }
        if (!row) {
            break;
        }
    }


    bool col = true;
    for (int i = 0; i < 9; i++) {
        for (int j = 1; j <= 9; j++) {
            bool found = false;
            for (int k = 0; k < 9; k++) {
                if (a[k][i] == j) {
                    found = true;
                    break;
                }
            }
            if (!found) {
                col = false;
                break;
            }
        }
        if (!col) {
            break;
        }
    }

    bool box = true;
    for (int i = 0; i < 9; i+=3) {
        for (int j = 0; j < 9; j+=3) {
            for (int k = 0; k < 3; k++) {
                for (int l = 1; l <= 9; l++) {
                    bool found = false;
                    for (int m = 0; m < 9; m++) {
                        if (a[k][m] == l) {
                            found = true;
                            break;
                        }
                    }
                    if (!found) {
                        box = false;
                        break;
                    }
                }
                if (!box) {
                    break;
                }
            }
            if (!box) {
                break;
            }
        }
        if (!box) {
            break;
        }
    }

    if (row && col && box) {
        cout << "VALID";
    }
    else {
        cout << "INVALID";
    }
}
