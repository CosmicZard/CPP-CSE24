/* #include <iostream>
using namespace std;

        int main() {
            // If-Else Condition (Traffic Signal)
            char signal;
            cout << "Enter traffic signal color (R/G/Y): ";
            cin >> signal;
            if (signal == 'R') {
                cout << "Stop" << endl;
            } else if (signal == 'G') {
                cout << "Go" << endl;
            } else if (signal == 'Y') {
                cout << "Wait" << endl;
            } else {
                cout << "Invalid signal color" << endl;
            }
            return 0;
        }  */

/* #include <iostream>
using namespace std;

int main() {
    // Movie Ticket Pricing Based on Age

    int age;
    int OriginalPrice = 200;
    int DiscountPrice;


    cout << "Enter your age: ";
    cin >> age;


    if (age <= 0) {

        cout << "Invalid age" << endl;
    } else if (age < 12) {
            DiscountPrice = OriginalPrice - (OriginalPrice * 0.20); // 20% discount
            cout << "Original Ticket Price: " << OriginalPrice << endl;
            cout << "The Price after Discount:  " << DiscountPrice << endl;
    } else if (age <= 12 && age <= 18) {
            DiscountPrice = OriginalPrice - (OriginalPrice * 0.25); // 25% discount
            cout << "Original Ticket Price: " << OriginalPrice << endl;
            cout << "The Price after Discount:  " << DiscountPrice << endl;
    } else {
            DiscountPrice = OriginalPrice - (OriginalPrice * 0.30); // 30% discount
            cout << "Original Ticket Price: " << OriginalPrice << endl;
            cout << "The Price after Discount: " << DiscountPrice << endl;
    }
    return 0;
} */

/* #include <iostream>
using namespace std;

int main() {
    // Check whether char is uppercase or lowercase or special character or digit
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    if (ch >= 'A' && ch <= 'Z') {
        cout << ch << " is an uppercase letter." << endl;
    } else if (ch >= 'a' && ch <= 'z') {
        cout << ch << " is a lowercase letter." << endl;
    } else if (ch >= '0' && ch <= '9') {
        cout << ch << " is a digit." << endl;
    } else {
        cout << ch << " is a special character." << endl;
    }

    return 0;
} */

/* #include <iostream>
using namespace std;

        int main() {
            // Identify the triangle type based on side lengths
            int a, b, c;
            cout << "Enter First side length: ";
            cin >> a;
            cout << "Enter Second side length: ";
            cin >> b;
            cout << "Enter Third side length: ";
            cin >> c;

            if (a <= 0 || b <= 0 || c <= 0) {
                cout << "Invalid side lengths" << endl;
            } else if (a == b && b == c) {
                cout << "The triangle is Equilateral." << endl;
            } else if (a == b || b == c || a == c) {
                cout << "The triangle is Isosceles." << endl;
            } else {
                cout << "The triangle is Scalene." << endl;
            }
            return 0;
        } */

#include <iostream>
using namespace std;

        int main() {
            // Leap year conditional
            
            return 0;
        }