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
	freopen("billboard.in", "r", stdin);
	freopen("billboard.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	vector<int> b1(4), b2(4), t(4);

    cin >> b1[0] >> b1[1] >> b1[2] >> b1[3];
    cin >> b2[0] >> b2[1] >> b2[2] >> b2[3];
    cin >> t[0] >> t[1] >> t[2] >> t[3];

    int b1_area = (b1[3] - b1[1]) * (b1[2] - b1[0]);
    int b2_area = (b2[3] - b2[1]) * (b2[2] - b2[0]);

    int b1_overlap_height = max(0, min(b1[3], t[3]) - max(b1[1], t[1]));
    int b1_overlap_length = max(0, min(b1[2], t[2]) - max(b1[0], t[0]));
    int b1_overlap = b1_overlap_height * b1_overlap_length;

    int b2_overlap_height = max(0, min(b2[3], t[3]) - max(b2[1], t[1]));
    int b2_overlap_length = max(0, min(b2[2], t[2]) - max(b2[0], t[0]));
    int b2_overlap = b2_overlap_height * b2_overlap_length;

    cout << b1_area - b1_overlap + b2_area - b2_overlap;
}

