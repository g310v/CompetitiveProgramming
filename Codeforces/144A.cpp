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

    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int mn = n - 1, mx = 0;

    for (int i = 0; i < n; i++) {
        if (arr[n - i - 1] < arr[mn]) 
            mn = n - i - 1;
        if (arr[i] > arr[mx])
            mx = i;
    }

    if (mn > mx)
        cout << (n - 1 - mn) + mx;
    else
        cout << (n - 1 - mn) + (mx - 1);
}
