#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<long long> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    long long sum = 0;
    for (int i = N - M; i < N; i++) {  
        sum += A[i];
    }

    cout << sum << endl;
    return 0;
}
