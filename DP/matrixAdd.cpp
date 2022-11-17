#include<bits/stdc++.h>
using namespace std;

int matA[110][110],matB[110][110];
int mat[110][110];
bool dp[110][110];

void addMat(int r, int c){
    if(c==0){
        return;
    }
    if(r==0){
        return;
    }
    if(dp[r][c]) return;
    addMat(r,c-1);
    addMat(r-1,c);
    mat[r][c] = matA[r][c] + matB[r][c];
    dp[r][c] = true;
    
}

int main(){
    int r,c;
    cin >> r >> c;
    for(int i=1; i<=r; i++){
        for(int j=1; j<=c; j++){
            cin >> matA[i][j];
        }
    }
    for(int i=1; i<=r; i++){
        for(int j=1; j<=c; j++){
            cin >> matB[i][j];
        }
    }
    addMat(r,c);
    for(int i=1; i<=r; i++){
        for(int j=1; j<=c; j++){
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

}