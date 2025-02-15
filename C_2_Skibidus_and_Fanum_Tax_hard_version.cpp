#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int j = 0; j < m; j++)
        cin >> b[j];

    sort(b.begin(), b.end());
    a[0] = min(a[0], (b[0] - a[0]));
    cout << a[0] << "\n";

    for (int i = 1; i < n; i++)
    {
        auto lb = lower_bound(b.begin(), b.end(), a[i - 1] + a[i]);
    }
    cout << endl;

    for (int i = 1; i < n; i++)
    {
        if (a[i - 1] > a[i])
        {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
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