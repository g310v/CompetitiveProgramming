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
		int k, n;
		cin >> k >> n;

		int arr[k], chr = 1;

		arr[k - 1] = n;

		for (int i = k - 2; i >= 0; i--) {
			if (arr[i + 1] - chr > i) {
				arr[i] = arr[i + 1] - chr;
				chr++;
			}	
			else {
				arr[i] = arr[i + 1] - 1;
			}
		}

		for (int i = 0; i < k; i++) {
			cout << arr[i] << " ";
		}
		cout << "\n";
	}
}
