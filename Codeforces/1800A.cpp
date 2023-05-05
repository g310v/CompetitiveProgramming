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

        string m;
        cin >> m;

        string l = "meow", u = "MEOW";

        int cur = 0;


        if (m[0] == l[cur] || m[0] == u[cur]) {
            string ans = "YES";

            for (int i = 1; i < n; i++) {
                if (m[i] == l[cur+1] || m[i] == u[cur+1]) {
                    cur++;
                }
                else if (m[i] == l[cur] || m[i] == u[cur]) {
                    continue;
                }
                else {
                    ans = "NO";
                    break;
                }
            }

            if (cur != 3) {
                ans = "NO";
            }

            cout << ans;
        }
        else {
            cout << "NO";
        }
        cout << "\n";
    }
}
