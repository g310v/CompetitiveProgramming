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
	freopen("bcount.in", "r", stdin);
	freopen("bcount.out", "w", stdout);
    
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<int> a(n), h(n + 1), g(n + 1), j(n + 1);

    h[0] = 0;
    g[0] = 0;
    j[0] = 0;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        if (a[i] == 1) h[i + 1] = h[i] + 1;
        else h[i + 1] = h[i];

        if (a[i] == 2) g[i + 1] = g[i] + 1;
        else g[i + 1] = g[i];

        if (a[i] == 3) j[i + 1] = j[i] + 1;
        else j[i + 1] = j[i];
    }

    while (m--) {
        int x, y;
        cin >> x >> y;

        cout << h[y] - h[x - 1] << " " << g[y] - g[x - 1] << " " << j[y] - j[x - 1] << "\n";
    }
}
