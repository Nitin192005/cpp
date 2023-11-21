#include<iostream>
using namespace std;

int main(){
    int arr[20], key;
    
    for(int i=0; i<20; ++i){
        cin >> arr[i];
    }
    
    cin >> key;

    int s = 0, e = 19;  // Adjusted e to 19 since array indices go from 0 to 19
    
    // Binary Search
    while (s <= e) {
        int mid = (s + e) / 2;

        if (arr[mid] == key) {
            cout << "Element found at index: " << mid << endl;
            break; // Exit the loop when the key is found
        } else if (arr[mid] > key) {
            e = mid - 1;
        } else {
            s = mid + 1;
        }
    }

    return 0;
}
