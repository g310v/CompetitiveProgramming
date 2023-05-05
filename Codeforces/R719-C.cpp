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

vector<int> m(10000);
int t, n, p;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

    cin >> t;

    while (t--)
    {
        cin >> n; 
        if (n == 2)
            cout << -1 << "\n";
        else
        {
            p = 0;
            for (int i = 1; i <= n*n; i+=2)
            {
                m[p] = i;
                p++;
            }
            for (int i = 2; i <= n*n; i+=2)
            {
                m[p] = i;
                p++;
            }
            for (int i = 0; i < n*n; i++)
            {
                cout << m[i] << " ";
                if ((i + 1) % n == 0)
                {
                    cout << "\n";
                }
            }
        }
    }
}