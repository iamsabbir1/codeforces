#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void solve()
{
    int m, a, b, c;
    cin >> m >> a >> b >> c;
    int ans = 0, tmp = m;
    ans = min(m, a);
    m = m - ans;
    if (m > 0)
    {
        int ans1 = min(m, c);
        c = c - ans1;
        ans += ans1;
    }

    int ans2 = min(tmp, b);
    tmp = tmp - ans2;
    ans += ans2;

    if (tmp > 0 && c > 0)
    {
        int ans3 = min(tmp, c);
        ans += ans3;
    }
    cout << ans << endl;
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