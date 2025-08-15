#include<bits/stdc++.h>
using namespace std;
using ll = long long int;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll l = 1, r = 1e9+1;
    while (l < r) {
        ll mid = (l + r) / 2;
        cout << "? " << mid << endl;
        string s; cin >> s;
        if (s == "YES") l = mid + 1;
        else r = mid;
    }
    cout << "! " << l << "\n";
}
