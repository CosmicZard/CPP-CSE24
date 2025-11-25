#include <iostream>
using namespace std;

int main()
{
    int marks[] = {20, 30, 40, 50, 60};
    int size = sizeof(marks) / sizeof(int);

    cout << marks[0] << endl; 
    cout << marks[1] << endl; 
    cout << size << endl;

    return 0;   
}