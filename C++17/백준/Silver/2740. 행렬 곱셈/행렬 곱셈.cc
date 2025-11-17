#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int N, M; cin >> N >> M;
    int A[N][M];
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) cin >> A[i][j];
    }
    int K; cin >> M >> K;
    int B[M][K];
    for(int i = 0; i < M; i++) {
        for(int j = 0; j < K; j++) cin >> B[i][j];
    }
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < K; j++) {
            int temp = 0;
            for(int k = 0; k < M; k++) {
                temp += A[i][k] * B[k][j];
            }
            cout << temp << ' ';
        }
        cout << '\n';
    }
}