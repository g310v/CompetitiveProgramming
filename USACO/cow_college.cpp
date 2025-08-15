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
	//freopen(".in", "r", stdin);
	//freopen(".out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	ll n;
	cin >> n;

	vll a(n);
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}

	sort(a.begin(), a.end());

	long long m = a[0]*n, t = a[0], cur_m, cur_t;
	for (int i = 1; i < n; i++){
		cur_m = a[i] * (n-i);
		cur_t = a[i];
		if (cur_m > m){
			m = cur_m;
			t = cur_t;
		}
		else if (cur_m == m){
			if (cur_t < t){
				t = cur_t;
			}
		}
	}
	cout << m << " " << t;
}
