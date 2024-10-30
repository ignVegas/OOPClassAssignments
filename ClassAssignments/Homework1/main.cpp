#include <iostream>
using namespace std;

void multiplyMatrices(int (*A)[10], int (*B)[10], int (*C)[10], int row, int col, int bCol) {
    for (int i = 0; i < row; i++) { // fills c in as 0
        for (int j = 0; j < bCol; j++) {
            C[i][j] = 0;
        }
    }

    for (int i = 0; i < row; i++) { // row 
		for (int j = 0; j < bCol; j++) { // column in b
			for (int k = 0; k < col; k++) { // loops in a row,b column
				C[i][j] += A[i][k] * B[k][j]; // multiply and add to C
            }
        }
    }
}

void printMatrix(int (*A)[10], int row, int col) {
    for (int i = 0; i < row; i++) { // row A
        for (int j = 0; j < col; j++) { // col A
			cout << A[i][j] << " "; // print A element
        }
		cout << endl; // line break
    }
}

int main() {
    int row = 2, col = 3, bCol = 2;

    int A[2][10] = { {1, 2, 3}, {4, 5, 6} };
    int B[3][10] = { {7, 8}, {9, 10}, {11, 12} };
    int C[2][10] = { 0 };

	// in memory that looks like this
	// A = 1 2 3
	//     4 5 6

	// B = 7 8
	//     9 10
	//     11 12

	// C = 0 0
	//     0 0

	// but theres a bunch of zeros in memory that arent shown


    multiplyMatrices(A, B, C, row, col, bCol);

    cout << "Result matrix is: " << endl;
    printMatrix(C, row, bCol);

    return 0;
}
