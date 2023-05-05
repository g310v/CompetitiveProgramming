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

int k, n, w, c;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin >> k >> n >> w;
	c = ((w*(w+1))/2)*k;
	if (n<c) cout << c - n;
	else cout << 0;
}
