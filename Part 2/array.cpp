#include <iostream>
using namespace std;

int main() {
    int n,i;
    cin >> n;        // Input size of array

    int arr[n];
    for(i = 0; i < n; i++) {
        cin >> arr[i] ;   // input elements
    }

    cout << "Elements of Array -: ";

    for(i = 0; i < n; i++) {
        cout <<arr[i] <<" ";  
    }
    
    return 0;
}
