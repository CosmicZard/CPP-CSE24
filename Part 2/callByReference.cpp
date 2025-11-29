#include <iostream>
using namespace std;

void changeValue(int &x){
    x--;
}

int main() {
    
    int a = 5;
    cout<<a<<endl;
    changeValue(a);
    cout<<a<<endl;
    
    return 0;
}