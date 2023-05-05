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
		int n, m;
		cin >> n >> m;

		ll a[n], b[m];
		
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}	

		for (int i = 0; i < m; i++) {
			cin >> b[i];
		}

		ll sum = 0;

		for (int i = 0; i < n; i++) {
			sum += a[i];
		}

		ll cur, ra, rb;

		// replace a[j] with b[i];

		for (int i = 0; i < m; i++) {
			cur = 0;

			for (int j = 0; j < n; j++) {
				if (sum + b[i] - a[j] > cur) {
					cur = sum + b[i] - a[j];
					ra = j;
					rb = b[i];
				}
			}

			sum = cur;
			a[ra] = rb;
		}

		cout << sum << "\n";
	}
}
