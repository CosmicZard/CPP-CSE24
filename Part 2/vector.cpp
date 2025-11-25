#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    
    vector<int> vec1 = {123, 452, 30, 14, 50};

    sort(vec1.begin(), vec1.end());
    reverse(vec1.begin(), vec1.end());

    for (int val : vec1) {
        cout << val << " ";
    }
    cout << endl;
    
    return 0;
}