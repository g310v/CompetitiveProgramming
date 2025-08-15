#include <bits/stdc++.h>

using namespace std;

vector<pair<int, int>> a;

void solve(int n, int start, int end, int temp) {
    if (n == 1) {
        a.push_back(make_pair(start, end));
    }
    else {
        solve(n - 1, start, temp, end);
        a.push_back(make_pair(start, end));
        solve(n - 1, temp, end, start);
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    solve(n, 1, 3, 2);

    cout << a.size() << "\n";

    for (pair<int, int> pi : a) {
        cout << pi.first << " " << pi.second << "\n";
    }
}
