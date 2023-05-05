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

    int arr[m];

    for (int i = 0; i < m; i++) {
        cin >> arr[i];
    }

    sort(arr, arr + m);

    int ans = arr[m - 1] - arr[0];

    for (int i = 0; i < m; i++) {
        for (int j = i + 1; j < m; j++) {
            if (j - i >= n - 1)
                ans = min(ans, arr[j] - arr[i]);
        }
    }

    cout << ans;
}
