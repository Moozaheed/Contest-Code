#include<bits/stdc++.h>
using namespace std;
int cn=0;
void dfs(int i, int j, vector<vector<int>>& grid)
{
    if(i<0 || j<0)
    {
        cn++;
        return;
    }
    if(i>=grid.size() || j>=grid[0].size())
    {
        cn++;
        return;
    }
    if(grid[i][j]==0)
    {
        cn++;
        return;
    }
    if(grid[i][j]==2) return;
    grid[i][j] = 2;
    cout << i << " " << j << endl;
    dfs(i,j-1, grid);
    dfs(i,j+1, grid);
    dfs(i-1,j, grid);
    dfs(i+1,j, grid);


}
//
//int islandPerimeter(vector<vector<int>>& grid)
//{
//    int n = grid.size();
//    int m = grid[0].size();
//    int loc1,loc2,cn,c = 0;
//    for(int i=0; i<n; i++)
//    {
//        for(int j=0; j<m; j++)
//        {
//            if(grid[i][j]=='1')
//            {
//                loc1 = i;
//                loc2 = j;
//                c++;
//                break;
//            }
//        }
//        if(c) break;
//    }
//    dfs(loc1,loc2,grid);
//    return cn;
//}

int main()
{
    vector<vector<int>> grid
    {
        {0,1,0,0},
        {1,1,1,0},
        {0,1,0,0},
        {1,1,0,0}
    };
    dfs(0,1,grid);
    //cout << islandPerimeter(grid);
    for(auto x:grid)
    {
        for(int y:x)
        {
            cout << y << " ";
        }
        cout << endl;
    }
    cout << cn;
}
