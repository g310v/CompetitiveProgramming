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

int t, ans;
string pie = "314159265358979323846264338327", cur;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	cin >> t;

	while (t--){
		cin >> cur;
		ans = 0;
		for (int i = 0; i < cur.size(); i++){
			if (pie[i] == cur[i]){
				ans++;
			}	
			else{
				break;
			}
		}
		cout << ans << "\n";
	}
}
