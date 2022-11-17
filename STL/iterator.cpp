#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v1 = {1,2,3,4,5};
    
    vector<int>:: iterator it = v1.begin();
    //Print single element
    cout << "Value of 2nd index: " <<(*(it+2)) << endl;
    cout << endl;
    for(it = v1.begin(); it!=v1.end(); it++){
        //We must be use it++. it++ indicates next iterator. But it+1 indicates next location
        cout << (*it) << " ";
    }
    cout << endl << endl;
    vector<pair<int,string>> v2 = {{73,"Arthi"},{10,"Pritam"},{67,"Haiman"},{50,"Ayat"}};

    vector<pair<int,string>>:: iterator i = v2.begin();
    cout << "Value of 1st index: " << (*(i+1)).first << " " << (*(i+1)).second << endl;
    cout << endl;
    for(i = v2.begin(); i!=v2.end(); i++){
        cout << (i->first) << " " << (i->second) << endl;
    }
    //(*i).first <=> i->first
    cout << endl;
}