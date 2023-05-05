#include <bits/stdc++.h>
using namespace std;

vector<int> is = {20, 60, 100, 140, 180, 220}, temp(6);
long long cycle = 0, value = 1, is_ptr = 0, ans = 0;

int main()
{
    string c;
    int n;
    while (cin >> c)
    {
        cycle++;

        if (is_ptr < 6)
        {
            if (cycle == is[is_ptr])
            {
                ans += value * is[is_ptr];
                is_ptr++;
            }
        }
        
        if (c == "addx")
        {
            cin >> n;
            cycle++;

            if (is_ptr < 6)
            {
                if (cycle == is[is_ptr])
                {
                    ans += value * is[is_ptr];
                    is_ptr++;
                }
            }

            value += n;
        }
    }
    cout << ans;
}