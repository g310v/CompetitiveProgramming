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

set<pi> st;
map<char, int> DC, DR;
pi H = mp(0, 0);
vector<pi> T;
char d;
int n;

pi adjust(pi H, pi T)
{
    int rd = abs(H.f - T.f);
    int cd = abs(H.s - T.s);

    if (rd <= 1 && cd <= 1)
        return T;
    if (rd >= 2 && cd >= 2)
        T = mp(H.f < T.f ? H.f + 1 : H.f - 1, H.s < T.s ? H.s + 1 : H.s - 1);
    else if (rd >= 2)
        T = mp(H.f < T.f ? H.f + 1 : H.f - 1, H.s);
    else
        T = mp(H.f, H.s < T.s ? H.s + 1 : H.s - 1);
    return T;
}

int main()
{
    freopen("input.txt", "r", stdin);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

    DR['U'] = -1;
    DR['D'] = 1;
    DR['R'] = 0;
    DR['L'] = 0;

    DC['U'] = 0;
    DC['D'] = 0;
    DC['R'] = 1;
    DC['L'] = -1;

    for (int i = 0; i < 9; i++)
    {
        T.pb(mp(0, 0));
    }

    while (cin >> d >> n)
    {
        for (int i = 0; i < n; i++)
        {
            int last = sz(T)-1;
            st.insert(T[last]);
            H.f += DR[d];
            H.s += DC[d];
            T[0] = adjust(H, T[0]);
            for (int j = 1; j < 9; j++)
            {
                T[j] = adjust(T[j-1], T[j]);
            }
            st.insert(T[last]);
        }
    }

    cout << st.size();
}

