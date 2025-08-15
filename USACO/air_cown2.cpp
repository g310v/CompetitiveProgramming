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

bool sortbym(const vector<int>& v1, const vector<int>& v2) {
	return v1[3] < v2[3];
}

int arr[100] = {};

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, m, ans = 0;
	cin >> n >> m;

	vector<vector<int>> a(n, vector<int> (3));
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> a[i][j];
		}
	}	
	
	vector<vector<int>> b(m, vector<int> (3));

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < 4; j++) {
			cin >> b[i][j];
		}
	}

	sort(b.begin(), b.end(), sortbym);

	for (int i = 0; i < n; i++) {
		for (int j = a[i][0] - 1; j < a[i][1]; j++) {
			arr[j] += a[i][2];
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (b[j][0] <= i + 1 && b[j][1] >= i + 1) {
				if (arr[i] > 0) {
					for (int k = b[j][0] - 1; k < b[j][1]; k++) {
						arr[k] -= b[j][2];
					}
					ans += b[j][3];
				}
			}
		}
	}

	cout << ans;
}
