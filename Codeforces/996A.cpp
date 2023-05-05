#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vi = vector<int>;
using vll = vector<long long>;
using vb = vector<bool>;
using vs = vector<string>;
#define pb push_back
#define rsz resize
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
using pi = pair<int,int>;
#define f first
#define s second
#define mp make_pair

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
   
    long long n;
    cin >> n;

    long long ans = 0;

    while (n > 0) {
        if (n >= 100) {
            ans += n / 100;
            n %= 100;
        }
        else if (n >= 20) {
            ans += n / 20;
            n %= 20;
        }
        else if (n >= 10) {
            ans += n / 10;
            n %= 10;
        }
        else if (n >= 5) {
            ans += n / 5;
            n %= 5;
        }
        else {
            ans += n;
            n %= 1;
        }
    }

    cout << ans;
}
