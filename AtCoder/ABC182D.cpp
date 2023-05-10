#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); 
    cin.tie(0);

    int n;
    cin >> n;

    vector<int> a(n);

    int cur = 0, ans = 0;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cur += a[j];
            ans = max(ans, cur);
        }
    }

    cout << ans;
}

/*
 
 */ 
