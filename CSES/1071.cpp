#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
#define f first
#define s second
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);

// usaco 
/*
void setIO(string s) {
    freopen((s + ".in").c_str(), "r", stdin);
    freopen((s + ".out").c_str(), "w", stdout);
}
*/


int main() {
    //setIO("fenceplan");
    fast_io;

    ll n; cin >> n;
    while (n--) {
        ll y, x; cin >> y >> x; // row, col
        ll temp = max(y, x);
        if (temp % 2 == 0) {
            ll mx = temp * temp;
            if (x > y) {
                ll prev = (temp - 1) * (temp - 1);
                prev++;
                cout << prev + y - 1;
            }
            else {
                cout << mx - x + 1;
            }
        }
        else {
            ll mx = temp * temp;
            if (x < y) {
                ll prev = (temp - 1) * (temp - 1);
                prev++;
                cout << prev + x - 1;
            }
            else {
                cout << mx - y + 1;
            }
        }
        cout << "\n";
    }
}



