#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int N; cin >> N;
    cout << '|';
    for(int i = 0; i < N - 2; i++) cout << '-';
    cout << "|\n";
    for(int i = 0; i < N / 2 - 1; i++) {
        cout << '|';
        for(int j = 0; j < i; j++) cout << ' ';
        cout << '*';
        for(int j = 0; j < N - (i * 2 + 4); j++) cout << ' ';
        cout << '*';
        for(int j = 0; j < i; j++) cout << ' ';
        cout << "|\n";
    }
    cout << '|';
    for(int i = 0; i < (N - 3) / 2; i++) cout << ' ';
    cout << '*';
    for(int i = 0; i < (N - 3) / 2; i++) cout << ' ';
    cout << "|\n";
    for(int i = 1; i <= N - 4; i += 2) {
        cout << '|';
        for(int j = 0; j < (N - (i + 4)) / 2; j++) cout << ' ';
        cout << '*';
        for(int j = 0; j < i; j++) cout << ' ';
        cout << '*';
        for(int j = 0; j < (N - (i + 4)) / 2; j++) cout << ' ';
        cout << "|\n";
    }
    cout << '|';
    for(int i = 0; i < N - 2; i++) cout << '-';
    cout << "|";
}   