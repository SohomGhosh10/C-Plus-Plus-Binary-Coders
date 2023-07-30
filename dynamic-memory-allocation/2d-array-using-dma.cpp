#include <iostream>
using namespace std;
int main()
{
    int row, col;
    cin >> row >> col; // Taking row and coloumn input

    int **arr = new int *[row]; // Allocating memory for rows

    for (int i = 0; i < row; i++)
        arr[i] = new int[col]; // Allocating memory for coloumns 

    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
            cin >> arr[i][j]; // Taking input of the matrix

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
            cout << arr[i][j] << " "; // printing matrix
        cout << endl;
    }

    for (int i = 0; i < row; i++)
        delete arr[i]; // De-Allocation
    delete arr; // De-Allocation

    return 0;
}
