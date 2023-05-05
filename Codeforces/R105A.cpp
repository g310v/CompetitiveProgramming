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

int k, l, m, n, d, ans;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin >> k >> l >> m >> n >> d;
	ans = d;
	for (int i = 1; i <= d; i++){
		if (i%k!=0 && i%l!=0 && i%m!=0 && i%n!=0){
			ans--;
		}
	}
	cout << ans;
}
