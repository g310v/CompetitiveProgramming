#include<bits/stdc++.h>
using namespace std;
using ll = long long int;

void setIO(string s) {
	freopen((s + ".in").c_str(), "r", stdin);
	freopen((s + ".out").c_str(), "w", stdout);
}

int main() {
    setIO("lineup");
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    vector<string> cows = {"Bessie", "Buttercup", "Belinda", "Beatrice", "Bella", "Blue", "Betsy", "Sue"};
    sort(cows.begin(), cows.end());
    map<string, vector<string>> adj;
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        string s1, s, s2; cin >> s1 >> s >> s >> s >> s >> s2;
        adj[s1].push_back(s2);
        adj[s2].push_back(s1);
    }
    vector<string> order;
    map<string, bool> mp2;
    for (string s : cows) {
        if (adj[s].size() > 1 || mp2[s]) continue;
        string cur = s;
        while (adj[cur].size() == 2 || (adj[cur].size() == 1 && !mp2[adj[cur][0]])) {
            order.push_back(cur);
            mp2[cur] = true;
            if (adj[cur].size() == 2 && mp2[adj[cur][0]]) {
                cur = adj[cur][1];
            }
            else {
                cur = adj[cur][0];
            }
        }
        order.push_back(cur);
        mp2[cur] = true;
    }
    for (string i : order) {
        cout << i << "\n";
    }
}

