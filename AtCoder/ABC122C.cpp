#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;

    vector<int> a(n + 1);

    string s;
    cin >> s;

    int p = 0;

    for (int i = 1; i < n; i++) {
        if (s[i] == 'C' && s[i - 1] == 'A') {
            a[i + 1] = a[p] + 1;
            p = i + 1;
        }
        else {
            a[i + 1] = a[i];
        }
    }

    while (m--) {
        int l, r;
        cin >> l >> r;
        cout << a[r] - a[l] << "\n";
    }
}

