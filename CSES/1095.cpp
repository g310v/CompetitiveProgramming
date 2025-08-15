#include<bits/stdc++.h>
using namespace std;
using ll = long long int;

ll square(ll a) {
    return (a * a) % 1000000007;
}

ll power(ll a, ll b) {
    if (b == 0) {
        return 1;
    }
    else if (b % 2 == 0) {
        return square(power(a, b / 2)) % 1000000007;
    }
    else {
        return (square(power(a, b / 2)) * a) % 1000000007;
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll n;
    cin >> n;

    while (n--) {
        ll a, b;
        cin >> a >> b;

        cout << power(a,b) << "\n";
    }
}
