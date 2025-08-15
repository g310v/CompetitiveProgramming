#include<bits/stdc++.h>
using namespace std;
using ll = long long int;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll n; cin >> n;
    vector<vector<ll>> v(n, vector<ll>(3));
    for (ll i = 0; i < n; i++) {
        ll a, b; cin >> a >> b;
        v[i][0] = a;
        v[i][1] = b;
        v[i][2] = i;
    }
    sort(v.begin(), v.end());
    priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>> pq;
    ll k = 0;
    vector<ll> ans(n);
    for (ll i = 0; i < n; i++) {
        ll a = v[i][0];
        ll b = v[i][1];
        ll idx = v[i][2];

        if (pq.empty() || pq.top().first >= a) {
            k++;
            pq.push(make_pair(b, k));
            ans[idx] = k;
        }
        else {
            ll cur = pq.top().second;
            pq.pop();
            pq.push(make_pair(b, cur));
            ans[idx] = cur;
        }
    }

    cout << k << "\n";
    for (ll i = 0; i < n; i++) cout << ans[i] << " "; 
}
