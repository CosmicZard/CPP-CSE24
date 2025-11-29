#include <iostream>
using namespace std;

void printHello(int n) {
    if (n==0 || n<0) return;
    cout<< "Hello"<<endl;
    printHello(n-3);
}

int main() {
    
    printHello(3);
    
    return 0;
}