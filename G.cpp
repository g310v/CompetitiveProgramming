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
   
    ll k, l, r, f;
    cin >> k >> l >> r;

    ll found, ans = 0;

    for (ll x = 1; x <= r; x++) {
        if (found)
            break;
        for (ll y = 1; y <= r; y++) {
            if (found)
                break;
            for (ll z = 1; z <= r; z++) {
                f = (x * y * z) + (4 * x * y) + (2 * x * z) + (y * z) + (8 * x) + (4 * y) + (2 * z) + k;
                if (f >= l && f <= r) {
                    ans++;
                }
            }
        }
    }

    cout << ans;
}
