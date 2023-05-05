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

int t, n, s, r, rem;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	cin >> t;
	
	while (t--) {
		cin >> n >> s >> r;
		cout << r / (n - 1) + (r % (n - 1)) << " ";
		for (int i = 0; i < n - 2; i++){
			cout << r / (n - 1) << " ";
		}
		cout << s - r << "\n";
	}
}

