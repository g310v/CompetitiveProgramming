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
   
    int n, m;
    cin >> n >> m;

    if (n == m) {
        if (n % 2 == 0) 
            cout << "Malvika";
        else
            cout << "Akshat";
    }
    else {
        if (min(n, m) % 2 == 0) 
            cout << "Malvika";
        else 
            cout << "Akshat";
    }
}
