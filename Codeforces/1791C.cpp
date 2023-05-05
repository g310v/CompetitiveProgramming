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

        string str;
        cin >> str;

        int ans = n;

        for (int i = 0; i < n / 2; i++) {
            if (str[i] != str[n - i - 1]) 
                ans -= 2;
            else 
                break;
        }

        cout << ans << "\n";
    }
}
