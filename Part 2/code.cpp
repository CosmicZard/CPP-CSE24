// 2.1

/* #include <iostream>
using namespace std;

int main() {
    int a, b, temp;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    temp = a;
    a = b;
    b = temp;

    cout << "Before swapping:" << endl;
    cout << "a = " << b << endl;
    cout << "b = " << a << endl;

    cout << "After swapping:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
} */

// 2.2

#include <iostream>
using namespace std;

int main() {
    float basic, da, hra, gross, pf, net;

    cout << "Enter Basic Salary: ";
    cin >> basic;

    da = 0.25 * basic;      // 25% of basic
    hra = 0.15 * basic;     // 15% of basic

    gross = basic + da + hra;

    pf = 0.10 * gross;      // 10% of gross salary

    net = gross - pf;

    cout << "Net Salary = " << net;

    return 0;
}


// 2.3

/* #include <iostream>
using namespace std;

int main() {
    int n, sum = 0;

    cout << "Enter a 4-digit number: ";
    cin >> n;

    sum = (n / 1000) + (n / 100 % 10) + (n / 10 % 10) + (n % 10);

    cout << "Sum of digits = " << sum;

    return 0;
} */

// 3.1

/* #include <iostream>
using namespace std;

int main() {
    int a, b, c, largest;

    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    largest = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);

    cout << "Largest number = " << largest;

    return 0;
} */


// 3.2 

/* #include <iostream>
using namespace std;

int main() {
    int year;

    cout << "Enter a year: ";
    cin >> year;

    (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
        ? cout << "Leap Year"
        : cout << "Not a Leap Year";

    return 0;
} */

// 3.3

/* #include <iostream>
using namespace std;

int main() {
    int n, rev = 0, temp;

    cout << "Enter a 4-digit number: ";
    cin >> n;

    temp = n;

    rev = (temp % 10) * 1000
        + (temp / 10 % 10) * 100
        + (temp / 100 % 10) * 10
        + (temp / 1000);

    (n == rev) ? cout << "Palindrome Number" : cout << "Not a Palindrome Number";

    return 0;
} */

// 4.1

/* #include <iostream>
using namespace std;

int main() {
    int choice;
    float a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "Choose operation:\n";
    cout << "1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Result = " << a + b;
            break;

        case 2:
            cout << "Result = " << a - b;
            break;

        case 3:
            cout << "Result = " << a * b;
            break;

        case 4:
            if (b != 0)
                cout << "Result = " << a / b;
            else
                cout << "Division by zero is not allowed";
            break;

        default:
            cout << "Invalid choice";
    }

    return 0;
} */

// 4.2

/* #include <iostream>
using namespace std;

int main() {
    int limit, a = 0, b = 1, c;

    cout << "Enter the limit: ";
    cin >> limit;

    cout << "Fibonacci sequence: ";

    while (a <= limit) {
        cout << a << " ";
        c = a + b;
        a = b;
        b = c;
    }

    return 0;
} */

// 4.3

/* #include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num, temp, digit, count = 0;
    int sum = 0;

    cout << "Enter a number: ";
    cin >> num;

    temp = num;

    // Count number of digits
    while (temp != 0) {
        count++;
        temp /= 10;
    }

    temp = num;

    // Calculate sum of digits raised to power count
    while (temp != 0) {
        digit = temp % 10;
        sum += pow(digit, count);
        temp /= 10;
    }

    if (sum == num)
        cout << num << " is an Armstrong number";
    else
        cout << num << " is not an Armstrong number";

    return 0;
} */

// 5.1

/* #include <iostream>
using namespace std;

int main() {
    int num, sum;

    cout << "Enter a number: ";
    cin >> num;

    while (num >= 10) {   // Repeat until single digit
        sum = 0;
        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }
        num = sum;
    }

    cout << "Single-digit sum = " << num;

    return 0;
} */

// 5.2

/* #include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter the value of N: ";
    cin >> N;

    cout << "Prime numbers between 1 and " << N << " are:\n";

    for (int i = 2; i <= N; i++) {
        bool isPrime = true;

        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime)
            cout << i << " ";
    }

    return 0;
} */

// 5.3

/* #include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter number of rows: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        // Print spaces
        for (int j = i; j < n; j++) {
            cout << " ";
        }

        // Print decreasing numbers
        for (int j = i; j >= 1; j--) {
            cout << j;
        }

        // Print increasing numbers
        for (int j = 2; j <= i; j++) {
            cout << j;
        }

        cout << endl;
    }

    return 0;
} */

// 6.1

/* #include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    if (n < 3) {
        cout << "At least 3 students are required.";
        return 0;
    }

    int marks[n];
    cout << "Enter marks of students:\n";
    for (int i = 0; i < n; i++) {
        cin >> marks[i];
    }

    // Sort marks in descending order
    sort(marks, marks + n, greater<int>());

    cout << "Top three students' marks are:\n";
    cout << "1st: " << marks[0] << endl;
    cout << "2nd: " << marks[1] << endl;
    cout << "3rd: " << marks[2] << endl;

    return 0;
} */

// 6.2

/* #include <iostream>
using namespace std;

int main() {
    int n, key;
    cout << "Enter array size: ";
    cin >> n;

    int arr[n];
    cout << "Enter array elements in increasing order:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter number to find: ";
    cin >> key;

    int low = 0, high = n - 1, mid;
    bool found = false;

    while (low <= high) {
        mid = (low + high) / 2;

        if (arr[mid] == key) {
            cout << "Element found at position " << mid + 1;
            found = true;
            break;
        } else if (arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    if (!found)
        cout << "Element not found";

    return 0;
} */

// 6.3

/* #include <iostream>
using namespace std;

int main() {
    int r1, c1, r2, c2;

    cout << "Enter rows and columns of Matrix A: ";
    cin >> r1 >> c1;

    cout << "Enter rows and columns of Matrix B: ";
    cin >> r2 >> c2;

    // Validation
    if (c1 != r2) {
        cout << "Matrix multiplication not possible!";
        return 0;
    }

    int A[r1][c1], B[r2][c2], C[r1][c2];

    cout << "Enter elements of Matrix A:\n";
    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c1; j++)
            cin >> A[i][j];

    cout << "Enter elements of Matrix B:\n";
    for (int i = 0; i < r2; i++)
        for (int j = 0; j < c2; j++)
            cin >> B[i][j];

    // Initialize result matrix with 0
    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c2; j++)
            C[i][j] = 0;

    // Matrix multiplication
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            for (int k = 0; k < c1; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    cout << "Resultant Matrix:\n";
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
 */