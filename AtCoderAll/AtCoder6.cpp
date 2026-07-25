#include<iostream>
#include<vector>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    
    vector<int> max_size(M + 1, -1);
    
    for (int i = 0; i < N; i++) {
        int C, S;
        cin >> C >> S;
        max_size[C] = max(max_size[C], S);
    }
    
    for (int k = 1; k <= M; k++) {
        cout << max_size[k] << (k == M ? '\n' : ' ');
    }
    
}
