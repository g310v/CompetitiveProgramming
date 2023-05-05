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

ll x1, y11, x2, y2, x3, y3, x4, y4, x5, y5, x6, y6;

ll area (ll x1, ll y11, ll x2, ll y2)
{
    return (y2 - y11) * (x2 - x1);
}

ll overlap(ll blx1, ll bly1, ll trx1, ll try1, ll blx2, ll bly2, ll trx2, ll try2)
{
    ll length_overlap = max(0LL, min(trx1, trx2) - max(blx1, blx2));
    ll height_overlap = max(0LL, min(try1, try1) - max(bly1, bly2));

    return length_overlap * height_overlap;
}

ll overlap3(ll blx1, ll bly1, ll trx1, ll try1, ll blx2, ll bly2, ll trx2, ll try2, ll blx3, ll bly3, ll trx3, ll try3)
{
    ll length_overlap = max(0LL, min(min(trx1, trx2), trx3) - max(max(blx1, blx2), blx3));
    ll height_overlap = max(0LL, min(min(try1, try2), try3) - max(max(bly1, bly2), bly3));

    return length_overlap * height_overlap;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

    cin >> x1 >> y11 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4 >> x5 >> y5 >> x6 >> y6;

    ll first_overlap = overlap(x1, y11, x2, y2, x3, y3, x4, y4);
    ll second_overlap = overlap(x1, y11, x2, y2, x5, y5, x6, y6);
    ll third_overlap = overlap3(x1, y11, x2, y2, x3, y3, x4, y4, x5, y5, x6, y6);
    ll white_area = area(x1, y11, x2, y2);

    if ((first_overlap + second_overlap - third_overlap) >= white_area)
    {
        cout << "NO" << "\n";
        cout << first_overlap << " " << second_overlap << " " << third_overlap << " " << white_area;
    }
    else
    {
        cout << "YES";
    }
}

