#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    short N; cin >> N;
    if(N == 1) {
        cout << '*';
        return 0;
    }
    for(int i = 0; i < (N - 1) * 4 + 1; i++) cout << '*';
    cout << '\n';
    for(int i = N - 1; i >= 1; i--) {
        int range = (((N - 1) * 4 + 1) - ((i - 1) * 4 + 1)) / 4;

        for(int j = 0; j < range; j++) cout << "* ";
        for(int j = 0; j < (i - 1) * 4 + 1; j++) cout << ' ';
        for(int j = 0; j < range; j++) cout << " *";
        cout << '\n';
        for(int j = 0; j < range; j++) cout << "* ";
        for(int j = 0; j < (i - 1) * 4 + 1; j++) cout << '*';
        for(int j = 0; j < range; j++) cout << " *";
        cout << '\n';
    }
    for(int i = 0; i < N - 1; i++) cout << "* ";
    cout << ' ';
    for(int i = 0; i < N - 1; i++) cout << " *";
    cout << '\n';
    for(int i = 2; i < N; i++) {
        int range = (((N - 1) * 4 + 1) - ((i - 1) * 4 + 1)) / 4;

        for(int j = 0; j < range; j++) cout << "* ";
        for(int j = 0; j < (i - 1) * 4 + 1; j++) cout << '*';
        for(int j = 0; j < range; j++) cout << " *";
        cout << '\n';
        for(int j = 0; j < range; j++) cout << "* ";
        for(int j = 0; j < (i - 1) * 4 + 1; j++) cout << ' ';
        for(int j = 0; j < range; j++) cout << " *";
        cout << '\n';
    }
    for(int i = 0; i < (N - 1) * 4 + 1; i++) cout << '*';
}