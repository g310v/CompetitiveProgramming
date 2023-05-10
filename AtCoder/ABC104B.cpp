#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin >> s;

    int cur1 = 0;

    for (int i = 2; i < s.length() - 1; i++) {
        if (s[i] == 'C') {
            cur1++;
        }
    }

    int cur2 = 0;

    for (int i = 1; i < s.length(); i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            cur2++;
        }
    }

    if (s[0] == 'A' && cur1 == 1 && cur2 == s.length() - 2) {
        cout << "AC";
    }
    else {
        cout << "WA";
    }
}
