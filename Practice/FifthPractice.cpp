#include <iostream>
using namespace std;

int R, C;
vector<vector<int> > A, B;

void addAndPrint(int i, int j) {
    if (i == R) return; 

    cout << A[i][j] + B[i][j];
    if (j + 1 < C) cout << " ";
    else cout << "\n";

    if (j + 1 < C) {
        addAndPrint(i, j + 1); 
    } else {
        addAndPrint(i + 1, 0);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> R >> C;
    A.assign(R, vector<int>(C));
    B.assign(R, vector<int>(C));

    for (int i = 0; i < R; i++)
        for (int j = 0; j < C; j++)
            cin >> A[i][j];

    for (int i = 0; i < R; i++)
        for (int j = 0; j < C; j++)
            cin >> B[i][j];

    addAndPrint(0, 0);
    return 0;
}
