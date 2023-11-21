#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
    cin >> t;
	for(int i=1; i<=t; ++i){
	    int n,x;
	    cin >> n >> x;
	    int arr[n];
	    for(int i=0; i<n; ++i){
	       cin >> arr[i];
	    }
	    sort(arr[0],arr[n-1]);
	    cout << arr[0] << endl;
	}
	return 0;
}
