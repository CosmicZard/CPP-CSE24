#include <cmath>
#include <iostream>
using namespace std;

int main()  {
                // Calculate the armstrong numbers between 1 to 500
                int num, originalNum, remainder, result;

                cout << "Armstrong numbers between 1 and 500 are: " << endl;

                for (num = 1; num <= 500; ++num) {
                    originalNum = num;
                    result = 0;

                    while (originalNum != 0) {
                        remainder = originalNum % 10;
                        result += pow(remainder, 3); // cube of each digit
                        originalNum /= 10;
                    }

                    if (result == num)
                        cout << num << " ";
                }
                cout << endl;
                
            }




            //Print numbers from 1 to n skipping multiples of 5 and 7

            /* int n;

            cout << "Enter a number: ";
            cin >> n;      

            for (int i = 1; i <= n; i++) {
                if (i % 5 == 0 || i % 7 == 0) {
                    continue;
                }
                cout << i << " ";
            }
            cout << endl; */

            // return 0;

            //Input three sides of a triangle and check whether isosceles, equilateral or scalene

            /* float a, b, c;

            cout << "Enter the three sides of the triangle: ";
            cin >> a >> b >> c;
            if (a == b && b == c) {
                cout << "The triangle is equilateral." << endl;
            } else if (a == b || b == c || a == c) {
                cout << "The triangle is isosceles." << endl;
            } else {
                cout << "The triangle is scalene." << endl;
            } */


            // Calculate electricity bill based on units consumed

            /* int units;
            cout << "Enter the number of units consumed: ";
            cin >> units;

            double totalBill;

            if (units <= 100) {
                totalBill = units * 1.5;
            } else if (units <= 200) {
                totalBill = (100 * 1.5) + ((units - 100) * 2.00);
            } else {
                totalBill = (100 * 1.5) + (100 * 2.00) + ((units - 200) * 3.00);
            }
            cout << "Total bill: " << totalBill+(0.2f* totalBill) << endl;

            return 0; */

