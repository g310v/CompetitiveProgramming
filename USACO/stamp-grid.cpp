#include <bits/stdc++.h>
using namespace std;

void rotate(vector<string>& cur, int size) {
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            swap(cur[i][j], cur[j][i]);
        }
    }

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size / 2; j++) {
            char temp = cur[i][j];
            cur[i][j] = cur[i][size - j - 1];
            cur[i][size - j - 1] = temp;
        }
    }
} 

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<string> a(n);
        
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int k;
        cin >> k;

        vector<string> b(k);

        for (int i = 0; i < k; i++) {
            cin >> b[i];
        }

        for (int i = 0; n - i >= k; i++) {
            for (int j = 0; n - j >= k; j++) {
                for (int l = 0; l < 4; l++) {
                    bool valid = true;
                    for (int m = 0; m < k; m++) {
                        for (int o = 0; o < k; o++) {
                            if (b[m][o] == '*' && a[i + m][j + o] == '.') {
                                valid = false;
                            }
                        }
                    }

                    if (valid) {
                        for (int m = 0; m < k; m++) {
                            for (int o = 0; o < k; o++) {
                                if (b[m][o] == '*') {
                                    a[i + m][j + o] = '0';
                                }
                            }
                        }
                    }

                    rotate(b, k);
                }
            }
        }

        string ans = "YES";
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (a[i][j] == '*') {
                    ans = "NO";
                    break;
                }
            }
            if (ans == "NO") {
                break;
            }
        }

        cout << ans << "\n";
    }
}

