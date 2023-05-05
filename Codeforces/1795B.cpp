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
   
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        int mn = 50, mx = 1, valid = 0;
        vector<pair<int,int>> vp;

        for (int i = 0; i < n; i++) {
            int a, b;
            cin >> a >> b;

            if (a <= k && b >= k) {
                valid++;
                vp.pb(mp(a, b));
            }
        }

        if (!valid) cout << "NO\n";
        else {
            map<int, int> mapp;

            for (int i = 0; i < valid; i++) {
                for (int j = vp[i].f; j <= vp[i].s; j++) {
                    mapp[j]++;
                }
            }


            string ans = "YES";
            for (auto i : mapp) {
                if (i.f != k && i.s == valid) {
                    ans = "NO";
                    break;
                }
            }

            cout << ans << "\n";
        }
    }
}
