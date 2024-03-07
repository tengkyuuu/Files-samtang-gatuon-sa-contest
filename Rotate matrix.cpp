#include <iostream>
#include <algorithm>

using namespace std;

const int MAX_SIZE = 100;

void rotateClockwise(int matrix[MAX_SIZE][MAX_SIZE], int n) {
    // Transpose the matrix
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    // Reverse each row
    for (int i = 0; i < n; ++i) {
        reverse(matrix[i], matrix[i] + n);
    }
}

void rotateCounterclockwise(int matrix[MAX_SIZE][MAX_SIZE], int n) {
    // Transpose the matrix
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    // Reverse each column
    for (int i = 0; i < n / 2; ++i) {
        for (int j = 0; j < n; ++j) {
            swap(matrix[i][j], matrix[n - 1 - i][j]);
        }
    }
}

void printMatrix(int matrix[MAX_SIZE][MAX_SIZE], int n) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;

    int matrix[MAX_SIZE][MAX_SIZE];

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << "Enter matrix[" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }

    cout << "Original Matrix: " << endl;
    printMatrix(matrix, n);

    cout << "\nRotate 90 degrees Clockwise:" << endl;
    rotateClockwise(matrix, n);
    printMatrix(matrix, n);

    cout << "\nRotate 90 degrees Counterclockwise:" << endl;
    rotateCounterclockwise(matrix, n);
    printMatrix(matrix, n);
}
