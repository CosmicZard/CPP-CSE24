#include <iostream>
using namespace std;

int main()
{

    // int i,j;

    /*  int i;
        for ( i = 1; i < 6; i++)
        {
            if (i>3) continue;
        }
        cout<<i<<endl; */

    /* int meal = 5;
    int tip = 2;
    int total = meal + (meal > 6 ? ++tip : --tip);
    cout << total << endl; */

    /* if (1+1+1+1+1==5)
    {
        cout<<"True";
    }else{
        cout<<"False";
    } */

    /* for (int i = 0; i <= 4; i++)
    {
        //spaces
        for (int j = 4 - i; j >= 1; j--)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for (int i = 3; i >= 1; i--)
    {
        for (int j = 4 - i; j >= 1; j--)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    } */

    /*    for ( i = 1; i <= 4; i++)
       {
            cout << "*" ;

        for ( j = 0; j < 3; j++)
        {
                if (i == 1 || i == 4)
                {
                        cout << "*";
                    }
                    else
                    {
                            cout << " ";
                        }
                    }

                        cout << "*" << endl;
                    } */

    /* for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4 - i; j++)
        {
            cout << " ";
        }
        for (j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    } */

    /* char ch = 'A';

    for ( i = 0; i < 4; i++)
    {
        for ( j = 0; j <= i; j++)
        {
            cout << ch++;
        }
        cout << endl;
    } */

    /* for (i = 0; i < 4; i++)
    {
        for (j = 4 - i; j > 1; j--)
        {
            cout << " ";
        }
        for (j = i; j >= 1; j--)
        {
            cout << j;
        }
        for (j = 2; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
 */

    // output:
    //      1
    //     212
    //    32123

    /*
    int i,j;
    for ( i = 0; i < 4; i++)
    {
        for ( j = 4-i ; j > 1; j--)
        {
            cout<<" ";
            }
            for (j=0;j<=4;j++){
                cout<<"*";
                }
                cout<<endl;
                }
                */

    // Output:
    //     ****
    //    ****
    //   ****
    //  ****

/*     int i, j;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j <= i; j++)
        {
            if ((i + j) % 2 == 0)
                cout << "0";
            else
                cout << "1";
        }
        cout << endl;
    }
    return 0; */

    // Output:
    // 0
    // 01
    // 101
    // 1010


    return 0;
}