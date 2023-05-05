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

    int arr[7], sum;

    for (int i = 0; i < 7; i++) 
        cin >> arr[i];

    bool found = false;

    for (int i = 0; i < 7; i++) {
        for (int j = i + 1; j < 7; j++) {
            sum = arr[i] + arr[j];
            if ((sum - 1) % 2 == 0) {
                found = true;
                break;
            }
        }
    }

    if (found)
        cout << "Candies for everyone!";
    else
        cout << "No candy for Mom :(";
}
