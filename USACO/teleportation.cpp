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

int a, b, x, y, h, t;

int main()
{
	freopen("teleport.in", "r", stdin);
	freopen("teleport.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	cin >> a >> b >> x >> y;
	h = abs(a-b);
	if(abs(b-x) < abs(b-y)){
		t = abs(a-y);
		t += abs(b-x);
	}
	else{
		t = abs(a-x);
		t += abs(b-y);
	}
	cout << min(h, t);
}
