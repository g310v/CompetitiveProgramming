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
#define mp make_pair

string erb(string str, int len);
string ferbe(string str, int len);
string werb(string str, int len);

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        string str;
        cin >> str;

        int len = str.size();

        if (len < 4) {
            cout << "NONE\n";
            continue;
        }
        else {
            string e = erb(str, len);
            if (e != "NONE") {
                cout << e << "\n";
            }
            else {
                if (len <= 5) {
                    cout << "NONE\n";
                }
                else {
                    string f = ferbe(str, len);
                    if (f != "NONE") {
                        cout << f << "\n";
                    }
                    else {
                        string w = werb(str, len);
                        if (w != "NONE") {
                            cout << w << "\n";
                        }
                        else
                            cout << "NONE\n";
                    }
                }
            }
        }
    }
}


string erb(string str, int len) {
    if (str.substr(1, 3) == "erb") {
        bool valid = true;
        for (int i = 0; i < len; i++) {
            char c = str[i];
            if (i == 1 || i == 2 || i == 3) {
                continue;
            }
            if (c == 'a' || c == 'e' || c == 'o' || c == 'u' || c == 'i') {
                valid = false;
                break;
            }
        }
        if (valid) {
            string ans;
            if (len == 4)
                ans = str[0];
            else 
                ans = str[0] + str.substr(4, len - 4);
            return ans;
        }
        return "NONE";
    }
    return "NONE";
}

string ferbe(string str, int len) {
    if (str.substr(len - 5, 5) == "ferbe") {
        if (str[0] == 'a' || str[0] == 'e' || str[0] == 'i' || str[0] == 'o' || str[0] == 'u') {
            string ans = str.substr(0, len - 5);
            return ans;
        }
        return "NONE";
    }
    return "NONE";
}

string werb(string str, int len) {
    if (str.substr(len - 4, 4) == "werb") {
        if (str[0] == 'a' || str[0] == 'e' || str[0] == 'i' || str[0] == 'o' || str[0] == 'u') {
            bool valid = true;
            if (str[len-5] == 'a' || str[len-5] == 'e' || str[len-5] == 'i' || str[len-5] == 'o' || str[len-5] == 'u') {
                valid = false; 
            }
            if (valid) {
                int last_vowel = 0;
                for (int i = 1; i < len - 4; i++) {
                    if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
                        last_vowel = i;
                }

                if ((len - 5) - last_vowel == 1) {
                    string ans = str.substr(last_vowel + 1, (len - 4) - last_vowel - 1) + str.substr(0, last_vowel + 1);
                    return ans;
                }
                return "SECRET";
            }
            return "NONE";
        }
        return "NONE";
    }
    return "NONE";
}
