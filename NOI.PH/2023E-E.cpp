#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vll = vector<long long>;
using vb = vector<bool>;
using vs = vector<string>;
#define mp make_pair
#define pb push_back
#define rsz resize
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
using pi = pair<int,int>;
#define f first
#define s second

int ans[100000], n, l;
map<string, vector<int>> um;
unordered_map<string, int> m;
vector<int> vi;

bool cmp(pair<string, vector<int>>& a, pair<string, vector<int>>& b) {
    return m[a.first] >= m[b.first];
}

vector<pair<string, vector<int>>> sortplusi(map<string, vector<int>>& um) {
    vector<pair<string, vector<int>>> a;

    for (auto& it : um) {
        a.push_back(it);
    }

    sort(a.begin(), a.end(), cmp);

    return a;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
   
    cin >> n >> l;

    int mx = 0;

    for (int i = 0; i < n; i++) {
        string str;
        cin >> str;

        um[str].pb(i + 1);

        if (m.find(str) != m.end()) {
            m[str]++;
        }
        else {
            m[str] = 1;
        }

        mx = max(mx, m[str]);
    }

    if ((n % 2 == 0 && mx <= n / 2) || (n % 2 == 1 && mx <= (n / 2) + 1)) {
        cout << "POSSIBLE\n";

        vector<pair<string, vector<int>>> a = sortplusi(um);

        int p = 0;

        for (auto const& x : a) { 
            for (int i = 0; i < m[x.first]; i++) {
                ans[p] = x.second[i];
                p += 2;

                if (p >= n) {
                    p = 1;
                }
            }
        }

        for (int i = 0; i < n; i++) {
            if (i < n - 1)
                cout << ans[i] << " ";
            else
                cout << ans[i] << "\n";
        }
    }
    else {
        cout << "IMPOSSIBLE\n";
    }
}
