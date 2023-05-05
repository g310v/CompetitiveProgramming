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
   
    int n;
    cin >> n;

    string str;
    cin >> str;

    /*
    if (str == "1000001100001010" || str == "0111110011110101")
        cout << 1;
    else 
        cout << 0;
    */

    int maxc, ans = 0;

    if (n % 3 >= 4) {
        maxc = n / 3;
    }
    else {
        maxc = n / 4;
    }

    for (int i = 4; i <= n; i++) {
        vector<string> v;
        int cur_ans = 0;

        for (int j = 0; j < n; j+=i) {
            v.pb(str.substr(j, min(n - j, i)));
        }
        
        int r = v.size();

        for (int k = 0; k <= r - 4; k++) {
            if (k == r - 4) {
                if (v[k + 3].size() < 4)
                    break;
                else {
                    for (int l = 0; l <= v[k + 3].size() - 4; l++) {
                        string cur = "";
                        cur += v[k].substr(l, 4);
                        cur += v[k + 1].substr(l, 4);
                        cur += v[k + 2].substr(l, 4);
                        cur += v[k + 3].substr(l, 4);

                        if (cur == "1000001100001010" || cur == "0111110011110101")
                            cur_ans++;
                    }
                }
            }
            else {
                for (int l = 0; l <= i - 4; l++) {
                    string cur = "";
                    cur += v[k].substr(l, 4);
                    cur += v[k + 1].substr(l, 4);
                    cur += v[k + 2].substr(l, 4);
                    cur += v[k + 3].substr(l, 4);

                    if (cur == "1000001100001010" || cur == "0111110011110101")
                        cur_ans++;
                }
            }
        }

        ans = max(ans, cur_ans);
    }

    cout << ans;
}

/*

1) Complete Search

2)



*/
