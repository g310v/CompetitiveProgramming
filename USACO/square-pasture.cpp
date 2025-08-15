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
	freopen("square.in", "r", stdin);
	freopen("square.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	vector<int> p1(4), p2(4);

    cin >> p1[0] >> p1[1] >> p1[2] >> p1[3];
    cin >> p2[0] >> p2[1] >> p2[2] >> p2[3];

    int total_length = max(p1[2], p2[2]) - min(p1[0], p2[0]);
    int total_height = max(p1[3], p2[3]) - min(p1[1], p2[1]);

    cout << max(total_length, total_height) * max(total_length, total_height);
}

