/* // paladrome number using recursion

#include <iostream>
#include <algorithm>

using namespace std;
void paladrome(string str) {
    
    string rev = str;
    reverse(rev.begin(), rev.end());

    if (str == rev) {
        cout << str << " is a Paladrome Number" << endl;
    } else {
        cout << str << " is not a Paladrome Number" << endl;
    }

}

int main() {
    
     paladrome("121"); 
     
    return 0;
}
 */

// Fabonocci Series 

void fabonocciNum(){
    int n = 10;
    int a = 0, b = 1, c;

    cout << a << " " << b << " ";
    
    for (int i = 2; i < n; i++) {
        c = a + b;
        cout << c << " ";
        a = b;
        b = c;
    }
}


// Fabonocci Series using Recursion by function
#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>

using namespace std;

void Vowel_ConsonentSort(){
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    string vowels = "";
    string consonants = "";

    for (char c : str) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            vowels += c;
        } else if (isalpha(c)) {
            consonants += c;
        }
    }

    sort(vowels.begin(), vowels.end());
    cout << "Sorted Vowels: " << vowels << endl;
    sort(consonants.begin(), consonants.end());
    cout << "Sorted Consonants: " << consonants << endl;
}

void reverseString(string str) {
    
    reverse(str.begin(), str.end());
    cout << "Reversed String: " << str << endl;
}

int main() {
    // int n;
    // cout << "Enter the number of terms in Fabonocci Series: ";
    // cin >> n;
    // fabonocci(n);
    // return 0;
    
    // Vowel_ConsonentSort();
    
    string str;
    cout << "Enter a string to reverse: ";
    // getline(cin, str);
    // reverseString(str);
    fabonocciNum();

    return 0;
} 



