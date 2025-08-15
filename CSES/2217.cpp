#include<bits/stdc++.h>
using namespace std;
using ll = long long int;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll n, m; cin >> n >> m;
    vector<ll> v(n);
    vector<ll> idx(n + 1, 0);
    vector<bool> inv(n + 1, 0);
    for (ll i = 0; i < n; i++) {
        cin >> v[i];
        idx[v[i]] = i;
    }
    ll cur_ans = 1, last = idx[1];
    for (ll i = 2; i <= n; i++) {
        if (idx[i] < last) {
            cur_ans++;
            inv[i] = true;
        }
        last = idx[i];
    }
    for (ll i = 0; i < m; i++) {
        ll a, b; cin >> a >> b;
        a--;
        b--;
        idx[v[a]] = b;
        idx[v[b]] = a;
        ll temp = v[a];
        v[a] = v[b];
        v[b] = temp;
        if (v[a] > 1) {
            bool temp2 = idx[v[a]] < idx[v[a]-1];
            if (inv[v[a]] && !temp2) {
                cur_ans--;
            }
            else if (!inv[v[a]] && temp2) {
                cur_ans++;
            }
            inv[v[a]] = temp2;
        }
        if (v[a] < n) {
            bool temp3 = idx[v[a] + 1] < idx[v[a]]; 
            if (inv[v[a]+1] && !temp3) {
                cur_ans--;
            }
            else if (!inv[v[a]+1] && temp3) {
                cur_ans++;
            }
            inv[v[a]+1] = temp3;
        }
        if (v[b] > 1) {
            bool temp2 = idx[v[b]] < idx[v[b]-1];
            if (inv[v[b]] && !temp2) {
                cur_ans--;
            }
            else if (!inv[v[b]] && temp2) {
                cur_ans++;
            }
            inv[v[b]] = temp2;
        }
        if (v[b] < n) {
            bool temp3 = idx[v[b] + 1] < idx[v[b]]; 
            if (inv[v[b]+1] && !temp3) {
                cur_ans--;
            }
            else if (!inv[v[b]+1] && temp3) {
                cur_ans++;
            }
            inv[v[b]+1] = temp3;
        }
        cout << cur_ans << "\n";
    }
}
