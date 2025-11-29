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


// Fabonocci Series using Recursion by function
#include <iostream>
#include <math.h>

using namespace std;


void fabonocci(int n) {

    int a = 0, b = 1, c;

    cout << a << " " << b << " ";
    
    for (int i = 2; i < n; i++) {
        c = a + b;
        cout << c << " ";
        a = b;
        b = c;
    }
}

int main() {
    int n;
    cout << "Enter the number of terms in Fabonocci Series: ";
    cin >> n;
    fabonocci(n);
    return 0;
} 



