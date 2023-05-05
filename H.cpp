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
   
    ll t;
    cin >> t;

    while (t--) {
        ll n, q, v, k, v1, v2;
        cin >> n >> q;

        //vector<ll> a(n, 0);

        ll a[n] = {};

        while (q--) {
            cin >> v >> k;
            if (v % n == 0) {
                a[n - 1] += k;
            }
            else {
                a[(v % n) - 1] += k;
            }

            k--;
            v1 = v + 1;
            v2 = v - 1;

            while (k > 0) {
                if (v1 % n == 0) {
                    a[n - 1] += k;
                }
                else {
                    a[(v1 % n) - 1] += k;
                }

                if (v2 % n == 0) {
                    a[n - 1] += k;
                }
                else if (v2 > 0) {
                    a[(v2 % n) - 1] += k;
                }
                else {
                    a[n - abs(v2 % n) - 1] += k;
                }

                v1++;
                v2--;
                k--;
            }
        }

        for (int i = 0; i < n; i++) {
            if (i < n - 1)
                cout << a[i] % (1000000007) << " ";
            else 
                cout << a[i] % (1000000007) << "\n";
        }
    }
}
