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

char opp, me;

ll total_score = 0;

int main()
{
	freopen("input.txt", "r", stdin);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

    while (cin >> opp >> me)
    {
        if (me == 'Y')
        {
            total_score += 3;
            if (opp == 'A')
                total_score += 1;
            else if (opp == 'B')
                total_score += 2;
            else
                total_score += 3;
        }
        else if (me == 'X')
        {
            if (opp == 'A')
                total_score += 3;
            else if (opp == 'B')
                total_score += 1;
            else
                total_score += 2;
        }
        else
        {
            total_score += 6;
            if (opp == 'A')
                total_score += 2;
            else if (opp == 'B')
                total_score += 3;
            else
                total_score += 1;
        }
    }

    cout << total_score;
}

