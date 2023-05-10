#include <bits/stdc++.h>
using namespace std;

int mx;
vector<vector<char>> a;
vector<vector<char>> b;

void rotate() {
    for (int i = 0; i < mx; i++) {
        for (int j = i; j < mx; j++) {
            int temp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = temp;

            temp = b[i][j];
            b[i][j] = b[j][i];
            b[j][i] = temp;
        }
    }

    for (int i = 0; i < mx; i++) {
        for (int j = 0; j < mx / 2; j++) {
            int temp = a[i][j];
            a[i][j] = a[i][mx - j - 1];
            a[i][mx - j - 1] = temp;

            temp = b[i][j];
            b[i][j] = b[i][mx - j - 1];
            b[i][mx - j - 1] = temp;
        }
    }
}

void solve() {
    for (int i = 0; i < mx; i++) {
        for (int j = mx - 1; j >= 0; j--) {
            if (a[j][i] >= 'A' && a[j][i] <= 'Z') {
                int dest = j;
                for (int k = j + 1; k < mx; k++) {
                    if (a[k][i] == '.' || a[k][i] == '0') {
                        dest = k;
                    }
                    else if (a[k][i] > '0' && a[k][i] <= '9') {
                        dest = k;
                        break;
                    }
                    else {
                        break;
                    }
                }
                if (dest != j) {
                    if (a[dest][i] == '.' || a[dest][i] == '0') {
                        a[dest][i] = a[j][i];
                        if (b[j][i] == '0') a[j][i] = '0';
                        else a[j][i] = '.';
                    }
                    else {
                        b[dest][i] -= 1;
                        a[dest][i] -= 1;
                        if (b[j][i] == '0') a[j][i] = '0';
                        else a[j][i] = '.';
                    }
                }
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        vector<char> cur;
        string s;
        cin >> s;
        for (int j = 0; j < s.length(); j++) {
            cur.push_back(s[j]);
        }
        a.push_back(cur);
    }

    mx = max(n, m);

    if (n < m) {
        for (int i = 0; i < m - n; i++) {
            vector<char> cur;
            for (int j = 0; j < m; j++) {
                cur.push_back('#');
            }
            a.push_back(cur);
        }
    }
    else if (n > m) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n - m; j++) {
                a[i].push_back('#');
            }
        }
    }

    b = a;

    string s;
    cin >> s;

    for (char c : s) {
        int r = 0;
        if (c == 'E') r = 1;
        else if (c == 'N') r = 2;
        else if (c == 'W') r = 3;
        
        for (int i = 0; i < r; i++) {
            rotate();
        }

        solve();

        if (r > 0) {
            for (int i = 0; i < 4 - r; i++) {
                rotate();
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << a[i][j];
        }
        cout << "\n";
    }
}

