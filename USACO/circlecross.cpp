#include<bits/stdc++.h>
using namespace std;
using ll = long long int;

void setIO(string s) {
	freopen((s + ".in").c_str(), "r", stdin);
	freopen((s + ".out").c_str(), "w", stdout);
}

int main() {
    setIO("circlecross");
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string s; cin >> s;
    vector<pair<int, int>> a(26, make_pair(-1, -1));
    for (int i = 0; i < 52; i++) {
        if (a[s[i] - 'A'].first == -1) {
            a[s[i] - 'A'].first = i;
        }
        else a[s[i] - 'A'].second = i;
    }
    int ans = 0;
    for (int i = 0; i < 26; i++) {
        for (int j = i + 1; j < 26; j++) {
            int overlap = min(a[i].second, a[j].second) - max(a[i].first, a[j].first);
            if (overlap > 0) {
                if (a[i].first > a[j].first && a[i].second < a[j].second) continue;
                else if (a[j].first > a[i].first && a[j].second < a[i].second) continue;
                ans++;
            }
        }
    }
    cout << ans << "\n";
}

