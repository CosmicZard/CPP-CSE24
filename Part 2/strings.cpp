#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>
using namespace std;

int main()
{

    /* char str[] = {'H', 'e', 'l', 'l', 'o', ',', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'};

    cout << "Welcome Message: " << str << endl; */

    /* char string[100];
    cout << "Enter a string: ";
    cin.getline(string, 2);
    cout << "You entered: " << string << endl; */

    /* char f_name[50], l_name[50] , full_name[100];
    cout << "Enter your first name: ";
    cin.getline(f_name, 50);
    cout << "Enter your last name: ";
    cin.getline(l_name, 50);
    cout << "Full Name: " << f_name << " " << l_name << endl;
    cout << "Hi " << f_name << "! Your first name has " << strlen(f_name) << " characters." << endl << "And your last name has " << strlen(l_name) << " characters." << endl;
    strcpy(full_name, f_name);

    strcat(full_name, " ");
    strcat(full_name, l_name);
    cout << "Full Name using strcat: " << full_name << endl;

    if ((strcmp(f_name,l_name)) == 0)
    {
        cout << "Both the strings are the same." << endl;
    }
    else
    {
        cout << "Strings are not the same." << endl;
    } */

    // Declaring and using C++ string object

    /* string str;
    cout << "Enter a string: ";
    getline(cin, str);
    cout << "You entered: " << str << endl;
     */

    // Concatenation of C++ string objects using append() and + operator

    /* string str1 = "Hello";
    string str2 = " World!";
    string str3;

    str3 = str1.append(str2);
    cout << "Concatenated String: " << str3 << endl; */

    /* string str1 = {"Hello"} ;
    string str2 = {"Joy!"} ;
    string str3 (str2) ;
    string str4 (5 , 'a') ;
    cout << str1 << endl << str2 << endl << str3 << endl << str4 << endl ;

    cout << str1.length() << endl ;
    cout << str2.length() << endl ;
    cout << str3.length() << endl ;
    cout << str4.length() << endl ;


    rotate(str1.begin(), str1.begin() + 2, str1.end()) ;
    cout << "After left rotation by 2: " << str1 << endl ;
    rotate(str2.begin(), str2.end() - 3, str2.end()) ;
    cout << "After right rotation by 3: " << str2 << endl ;
    */

    /* string str1 = "Hi, Welcome Home!";
    string str2 = "I am Roshan!";

    cout<< str1.insert(3, " Roshan ") << endl ;
    cout<< str1.insert(3, str2) << endl ;
    cout<< str1.insert(21, ". What will you have?",4 ,5) << endl ; */


    string str1 = "Hello, Welcome to C++ programming.";
    cout << str1.find("C++") << endl ;
                  
    return 0;
}