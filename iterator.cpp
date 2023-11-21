#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<pair<int,int>> vp={{1,2},{2,3},{3,4}};
    vector<pair<int,int>>:: iterator it;
    for(it=vp.begin(); it!=vp.end(); ++it){
        cout << (*it);
        printf("hello");
    }

    return 0;
}