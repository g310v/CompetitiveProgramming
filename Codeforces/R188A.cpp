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
	ll n, k;
	cin >> n >> k;
	if (n % 2 == 0){
		if (k <= n/2)
			cout << 1+2*(k-1);
		else
			cout << 2*(k-n/2);
	}
	else{
		if (k <= n/2+1)
			cout << 1+2*(k-1);
		else
			cout << 2*(k-(n/2+1));
	}
}
