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

int n;
vector<string> a;
vector<string> b;
string flat;


void tH() {
    for (int i = 0; i < n; i++) {
        reverse(b[i].begin(), b[i].end());
    }
}


void tV() {
    reverse(b.begin(), b.end());
}

void tL() {
    tH();

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            int temp = b[i][j];
            b[i][j] = b[j][i];
            b[j][i] = temp;
        }
    }
}

void tR() {
    tV();

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            int temp = b[i][j];
            b[i][j] = b[j][i];
            b[j][i] = temp;
        }
    }
}

int btod() {
    int res = 0;

    int bs = 1;

    int ln = flat.size();
    for (int i = ln - 1; i >= 0; i--) {
        if (flat[i] == '1')
            res += bs;
        bs = bs * 2;
    }

    return res;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

    cin >> n;

    for (int i = 0; i < n; i++) {
        string cur_line;
        cin >> cur_line;

        a.pb(cur_line);
    }

    int m;
    cin >> m;

    string str;
    cin >> str;

    int q;
    cin >> q;

    while (q--) {
        char c;
        int I, J;
        cin >> c >> I >> J;

        if (c == '?') {
            string cur = str.substr(I - 1, (J - I) + 1);
            int cur_sz = (J - I) + 1;
            b = a;
            
            int i = 0; 
            while (i < cur_sz) {
                if (cur[i] == 'L') {
                    if (i < cur_sz - 3) {
                        if (cur[i + 1] == 'L' && cur[i + 2] == 'L' && cur[i + 3] == 'L')
                            i += 4;
                        else if (i < cur_sz - 1) {
                            if (cur[i + 1] == 'R')
                                i += 2;
                            else {
                                tL();
                                i++;
                            }
                        }
                        else {
                            tL();
                            i++;
                        }
                    }
                    else if (i < cur_sz - 1) {
                        if (cur[i + 1] == 'R')
                            i += 2;
                        else {
                            tL();
                            i++;
                        }
                    }
                    else {
                        tL();
                        i++;
                    }
                }
                else if (cur[i] == 'R') {
                    if (i < cur_sz - 3) {
                        if (cur[i + 1] == 'R' && cur[i + 2] == 'R' && cur[i + 3] == 'R')
                            i += 4;
                        else if (i < cur_sz - 1) {
                            if (cur[i + 1] == 'L')
                                i += 2;
                            else {
                                tR();
                                i++;
                            }
                        }
                        else {
                            tR();
                            i++;
                        }
                    }
                    else if (i < cur_sz - 1) {
                        if (cur[i + 1] == 'L')
                            i += 2;
                        else {
                            tR();
                            i++;
                        }
                    }
                    else {
                        tR();
                        i++;
                    }
                }
                else if (cur[i] == 'H') {
                    if (i < cur_sz - 1) {
                        if (cur[i + 1] == 'H') {
                            i += 2;
                        }
                        else {
                            tH();
                            i++;
                        }
                    }
                    else {
                        tH();
                        i++;
                    }
                }
                else if (cur[i] == 'V') {
                    if (i < cur_sz - 1) {
                        if (cur[i + 1] == 'V')
                            i += 2;
                        else {
                            tV();
                            i++;
                        }
                    }
                    else {
                        tV();
                        i++;
                    }
                }
            }

            flat = "";

            for (int i = 0; i < n; i++) {
                flat += b[i];
            }

            cout << btod() << "\n";
        }
        else {
            string r;
            cin >> r;

            for (int i = I - 1; i < J; i++) {
                if (str[i] == 'L') 
                    str[i] = r[0];
                else if (str[i] == 'R')
                    str[i] = r[1];
                else if (str[i] == 'H')
                    str[i] = r[2];
                else if (str[i] == 'V')
                    str[i] = r[3];
            }
        }
    }
}
