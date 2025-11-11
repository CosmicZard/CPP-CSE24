#include <iostream>
using namespace std;

        int main() {

        //Write a program to find thhe max element in an array of 5 integers.

            int arr[5] = {10, 20, 30, 40, 50};
            int max = arr[0];

            for (int i = 1; i < 5; i++) {
                if (arr[i] > max) {
                    max = arr[i];
                }
            }

            cout << "Maximum element in the array: " << max << endl;


            //Write a program to find thhe min element in an array of 5 integers.

            int min = arr[0];

            for (int i = 1; i < 5; i++) {
                if (arr[i] < min) {
                    min = arr[i];
                }
            }

            cout << "Minimum element in the array: " << min << endl;
            

            return 0;
        }