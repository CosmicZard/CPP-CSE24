#include <iostream>
using namespace std;

        int main() {
            int a = 10;
            int b = 3;


            // Arthemetic operators
            cout <<" Arthemetic operators"<<endl;
            cout <<"a+b= "<<a+b<<endl; // Addition
            cout <<"a-b= "<<a-b<<endl; // Subtraction
            cout <<"a*b= "<<a*b<<endl; // Multiplication    
            cout <<"a/b= "<<a/b<<endl; // Division
            cout <<"a%b= "<<a%b<<endl; // Modulus
            cout <<"++a= "<<++a<<endl; // Pre-increment 
            cout <<"b++= "<<b++<<endl; // Post-increment
            cout <<"After ++a a= "<<a<<endl; // Value after pre-increment
            cout <<"After b++ b= "<<b<<endl; // Value after post-increment
            cout <<"--a= "<<--a<<endl; // Pre-decrement
            cout <<"b--= "<<b--<<endl; // Post-decrement
            cout <<"After --a b= "<<a<<endl; // Value after pre-decrement
            cout <<"After b-- b= "<<b<<endl; // Value after post-decrement

            // Comparison operators
            bool isEqual = (a == b);
            bool isNotEqual = (a != b);
            bool isGreater = (a > b);

            // Logical and Relational Operators
            bool logicalAnd = (a > 5 && b < 5);
            bool logicalOr = (a > 5 || b > 5);
            bool logicalNot = !(a > b);

            // Bitwise operators
            int sum = a & b; // Bitwise AND
            int diff = a | b; // Bitwise OR

            cout << "isEqual: " << isEqual << endl;
            cout << "isNotEqual: " << isNotEqual << endl;
            cout << "isGreater: " << isGreater << endl;
            cout << "logicalAnd: " << logicalAnd << endl;
            cout << "logicalOr: " << logicalOr << endl;
            cout << "logicalNot: " << logicalNot << endl;
            cout << "Bitwise AND (a & b): " << sum << endl;
            cout << "Bitwise OR (a | b): " << diff << endl;

            return 0;
        }