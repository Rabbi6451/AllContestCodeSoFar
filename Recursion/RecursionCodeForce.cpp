#include<iostream>
using namespace std;

void printEvenReverse(vector<long long>& arr, int idx) {
    if (idx < 0) return;

    cout << arr[idx] << " ";

    printEvenReverse(arr, idx - 2);
}

int main() {
    int N;
    cin >> N;
    vector<long long> A(N);

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    int lastEvenIndex = (N % 2 == 0) ? N - 2 : N - 1;

    printEvenReverse(A, lastEvenIndex);
}
