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

string inp;
int cur = 0, temp;
vector<int> top_three(3);

int main()
{
	freopen("input.txt", "r", stdin);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

    while(getline(cin, inp))
    {
        if (inp.size() == 0)
        {
            if (cur > top_three[0])
            {
                top_three[2] = top_three[1];
                top_three[1] = top_three[0];
                top_three[0] = cur;
            }
            else if (cur > top_three[1])
            {
                top_three[2] = top_three[1];
                top_three[1] = cur;
            }
            else if (cur > top_three[2])
            {
                top_three[2] = cur;
            }

            cur = 0;
        }
        else
        {
            cur += stoi(inp);
        }
    }

    cout << top_three[0] + top_three[1] + top_three[2];
}

