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

		ll arr[n];
		for (ll i = 0; i < n; i++) {
			cin >> arr[i];
		}

		ll m = arr[0];
		for (ll i = 0; i < n; i++) {
			m = min(m, arr[i]);
		}

		if (m == arr[0]) cout << "Bob" << "\n";
		else cout << "Alice" << "\n";
	}
}
