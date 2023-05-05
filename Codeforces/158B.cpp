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

    int arr[n], o = 0, t = 0, th = 0, f = 0;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] == 1)
            o++;
        if (arr[i] == 2)
            t++;
        if (arr[i] == 3)
            th++;
        if (arr[i] == 4)
            f++;
    }

    o = max(0, o - (th));

    if (t % 2 == 0) 
        t /= 2;
    else {
        t = (t / 2) + 1;
        if (o > 0)
            o = max(o - 2, 0); 
    }

    if (o % 4 == 0)
        o /= 4;
    else
        o = (o / 4) + 1;

    cout << o + t + th + f;
}
