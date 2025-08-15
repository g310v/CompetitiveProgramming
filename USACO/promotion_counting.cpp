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

int b1, b2, s1, s2, g1, g2, p1, p2, s, g, p, tg, tp;

int main()
{
	freopen("promote.in", "r", stdin);
	freopen("promote.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	cin >> b1 >> b2 >> s1 >> s2 >> g1 >> g2 >> p1 >> p2;

	int g2p = p2 - p1;
	int s2g = g2 + p2 - g1 - p1;
	int b2s = s2 + g2 + p2 - s1 - g1 - p1;

	cout << g2p << "\n";
	cout << s2g << "\n";
	cout << b2s << "\n";
}
