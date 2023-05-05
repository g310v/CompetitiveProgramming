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

int m, d, n, days_left;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
    
    cin >> m >> d;

    if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
        n = 31;
    else if (m == 4 || m == 6 || m == 9 || m == 11)
        n = 30;
    else
        n = 28;

    days_left = n - (8 - d);
    
    if (days_left % 7 == 0)
    {
        cout << 1 + days_left / 7; 
    }
    else
    {
        cout << 2 + days_left / 7;
    }
}

