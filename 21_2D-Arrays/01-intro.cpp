#include <iostream>
#include <vector>
using namespace std;

// ✅ Linear Search Function in a 2D Matrix
// Searches for a target number in a 2D matrix.
// Returns a pair of (row index, column index) if found, else (-1, -1).
pair<int, int> linearSearch(int matrix[][3], int rows, int col, int target)
{
    pair<int, int> p = {-1, -1}; // default result if not found

    // Loop through each row
    for (int i = 0; i < rows; i++)
    {
        // Loop through each column of the current row
        for (int j = 0; j < col; j++)
        {
            if (target == matrix[i][j])
            {
                // Target found, update the result pair
                p.first = i;
                p.second = j;
            }
        }
    }

    return p;
}

// ✅ Function to find maximum row sum
int maxRowSum(int matrix[][3], int rows, int col)
{
    int maxSum = INT32_MIN; // Initialize with very small value

    for (int i = 0; i < rows; i++)
    {
        int sum = 0;

        for (int j = 0; j < col; j++)
        {
            sum += matrix[i][j]; // Row-wise addition
        }

        maxSum = max(sum, maxSum); // Update max if current row is bigger
    }

    return maxSum;
}

// ✅ Function to find maximum column sum
int maxColSum(int matrix[][3], int rows, int col)
{
    int maxSum = INT32_MIN;

    // Outer loop goes column-wise
    for (int i = 0; i < col; i++)
    {
        int sum = 0;

        for (int j = 0; j < rows; j++)
        {
            sum += matrix[j][i]; // Column-wise addition
        }

        maxSum = max(sum, maxSum);
    }

    return maxSum;
}

// ✅ Function to calculate diagonal sum of square matrix (3x3)
int diagSum(int squMat[][3], int n)
{
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            // Check for main diagonal OR secondary diagonal
            if (i == j || j == n - 1 - i)
            {
                sum += squMat[i][j];
            }

            // Middle element is counted twice (in case of odd n), remove it once
            if (i == j && j == n - 1 - i)
            {
                sum -= squMat[i][j];
            }
        }
    }

    return sum;

    /*
    ✅ More Optimized Version (Recommended):
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += squMat[i][i];         // Main diagonal
        sum += squMat[i][n - 1 - i]; // Secondary diagonal
    }
    if(n % 2 != 0){
        sum -= squMat[n / 2][n / 2]; // If n is odd, subtract overlapping middle element
    }
    return sum;
    */
}

int main()
{
    int rows = 4;
    const int col = 3;
    int matrix[rows][col]; // 🔲 Declaring a 4x3 matrix

    // 📥 Taking input from user to fill the matrix
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> matrix[i][j];
        }
        cout << endl;
    }

    // 📤 Printing the matrix for verification
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    // 🎯 Taking target value input from user
    int target;
    cout << "Enter Target: ";
    cin >> target;

    // 🔍 Searching for target value in the matrix
    pair<int, int> p = linearSearch(matrix, rows, col, target);

    // ✅ Showing result of linear search
    if (p.first != -1)
    {
        cout << "Number is Present on index (" << p.first << ", " << p.second << ")." << endl;
    }
    else
    {
        cout << "Number is not Present." << endl;
    }

    // ✅ Displaying maximum sum of any row
    int maxSum = maxRowSum(matrix, rows, col);
    cout << "Maximum sum of a row is: " << maxSum << endl;

    // ✅ Displaying maximum sum of any column
    maxSum = maxColSum(matrix, rows, col);
    cout << "Maximum sum of a Col is: " << maxSum << endl;

    // ✅ Diagonal sum from a fixed 3x3 matrix
    int squMat[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = 3;
    int diaSum = diagSum(squMat, n);
    cout << "Diagonal Sum is: " << diaSum << endl;

    // ✅ Demonstrating 2D Vectors with different row sizes
    vector<vector<int>> mat = {{1, 2, 3}, {4, 5, 6, 10, 11}, {7, 8, 9}};

    // 🔁 Loop to print each row of 2D vector
    for (int i = 0; i < mat.size(); i++)
    {
        for (int j = 0; j < mat[i].size(); j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

/*
📝 Summary Notes for Revision:

✔ linearSearch(matrix, rows, col, target):
   - Returns pair of (i, j) if target is found.
   - Else returns (-1, -1).

✔ maxRowSum() and maxColSum():
   - Traverse through rows and columns respectively.
   - Use max() to track the largest sum.

✔ diagSum():
   - Adds both diagonals of square matrix.
   - Removes duplicate middle element if matrix size is odd.

✔ 2D Vector:
   - Can have rows of different lengths.
   - Use `mat[i].size()` to handle such cases.

🌟 All concepts are very useful for handling matrices in C++.
*/
