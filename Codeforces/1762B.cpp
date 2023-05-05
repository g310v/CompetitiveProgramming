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
		ll n;
		cin >> n;

		ll a[n];

		for (ll i = 0; i < n; i++) {
			cin >> a[i];
		}

		ll total = 0;
		vector<pair<ll, ll>> p;

		for (ll i = 0; i < n; i++) {
			ll need = a[i] % 10;
			if (need) {
				need = 10 - need;
				while (need > 0) {
					if (need > a[i]) {
						p.pb(mp(i + 1, a[i]));
						need -= a[i];
					}
					else {
						p.pb(mp(i + 1, need)); 
						need = 0;
					}
					total++;
				}
			}
			else {
				p.pb(mp(i + 1, 0));
				total++;
			}
		}

		cout << total << "\n";

		for (ll i = 0; i < total; i++) {
			cout << p[i].first << " " << p[i].second << "\n";
		}
	}
}
