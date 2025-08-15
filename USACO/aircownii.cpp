#include<bits/stdc++.h>
using namespace std;
using ll = long long int;

int n, m, ans = INT_MAX;
vector<int> need_state(100, 0);
vector<int> cur_state(100, 0);
vector<vector<int>> aircons;
vector<vector<int>> subset;

void solve(int cur, int a_ct) {
    if (cur == a_ct) {
        int cur_cost = 0;
        for (int i = 0; i < subset.size(); i++) {
            int s = subset[i][0], t = subset[i][1], c = subset[i][2], cost = subset[i][3];
            cur_state[s] += c; 
            if (t < 100) cur_state[t + 1] -= c;
            cur_cost += cost;
        }
        bool valid = true;
        for (int i = 1; i <= 100; i++) {
            cur_state[i] += cur_state[i - 1];
            if (need_state[i] > cur_state[i]) valid = false;
        }
        for (int i = 1; i <= 100; i++) {
            cur_state[i] = 0;
        }
        if (valid) ans = min(ans, cur_cost);
        return;
    }
    solve(cur + 1, a_ct);
    subset.push_back(aircons[cur]);
    solve(cur + 1, a_ct);
    subset.pop_back();
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;

    for (ll i = 0; i < n; i++) {
        int s, t, c; cin >> s >> t >> c;
        need_state[s] += c;
        if (t < 100) need_state[t + 1] -= c;
    }

    for (ll i = 1; i <= 100; i++) {
        need_state[i] += need_state[i - 1];
    }

    int a_ct = 0;
    for (ll i = 0; i < m; i++) {
        vector<int> cur(4); 
        cin >> cur[0] >> cur[1] >> cur[2] >> cur[3];
        aircons.push_back(cur);
        a_ct++;
    }
    solve(0, a_ct); 

    cout << ans << "\n";
}
