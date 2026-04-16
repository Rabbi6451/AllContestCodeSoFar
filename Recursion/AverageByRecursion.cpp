#include <iostream>
#include <iomanip>
using namespace std;

double calculateSum(int arr[], int n, int index) {
    if (index == n) {
        return 0;
    }
    return arr[index] + calculateSum(arr, n, index + 1);
}
int main() {
    int N;
    cin >> N;
    
    int A[100]; 
    
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    
    double sum = calculateSum(A, N, 0);
    
    double average = sum / N;
    
    cout << fixed << setprecision(6) << average << endl;
    
}