#include <bits/stdc++.h>
using namespace std;

void soln()
{
    int n;
    cin >> n;
    vector<int> switches(2 * n);
    int onCount = 0;

    for (int i = 0; i < 2 * n; ++i)
    {
        cin >> switches[i];
        if (switches[i] == 1)
        {
            ++onCount;
        }
    }

    // Maximum number of lights that can be on
    int maxLightsOn = min(n, onCount);

    // Minimum number of lights that can be on
    int minLightsOn = max(0, onCount - n);

    cout << minLightsOn << " " << maxLightsOn << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        soln();
    }
    return 0;
}