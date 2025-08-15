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

int n, cur = 0, ans = 0;
string a, b;
bool mismatched = false;

int main()
{
	//freopen("breedflip.in", "r", stdin);
	//freopen("breedflip.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	cin >> n >> a >> b;

    for (int i = 0; i < n; i++)
    {
        if (a[i] == b[i])
        {
            mismatched = false;
        }
        else
        {
            if (!mismatched)
            {
                mismatched = true;
                ans++;
            }
        }
    }

    cout << ans;
}

