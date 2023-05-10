#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
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

	ll n, ans = 0;
	cin >> n;

	vector<ll> a(n);
	for (ll i = 0; i < n; i++){
		cin >> a[i];
	}

	for (ll i = 1; i < n; i++){
		if (a[i] < a[i-1]){
			ans += a[i-1]-a[i];
			a[i] += a[i-1]-a[i];
		}
	}

	cout << ans;
}
