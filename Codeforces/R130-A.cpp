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

char str[205];
int flag = 1;
string ans = "";

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);	
	cin >> str;
	for (int i = 0; i < strlen(str);){
		if (str[i] == 'W' && str[i+1] == 'U' && str[i+2] == 'B'){
			if (flag == 0){
				flag = 1;
				i += 3;
				ans += " ";
			}
			else 
				i += 3;
		}
		else{
			ans += str[i];
			i++;
			flag = 0;
		}
	}
	cout << ans;
}
