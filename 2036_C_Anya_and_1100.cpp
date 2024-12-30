#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    int q;
    cin >> s >> q;
    int n = s.size();
    set<int> positions;

    for (int i = 0; i <= n - 4; ++i)
    {
        if (s.substr(i, 4) == "1100")
        {
            positions.insert(i);
        }
    }

    while (q--)
    {
        int a, b;
        cin >> a >> b;
        --a;
        s[a] = b + '0';

        for (int i = max(0, a - 3) ; i <= min(n - 4, a); ++i)
        {
            if (positions.count(i))
            {
                positions.erase(i);
            }
            if (s.substr(i, 4) == "1100")
            {
                positions.insert(i);
            }
        }

        if (!positions.empty())
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}
