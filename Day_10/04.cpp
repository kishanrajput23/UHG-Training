#include <iostream>

using namespace std;

pair<int, int> searchInMatrix(int matrix[][100], int rows, int cols, int target) {
    int row = 0;
    int col = cols - 1;

    while (row < rows && col >= 0) {
        if (matrix[row][col] == target)
            return make_pair(row, col);
        else if (matrix[row][col] > target)
            col--;
        else
            row++;
    }

    return make_pair(-1, -1);
}

int main() {
    int rows, cols;
    cout << "Enter the number of rows and columns: ";
    cin >> rows >> cols;

    int matrix[100][100];

    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }

    int target;
    cout << "Enter the target element to search: ";
    cin >> target;

    pair<int, int> result = searchInMatrix(matrix, rows, cols, target);

    if (result.first == -1 && result.second == -1)
        cout << "Element not found." << endl;
    else
        cout << "Coordinates of the target element: (" << result.first << ", " << result.second << ")" << endl;

    return 0;
}