#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll mod = 1e9 + 7;
char grid[1010][1010];
int dp[1010][1010];
int n;

void gridPaths(int i, int j)
{
    if (i == n && j == n)
    {
        dp[i][j] = 1;
        for (int x = 1; x <= i; x++)
        {
            for (int y = 1; y <= j; y++)
            {
                cout << dp[x][y] << " ";
            }
            cout << "\n";
        }
        return;
    }
    if (i > n || j > n || grid[i][j] == '*')
        return;

    dp[i][j] = 1;

    gridPaths(i, j + 1);
    gridPaths(i + 1, j);

    dp[i][j] = 0;
}

int main()
{
    memset(dp, 0, sizeof(dp));
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        string s;
        cin >> s;
        for (int j = 0; j < n; j++)
        {
            grid[i][j + 1] = s[j];
        }
    }
    gridPaths(1, 1);
    // cout << (gridPaths(1,1)%mod) << "\n";

    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=n; j++){
    //         cout << dp[i][j] << " ";
    //     }
    //     cout << "\n";
    // }
}