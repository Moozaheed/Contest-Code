#include<bits/stdc++.h>
using ll = long long;
#define nl endl
using namespace std;


int main() {
    int n=5;
    //cin >> n;
    //check odd and even
    if(n&1) cout << "ODD";
    else cout << "EVEN";
    cout << nl;
    // 101 ---> 5
    // 001 ---> 1
 //AND ---
    // 001 ---> 1
    //multiple and divide by 2
    cout << (n>>1) << nl;//101 >> 10
    cout << (n<<1) << nl;//101 << 1010

    //uppercase to lowercase
    char A = 'A';
    cout << "Lower: " << char(A|' ') << nl;
    //lowercase to uppercase
    char b = 'b';
    cout << "Upper: " << char(b&'_') << nl;

    //check lower or upper
    if((b&(1<<5))!=0)
        cout << "Lower" << nl;//check 5th bit set or unset
    else cout << "Upper" << nl;

    //check power of 2
    int num = 16;
    if((num&(num-1))==0) cout << "Power of 2" << nl;
    else cout << "Not power of 2" << nl;

}