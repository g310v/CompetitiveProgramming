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

string inp, first_half, second_half;
vector<string> cur;
char common;
bool found_common;
int ans = 0, sz;

int main()
{
	freopen("input.txt", "r", stdin);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

    while(cin >> inp)
    {
        cur.pb(inp);
        found_common = false;
        if (cur.size() == 3)
        {
            for (int i = 0; i < cur[0].size(); i++)
            {
                for (int j = 0; j < cur[1].size(); j++)
                {
                    for (int k = 0; k < cur[2].size(); k++)
                    {
                        if (cur[0][i] == cur[1][j] && cur[0][i] == cur[2][k])
                        {
                            common = cur[0][i];
                            found_common = true;
                            break;
                        }
                    }
                    if (found_common)
                        break;
                }
                if (found_common)
                    break;
            }

            if (common >= 'A' && common <= 'Z')
            {
                ans += (common - 'A') + 27;
            }
            else
            {
                ans += (common - 'a') + 1;
            }

            cur.clear();
        }
    }
    cout << ans;
}

