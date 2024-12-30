#include <bits/stdc++.h>
using namespace std;
string solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = 1; i < n; i++)
    {
        if (abs(arr[i - 1] - arr[i]) != 5 && abs(arr[i - 1] - arr[i]) != 7)
            return "NO";
    }
    return "YES";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        cout << solve() << endl;
}