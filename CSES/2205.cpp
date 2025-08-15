#include <bits/stdc++.h>
using namespace std;

vector<string> solve(int n) {
    vector<string> a;

    if (n == 1) {
        a.push_back("0");
        a.push_back("1");
        return a;
    }

    a = solve(n - 1);

    vector<string> res;

    for (int i = 0; i < a.size(); i++) {
        res.push_back('0' + a[i]);
    }

    for (int i = a.size() - 1; i >= 0; i--) {
        res.push_back('1' + a[i]);
    }

    return res;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    vector<string> a = solve(n);

    for (string s : a) {
        cout << s << "\n";
    }
}
