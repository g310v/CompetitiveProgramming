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
		int n;
		cin >> n;

		string str;
		cin >> str;

		map<string, int> m;

		string ans = "NO";

		for (int i = 0; i < n - 1; i++) {
			string t = str.substr(i, 2);
			if (m.count(t)) {
				if (m[t] < i - 1) {
					ans = "YES";
					break;
				}
			}
			else {
				m[t] = i;
			}
		}

		cout << ans << "\n";
	}
}
