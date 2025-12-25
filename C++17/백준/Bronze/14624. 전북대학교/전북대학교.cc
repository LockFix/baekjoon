#include <iostream>


using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    short N; cin >> N;

    if(N % 2 == 0) {
        cout << "I LOVE CBNU";
        return 0;
    }
    for(int i = 0; i < N; i++) cout << '*';
    cout << '\n';
    for(int i = 0; i < N / 2; i++) cout << ' ';
    cout << "*\n";
    for(int i = 0, c = 1; c <= N - 2; i++, c += 2) {
        for(int j = 0; j < (N - c) / 2 - 1; j++) cout << ' ';
        cout << '*';
        for(int j = 0; j < c; j++) cout << ' ';
        cout << "*\n";
    }
}