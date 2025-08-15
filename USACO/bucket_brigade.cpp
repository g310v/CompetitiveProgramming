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
	freopen("buckets.in", "r", stdin);
	freopen("buckets.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	vector<string> a(10);
	pair<int, int> b, r, l;

	for (int i = 0; i < 10; i++){
		cin >> a[i];
		for (int j = 0; j < 10; j++){
			if (a[i][j] == 'B')
				b = mp(i, j);
			else if (a[i][j] == 'R')
				r = mp(i, j);
			else if (a[i][j] == 'L')
				l = mp(i, j);
		}
	}
	
	if (r.f == b.f && b.f == l.f){
		if ((r.s < b.s && r.s > l.s) || (r.s > b.s && r.s < l.s))
			cout << abs(b.f-l.f) + abs(b.s-l.s) - 1 + 2;
		else
			cout << abs(b.f-l.f) + abs(b.s-l.s) - 1;
	}
	else if (r.s == b.s && b.s == l.s){
		if ((r.f < b.f && r.f > l.f) || (r.f > b.f && r.f < l.f))
			cout << abs(b.f-l.f) + abs(b.s-l.s) - 1 + 2;
		else
			cout << abs(b.f-l.f) + abs(b.s-l.s) - 1;
	}
	else
		cout << abs(b.f-l.f) + abs(b.s-l.s) - 1;
}
