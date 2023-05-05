#include<bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    vector<map<char, int>> v(n);

    for (int i = 0; i < n; i++) {
        string a;
        cin >> a;

        for (char c : a) {
            v[i][c]++;
        }
    }

    string ans = "";

    for (int i = 0; i <= 26; i++) {
        int mn = v[0]['a' + i];
        for (int j = 1; j < n; j++) {
            mn = min(mn, v[j]['a' + i]);
        }
        for (int j = 0; j < mn; j++) {
            ans += 'a' + i;
        }
    }

    cout << ans;
}
