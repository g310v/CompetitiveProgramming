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

vector<string> a;
string str;
int i, j, tc, lc, rc, bc, ans1, ans2, cur;
bool tv, rv, lv, bv;

bool top()
{
    for (int k = i - 1; k >= 0; k--)
    {
        tc++;
        if ((int)a[i][j] <= (int)a[k][j])
            return false;
    }

    return true;
}

bool left()
{
    for (int k = j - 1; k >= 0; k--)
    {
        lc++;
        if ((int)a[i][j] <= (int)a[i][k])
            return false;
    }

    return true;
}

bool right()
{
    for (int k = j + 1; k < sz(a[i]); k++)
    {
        rc++;
        if ((int)a[i][j] <= (int)a[i][k])
            return false;
    }

    return true;
}

bool bottom()
{
    for (int k = i + 1; k < sz(a); k++)
    {
        bc++;
        if ((int)a[i][j] <= (int)a[k][j])
            return false;
    }

    return true;
}

int main()
{
    freopen("input.txt", "r", stdin);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
    while (cin >> str)
    {
        a.pb(str);
    }
    
    ans1 = 0;
    ans2 = 0;

    for (i = 0; i < sz(a); i++)
    {
        for (j = 0; j < sz(a[i]); j++)
        {
            tc = 0;
            rc = 0;
            lc = 0;
            bc = 0;

            tv = top();
            rv = right();
            lv = left();
            bv = bottom();

            if (tv || rv || lv || bv)
                ans1++;

            cur = tc*rc*bc*lc;

            ans2 = max(ans2, cur);
        }
    }

    cout << ans1 << " " << ans2;
}

