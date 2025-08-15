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
	freopen("word.in", "r", stdin);
	freopen("word.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	/*
	int n, k;
	cin >> n >> k;
	
	vector<string> a(n);
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}

	int c = a[0].size();

	for (int i = 0; i < n; i++){
		if (c + a[i+1].size() > k){
			cout << a[i] << "\n";
			c = a[i+1].size();
		}
		else{
			cout << a[i] << " ";
			c += a[i+1].size();
		}
	}
	*/

	int n, k, c = 0;
	cin >> n >> k;

	string str;

	for (int i = 0; i < n; i++){
		cin >> str;
		if (c+str.size() <= k){
			if (i != 0)
				cout << " ";
			c += str.size();
		}	
		else{
			cout << "\n";
			c = str.size();
		}
		cout << str;
	}
}
