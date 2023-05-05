#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vi = vector<int>;
using vll = vector<long long>;
using vb = vector<bool>;
using vs = vector<string>;
#define pb push_back
#define rsz resize
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
using pi = pair<int,int>;
#define f first
#define s second
#define mp make_pair

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
   
    int n;
    cin >> n;

    int x = 0, y = 0;
    vector<int> xr, yr;

    while (n--) {
        int a;
        cin >> a;

        if (a > 0){ 
            x += a;
            xr.pb(a);
        }
        else {
            y += -a;
            yr.pb(a);
        }
    }

    int xc = xr.size(), yc = yr.size();

    if (x > y)
        cout << "first";
    else if (y > x) 
        cout << "second";
    else if (xc > yc)
        cout << "first";
    else if (yc > xc)
        cout << "second";
    else {
        string ans = "first";
        for (int i = 0; i < xc; i++) {
            if (xr[i] > yr[i]) {
                break;
            }
            else if (xr[i] < yr[i]) {
                ans = "second";
                break;
            }
        }

        cout << ans;
    }
}
