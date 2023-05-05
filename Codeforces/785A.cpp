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

    int ans = 0;

    while (n--) {
        string str;
        cin >> str;

        ans += str == "Cube" ? 6 : str == "Tetrahedron" ? 4 : str == "Octahedron" ? 8 : str == "Dodecahedron" ? 12 : 20; 
    }

    cout << ans;
}
