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
   
    int t;
    cin >> t;

    while (t--) {
        int l, r;
        cin >> l >> r;

        int ans, ans_value = 0;

        if (r - l < 100) {
            for (int i = l; i <= r; i++) {
                int n = i, smallest = 9, largest = 0;
                while (n > 0) {
                    if (n % 10 < smallest) smallest = n % 10;
                    if (n % 10 > largest) largest = n % 10;
                    n /= 10;
                }
                if (largest - smallest >= ans_value) {
                    ans_value = largest - smallest;
                    ans = i;
                }
            }
        } 
        else {
            for (int i = l; i <= l + 100; i++) {
                if (i % 100 == 90) {
                    ans = i;
                    break;
                }
            }
        }

        cout << ans << "\n";
    }
}
