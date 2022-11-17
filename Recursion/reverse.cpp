#include<bits/stdc++.h>
using namespace std;
string s;
void rev(int i,int j){
    if(i>=j) return;
    swap(s[i],s[j]);
    rev(i+1,j-1);
}

int main(){
    getline(cin,s);
    rev(0,s.size()-1);
    cout << s;
}