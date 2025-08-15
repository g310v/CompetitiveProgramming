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

	ll n, cur;
	cin >> n;

	ll sum = n*(n+1)/2;
	for (ll i = 0; i < n-1; i++){
		cin >> cur;
		sum -= cur;
	}

	cout << sum;
}
