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
   
    string inp;
    getline(cin, inp);

    int ans = 1;

    for (char c : inp) {
        if (c == ',')
            ans++;
    }

    if (ans == 1) {
        cout << "There has been " << ans << " incident of cheating in the past.";
    }
    else {
        cout << "There have been " << ans << " incidents of cheating in the past.";
    }
}
