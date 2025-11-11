#include <iostream>
using namespace std;

int main()
{

    // upper for diamond
    for (int i = 0; i <= 4; i++)
    {
        // spaces
        for (int j = 4 - i; j >= 1; j--)
        {
            cout <<" ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for (int i = 3; i >= 1; i--)
    {
        for (int j = 4 - i; j >= 1; j--){
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}
    // Print star pattern in increasing order
    // for(i=1; i<=4;i++){
    //     for(j=1;j<=i;j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    // for ( i = 4 ; i >= 1 ; i--)
    // {

    //     for (j = 1; j <= i; j++)
    //     {
    //         cout << j;
    //     }
    //     cout << endl;
    // }

    // return 0;

    // Print ABC pattern

    // for (i = 0; i < 5; i++)
    // {
    //     for (j = 0; j <= i; j++)
    //     {
    //         char ch = 'A' + i;
    //         cout << ch;
    //     }
    //     cout << endl;
    // }

    // // Print Prime numbers between 1 to 50 with do-whileloop

    // int num = 2;
    // do
    // {
    //     bool isPrime = true;
    //     for (int i = 2; i <= num / 2; i++)
    //     {
    //         if (num % i == 0)
    //         {
    //             isPrime = false;
    //             break;
    //         }
    //     }
    //     if (isPrime == true)
    //     {
    //         cout << num << " ";
    //     }
    //     num++;
    // } while (num <= 50);