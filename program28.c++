#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int mat[100][100];

    // Input matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> mat[i][j];
        }
    }

    // Count 1s in each row and column
    int rowCount[100] = {0};
    int colCount[100] = {0};

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (mat[i][j] == 1) {
                rowCount[i]++;
                colCount[j]++;
            }
        }
    }

    int count = 0;

    // Check every element
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (mat[i][j] == 1 && rowCount[i] == 1 && colCount[j] == 1) {
                count++;
            }
        }
    }

    cout << count << endl;

    return 0;
}