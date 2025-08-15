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

	int n;
	cin >> n;

	string str;
	cin >> str;

	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	char b1 = str[0];
	int leader_b2 = -1, last_b1 = -1;
	
	for (int i = 0; i < n; i++) {
		if (str[i] != b1 && leader_b2 == -1)
			leader_b2 = i;
		else if (str[i] == b1)
			last_b1 = i;
	}
	
	int ans = 0;

	for (int i = 0; i < leader_b2; i++) {
		if (i == 0) {
			if (str[i] == b1 && (a[i] >= last_b1 + 1 || a[i] >= leader_b2 + 1))
				ans++;
		}
		else {
			if (str[i] == b1 && a[i] >= leader_b2 + 1)
				ans++;
		}
	}
	
	cout << ans;
}
