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
	freopen("paint.in", "r", stdin);
	freopen("paint.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int a, b, c, d;
    cin >> a >> b >> c >> d;

    int diff1 = b - a;
    int diff2 = d - c;
    int overlap = max(0, min(b, d) - max(a, c));
    
    cout << diff1 + diff2 - overlap;
}


