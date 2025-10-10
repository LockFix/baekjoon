#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int N; cin >> N;
    string T; cin >> T;

    if(N == 1) {
        cout << 0;
        return 0;
    }

    int dontKnow = 0;
    int rightdKnow = 0;
    int result = 0;
    for(int i = 0; i < N; i++) { 
        if(T[i] == '?') dontKnow++;
    }
    for(int i = 0; i < N / 2; i++) {
        if(T[i] == '?') {
            rightdKnow++;
            if(T[N - i - 1] == '?') {
                result += 26;
                rightdKnow++;
            }
            else result++;
        } else {
            if(T[N - i - 1] != T[i] && T[N - i - 1] != '?') {
                cout << 0;
                return 0;
            }
        }
    }
    result += dontKnow - rightdKnow;
    if(N % 2 == 1) {
        if(T[N / 2] == '?') result--;
    }
    cout << result;
}