#include <iostream>
using namespace std;

void sum(int a, int b) {
    cout << "Sum is: " << a + b << endl;
}
void say() {
    cout << "Hello World" << endl;
}

void printNum(int n) {
    cout << "Number: " << n << endl;
}

int main() {

    int num1 = 10;
    int num2 = 20;

    printNum(num1);
    printNum(num2);

    say();
    
    sum(5, 3);  
    
    return 0;
     
}