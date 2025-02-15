#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

void solve()
{
    string s;
    cin >> s;
    int n = s.size();
    if (n > 2)
        s.erase(n - 2, n - 1);
    else
        s.erase();
    s += 'i';
    cout << s << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
        solve();
}