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

    int n; cin >> n;
    if (n < 4 && n != 1) cout << "NO SOLUTION\n";
    else {
        if (n > 1) {
            for (int i = 2; i <= n; i+=2) {
                cout << i << " ";
            }
        }
        for (int i = 1; i <= n; i+=2) {
            cout << i << " ";
        }
        cout << "\n";
    }
}



