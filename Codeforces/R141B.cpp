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
		int a[n][n], cur = 1;
		for (int i = 0; i < n; i++) {
			if (i % 2 == 0) {
				for (int j = 1; j < n; j+=2) {
					a[i][j] = cur;
					cur++;
				}
			}
			else {
				if (n % 2 == 0) {
					for (int j = n - 2; j >= 0; j-=2) {
						a[i][j] = cur;
						cur++;
					}
				}
				else {
					for (int j = n - 1; j >= 0; j-=2) {
						a[i][j] = cur;
						cur++;
					}
				}
			}
		}
		
		cur = n*n;
		for (int i = 0; i < n; i++) {
			if (i % 2 == 0) {
				for (int j = 0; j < n; j+=2) {
					a[i][j] = cur;
					cur--;
				}
			}
			else {
				if (n % 2 == 0) {
					for (int j = n - 1; j >= 0; j-=2) {
						a[i][j] = cur;
						cur--;
					}
				}
				else {
					for (int j = n - 2; j >= 0; j-=2) {
						a[i][j] = cur;
						cur--;
					}	
				}
			}
		}

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				cout << a[i][j] << " ";
			}
			cout << "\n";
		}
	}
}
