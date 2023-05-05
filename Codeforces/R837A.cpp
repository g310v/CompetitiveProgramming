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
		ll n;
		cin >> n;

		ll arr[n];

		for (ll i = 0; i < n; i++) {
			cin >> arr[i];
		}

		sort(arr, arr + n);

		if (arr[0] == arr[n - 1]) {
			ll ans = n * (n - 1);
			cout << ans << "\n";
		}
		else {
			ll s = 1, l = 1;

			for (ll i = 1; i < n - 1; i++) {
				if (arr[i] == arr[0])
					s++;
				else if (arr[i] == arr[n - 1])
					l++;
			}

			ll ans = 2 * s * l;
			cout << ans << "\n";
		}
	}
}
