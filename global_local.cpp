#include <iostream>
using namespace std;


            int a = 10; // Global variable

        int main() {
            {
                int b = 30; // Local variable
                cout << "Inside block: a = " << a << ", b = " << b << endl;
            }
            return 0;
        }