#include<bits/stdc++.h>
using ll = long long;
#define nl "\n"
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int freq[26]={0};
        for(int i=0; i<n; i++)
            freq[s[i] - 'a']++;
        int mx = *max_element(freq,freq+26);
        if(n%2!=0 || mx>(n/2)){
            cout << "NO" << nl;
        }
        else{
            cout << "YES" << nl;
            sort(s.begin(),s.end());
            reverse(s.begin()+n/2,s.end());
            cout << s << nl;
        }

    }
    

}