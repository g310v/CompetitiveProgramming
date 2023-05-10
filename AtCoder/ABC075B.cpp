#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;

    vector<vector<char>> a(n + 2, vector<char>(m + 2));

    for (int i = 0; i < n + 2; i++) {
        if (i > 0 && i < n + 1) {
            string s;
            cin >> s;

            for (int j = 0; j < m + 2; j++) {
                if (j > 0 && j < m + 1) {
                    a[i][j] = s[j - 1];
                }
                else {
                    a[i][j] = '.';
                }
            }
        }
        else {
            for (int j = 0; j < m + 2; j++) {
                a[i][j] = '.';
            }
        }
    }

    for (int i = 1; i < n + 1; i++) {
        for (int j = 1; j < m + 1; j++) {
            if (a[i][j] == '#') {
                cout << a[i][j];
            }
            else {
                int cur = 0;

                if (a[i - 1][j - 1] == '#') cur++;
                if (a[i][j - 1] == '#') cur++;
                if (a[i + 1][j - 1] == '#') cur++;
                if (a[i - 1][j] == '#') cur++;
                if (a[i + 1][j] == '#') cur++;
                if (a[i - 1][j + 1] == '#') cur++;
                if (a[i][j + 1] == '#') cur++;
                if (a[i + 1][j + 1] == '#') cur++;

                cout << cur;
            }
        }
        cout << "\n";
    }
}
