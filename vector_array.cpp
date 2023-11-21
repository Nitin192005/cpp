#include<bits/stdc++.h>
using namespace std;
void printvec(vector<int> &v){
    for(int i=0; i< (int)v.size(); ++i){
        cout << v[i] << " ";
    }
    cout << endl;
}
int main(){
    cout << "enter size of vector" << endl;
    int N;
    cin >> N;
    vector<int> v[N];
    for(int i=0; i<N; ++i){
        cout << "Enter Size of array" << endl;
        int n;
        cin >> n;
        cout << "Enter Elements of array"<< endl;
        for(int i=0; i<n; ++i){
            int x;
            cin >> x;
            v[i].push_back(x);
        }
    }
    for(int i=0; i<N; ++i){
        printvec(v[i]);
    }
    return 0;
}