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

int h[100] = {}, w[100] = {};

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
   
    int n;
    cin >> n;

    while (n--) {
        int a, b;
        cin >> a >> b;

        h[a-1]++;
        w[b-1]++;
    }

    int ans = 0;

    for (int i = 0; i < 100; i++) {
        if (h[i] > 0 && w[i] > 0)
            ans += (h[i] * w[i]);
    }

    cout << ans;
}
