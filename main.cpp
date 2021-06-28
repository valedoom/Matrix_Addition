#include <iostream>
#include <cmath>
using namespace std;

//will add two matrices of random sizes and print the results
int main() {
    double A[100][100], B[100][100]; //these are empty matrices taht can store information
    long n1,n2, m1,m2;

    cout << "Enter the number of rows for the first matrix: ";
    cin >> n1;

    cout << "Enter the number of columns for the first matrix: ";
    cin >> m1;

    //now you have to manually input all of the values
    for(long i = 0; i < n1; i++){
        for(long j = 0; j < m1; j++){
            cout <<"Value for entry A_(" << i+1 << "," << j+1 << ") Input -->";
            cin >> A[i][j];
        }
    }

    cout << "\nEnter the number of rows for the second matrix: ";
    cin >> n2;

    cout << "Enter the number of columns for the second matrix: ";
    cin >> m2;

    //now you have to manually input all of the values
    for(long i = 0; i < n2; i++){
        for(long j = 0; j < m2; j++){
            cout <<"Value for entry B_(" << i+1 << "," << j+1 << ") Input -->";
            cin >> B[i][j];
        }
    }

    if (m1 != n2) {
        cerr << "Warning: The matrix product does not exist!"; exit(1);
    }

    double C[n1][m2];

    for(long i = 0; i < n1; i++){
        for(long j = 0; j < m2; j++){
            
            double sum = 0;
            for (long k = 0; k < m1; k++) {
                sum = sum + A[i][k] * B[k][j];
            }
            C[i][j] = sum;
            cout << C[i][j] << endl;
        }
    }
    return 0;
}