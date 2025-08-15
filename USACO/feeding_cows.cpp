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

int t, n, k, min_p, pg, ph;
string str, p;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	cin >> t;

	while(t--){
		cin >> n >> k >> str;
		for (int i = 0; i < n; i++){
			if (str[i] == 'G'){
				pg = (i+k<=n-1) ? i+k : n-1;  
				break;
			}
		}
		for (int i = 0; i < n; i++){
			if (str[i] == 'H'){
				ph = (i+k<=n-1) ? (pg!=i+k) ? i+k : i+k-1 : (pg==n-1) ? n-2 : n-1;  
				break;
			}
		}
		cout << pg << " " << ph << "\n";
	}
}
