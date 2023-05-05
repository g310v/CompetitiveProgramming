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

	int t;
	cin >> t;

	while (t--) {
		int n, k;
		cin >> n >> k;

		int c = 0, cur = 1;

		for (int i = 0; i < n; i++) {
			int a;
			cin >> a;
			if (a == cur) 
				cur++;
			else
				c++;
		}

		if (c % k == 0)
			cout << c / k << "\n";
		else
			cout << (c / k) + 1 << "\n";
	}
}
