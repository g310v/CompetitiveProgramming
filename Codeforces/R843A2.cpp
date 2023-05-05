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

	while (n--) {
		string str;
		cin >> str;
		
		int size = sz(str);
		if (str[0] == str[size - 1]) {
			cout << str[0] << " ";
			for (int i = 1; i < size - 1; i++) {
				cout << str[i];
			}
			cout << " " << str[size - 1];
		}
		else {
			int a = -1;
			for (int i = 1; i < size - 1; i++) {
				if (str[i] == 'a') 
					a = i;
			}
			
			if (a == -1) {
				cout << str[0] << " ";
				for (int i = 1; i < size - 1; i++) {
					cout << str[i];
				}
				cout << " " << str[size - 1];
			}
			else {
				for (int i = 0; i < a; i++) {
					cout << str[i];
				}
				cout << " " << str[a] << " ";
				for (int i = a + 1; i < size; i++) {
					cout << str[i];
				}
			}
		}

		cout << "\n";
	}
}
