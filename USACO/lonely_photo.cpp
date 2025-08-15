#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
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

ll ans = 0, n;
string str;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	cin >> n >> str;

    for (ll i = 0; i <= n - 3; i++)
    {
        for (ll j = 3; j <= n - i; j++)
        {
            string sub = str.substr(i, j);
            ll g = 0, h = 0;
            for (char x : sub)
            {
                if (x == 'G')
                {
                    g++;
                }
                else
                {
                    h++;
                }
            }
            if (g == 1 || h == 1)
            {
                ans++;
            }
        }
    }

    cout << ans;
}

