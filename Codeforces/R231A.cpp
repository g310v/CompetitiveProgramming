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
	int n, n1, n2, n3, ans = 0;
	cin >> n;
	while(n--){
		cin >> n1 >> n2 >> n3;
		if (n1+n2+n3 > 1){
			ans++;
		}
	}
	cout << ans;
}
