#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

void solve()
{
    int n;
    cin >> n;
    unordered_map<int, int> mp;
    vector<int> arr(n + 1);

    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];

        mp[arr[i]]++;
    }

    vector<int> rm;
    vector<bool> used(n + 1, false);
    vector<int> b;
    for (int i = 1; i <= n; i++)
    {
        if (mp.find(i) == mp.end())
            rm.push_back(i);
    }

    for (int i = 1; i <= n; i++)
    {
        if (!used[arr[i]])
        {
            used[arr[i]] = true;
            b.push_back(arr[i]);
        }
        else
        {
            int x = rm.back();
            rm.pop_back();
            used[x] = true;
            b.push_back(x);
        }
    }
    for (auto y : b)
        cout << y << " ";
    cout << endl;
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