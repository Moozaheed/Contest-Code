//https://www.hackerearth.com/practice/data-structures/trees/heapspriority-queues/practice-problems/algorithm/monk-and-the-magical-candy-bags/?fbclid=IwAR2kDiVkEaxu9dkCTCUhzXLuIccNn0Gz3dSfkaSUjlDE6Nb9UHMzt8HNDo4
//Monk and the Magical Candy Bags
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        multiset<long long> ms;
        for(int i=0; i<n; i++){
            long long x;
            cin >> x;
            ms.insert(x);
        }
        long long ans = 0;
        while(k--){
            auto it = ms.end();
            it--;
            long long max = (*it);
            ans+=max;
            ms.erase(it);
            ms.insert(max/2);
        }
        cout << ans << endl;

    }

}