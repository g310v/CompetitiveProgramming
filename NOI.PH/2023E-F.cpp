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

ll arr[3][100] = {{0}};

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
   
    ll n, cur, ans = 0;
    cin >> n;

    for (ll i = 0; i < 3; i++) {
        for (ll j = 0; j < n; j++) {
            cin >> cur;
            arr[i][cur%100]++;
        }
    }

    for (ll i = 0; i < 100; i++) {
        for (ll j = 0; j < 100; j++) {
            for (ll k = 0; k < 100; k++) {
                if (((i + j + k == 100) || (i + j + k == 0) || (i + j + k == 200)) && arr[0][i] && arr[1][j] && arr[2][k]) {
                    ans += (arr[0][i] * arr[1][j] * arr[2][k]);
                }
            }
        }
    }

    cout << ans;
}
