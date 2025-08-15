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

	int t, sv, cur_sv, str_size;
	string str;
	bool found;
	cin >> t;

	while (t--) {
		cin >> str;

		found = false;
		sv = 2;
		str_size = sz(str);

		for (int i = 1; i < str_size - 1; i++) {
			if (str[i] == 'O') {
				found = true;
				cur_sv = 2;
				if (str[i - 1] == 'M') cur_sv--;
				if (str[i + 1] == 'O') cur_sv--;
				sv = min(sv, cur_sv);
			}
		}

		if (found) { 
			cout << sv + (str_size - 3) << "\n";
		}
		else
			cout << -1 << "\n";
	}
}
