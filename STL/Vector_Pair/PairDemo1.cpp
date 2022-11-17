#include<bits/stdc++.h>
using namespace std;

int main(){
    pair<int,string> p(73,"Arthi");
    pair<int,string> q(66,"Rohan");
    ///p = make_pair(73,"Arthi");
    ///p = {73,"Arthi"};

    cout << p.first << " " << p.second << endl;
    cout << q.first << " " << q.second << endl;

    p.swap(q);
    cout <<"\nAfter swapping two Pair\n";
    cout << p.first << " " << p.second << endl;
    cout << q.first << " " << q.second << endl;
    cout << endl;

    ///Array of Pair
    pair<int,string> p1[3];
    p1[0] = {66,"Rohan"};
    p1[1] = {67,"Haiman"};
    p1[2] = {70,"Sayed"};

    for(int i=0; i<3; i++){
        cout << p1[i].first << " " << p1[i].second << endl;
    }
    ///Swapping
    swap(p1[0],p1[2]);
    cout << "\nAfter Swapping\n";
    for(int i=0; i<3; i++){
        cout << p1[i].first << " " << p1[i].second << endl;
    }


}
