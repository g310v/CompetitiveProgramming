#include<bits/stdc++.h>
using namespace std;
using ll = long long int;

void setIO(string s) {
	freopen((s + ".in").c_str(), "r", stdin);
	freopen((s + ".out").c_str(), "w", stdout);
}

bool done(vector<ll> v) {
    sort(v.begin(), v.end());
    if (v[1] - v[0] == 1 && v[2] - v[1] == 1) return true;
    return false;
}

int main() {
    setIO("herding");
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    vector<ll> v(3);
    for (ll i = 0; i < 3; i++) cin >> v[i];
    ll mx = 0;
    ll mn = 0;
    ll sub1 = v[1] - v[0];
    ll sub2 = v[2] - v[1];
    if (!done(v)) {
        if (sub1 == 2 || sub2 == 2) mn = 1;
        else mn = 2;
        mx = max(sub1 - 1, sub2 - 1);
    }

    cout << mn << "\n" << mx << "\n";
}

