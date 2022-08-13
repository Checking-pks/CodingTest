#include <iostream>
#include <vector>

using namespace std;

int main() {
    int row, col;
    cin >> row >> col;

    vector <vector <int>> matrix(row, vector<int>(col, 0));

    for (int i=0; i<2; i++) {
        for (int j=0; j<row; j++) {
            for (int k=0; k<col; k++) {
                int num;
                cin >> num;
    
                matrix[j][k] += num;
            }
        }
    }

    for (int i=0; i<row; i++) {
        for (int j=0; j<col; j++) {
            cout << matrix[i][j] << " ";
        }

        cout << "\n";
    }
}