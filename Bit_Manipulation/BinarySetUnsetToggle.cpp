#include<bits/stdc++.h>
using namespace std;

void printBinary(int num){
    for (int i = num; i >= 0; i--)
    {
        cout << ((num>>i)&1);
    }
    cout << "\n";
    
}

int main(){
    int a=9;
    printBinary(a);
    //check 3rd bit set or unset bit
    if((a &(1<<3)) != 0)
        cout << "Set bit";
    else cout << "Unset bit";
    cout << "\n";
    //bit set
    printBinary(a|(1<<1));
    //bit unset
    printBinary( a&(~(1<<3)) );
    //toggle
    printBinary( a^(1<<2) );
    cout << __builtin_popcount(a) << endl;
    cout << __builtin_popcount((1LL<<35)-1) << endl;

}