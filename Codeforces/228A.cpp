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
   
    long long a, b, c, d;
    cin >> a >> b >> c >> d;

    unordered_set<long long> st;

    st.insert(a);
    st.insert(b);
    st.insert(c);
    st.insert(d);

    cout << 4 - st.size();
}
