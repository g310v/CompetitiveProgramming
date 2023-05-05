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

    string s1, s2;
    cin >> s1 >> s2;
   
    for (int i = 0; i < s1.size(); i++) {
        if (s1[i] != s2[i])
            cout << 1;
        else
            cout << 0;
    } 
}
