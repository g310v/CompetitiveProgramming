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

	vector<int> b1(4), b2(4);

    cin >> b1[0] >> b1[1] >> b1[2] >> b1[3];
    cin >> b2[0] >> b2[1] >> b2[2] >> b2[3];

    int b1_length = b1[2] - b1[0], b1_height = b1[3] - b1[1];

    int b2_length = b2[2] - b2[0], b2_height = b2[3] - b2[1];

    int length_overlap = max(0, min(b1[2], b2[2]) - max(b1[0], b2[0]));
    int height_overlap = max(0, min(b1[3], b2[3]) - max(b1[1], b2[1]));
    int overlap = length_overlap * height_overlap;

    if (overlap == 0)
        cout << b1_length * b1_height;
    else if (length_overlap == b1_length && height_overlap == b1_height)
        cout << 0;
    else if (length_overlap == b2_length || height_overlap == b2_height)
        cout << b1_length * b1_height;
    else if (length_overlap == b1_length)
        cout << b1_length * (b1_height - height_overlap);
    else if (height_overlap == b1_height)
        cout << b1_height * (b1_length - length_overlap);
    else
        cout << b1_length * b1_height;
}

