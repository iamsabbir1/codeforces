#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, m;
    cin >> n >> m;
    vector<string> carpet(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> carpet[i];
    }

    int count = 0;
    int layers = min(n, m) / 2;

    for (int layer = 0; layer < layers; ++layer)
    {
        string layerString;
        // Top row
        for (int j = layer; j < m - layer; ++j)
        {
            layerString += carpet[layer][j];
        }
        // Right column
        for (int i = layer + 1; i < n - layer; ++i)
        {
            layerString += carpet[i][m - layer - 1];
        }
        // Bottom row
        for (int j = m - layer - 2; j >= layer; --j)
        {
            layerString += carpet[n - layer - 1][j];
        }
        // Left column
        for (int i = n - layer - 2; i > layer; --i)
        {
            layerString += carpet[i][layer];
        }

        // Count occurrences of "1543" in the layer string
        size_t pos = layerString.find("1543");
        while (pos != string::npos)
        {
            ++count;
            pos = layerString.find("1543", pos + 1);
        }
    }

    cout << count << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}