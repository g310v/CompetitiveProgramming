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

    int a[26] = {};

    for (char c : str) {
        if (c >= 65 && c <= 90)
            a[c - 'A']++;
        else
            a[c - 'a']++;
    }

    string ans = "YES";

    for (int i = 0; i < 26; i++) {
        if (a[i] == 0) {
            ans = "NO";
            break;
        }
    }

    cout << ans;
}
