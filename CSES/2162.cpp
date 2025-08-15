#include<bits/stdc++.h>
using namespace std;
using ll = long long int;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll n; cin >> n;
    queue<ll> q;
    for (ll i = 1; i <= n; i++) q.push(i);
    ll sz = n;
    while (sz) {
        ll f = q.front();
        q.pop();
        if (sz == 1) {
            cout << f << "\n";
            break;
        }
        else {
            ll s = q.front();
            q.pop();
            q.push(f);
            sz--;
            cout << s << " ";
        }
    }
}

