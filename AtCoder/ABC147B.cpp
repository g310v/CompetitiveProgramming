#include<bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string a;

    cin >> a;

    int n = a.length(), ans = 0;

    for (int i = 0; i < n / 2; i++) {
        if (a[i] != a[n-1-i]) ans++;
    }

    cout << ans;
}
