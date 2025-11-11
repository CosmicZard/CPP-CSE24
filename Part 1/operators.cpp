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
            cout <<" Logical and Relational Operators"<<endl;
            cout <<"(a && b) = "<<(a && b)<<endl; // Logical AND
            cout <<"(a || b) = "<<(a || b)<<endl; // Logical OR
            cout <<"!(a) = "<<(!a)<<endl; // Logical NOT


            // Bitwise operators
            cout <<" Bitwise operators"<<endl;
            cout <<"a & b= "<<(a & b)<<endl; // Bitwise AND
            cout <<"a | b= "<<(a | b)<<endl; // Bitwise OR

            //Typecaste Operators
            cout<<"Type cast Operator: "<<endl;
            double pi = 3.14159;
            pi = (int)pi; // C-style cast
            cout << "Value of pi: " << pi << endl;

            
            return 0;
        }