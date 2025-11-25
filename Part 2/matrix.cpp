// Adding of two matrices in C++

#include <iostream>
using namespace std;

int main()
{
    const int rows = 2;
    const int cols = 3;
    int matrixA[rows][cols] = { {1, 2, 3}, {4, 5, 6} };
    int matrixB[rows][cols] = { {7, 8, 9}, {10, 11, 12} };
    int result[rows][cols];

    // Adding the two matrices
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            result[i][j] = matrixA[i][j] + matrixB[i][j];
        }
    }

    // Displaying the result
    cout << "Resultant Matrix after Addition:" << endl;
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}