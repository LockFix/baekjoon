#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int N; cin >> N;
    N += 44031;
    string utf;
    utf += 224 | N >> 12;
    utf += 128 | 63 & N >> 6;
    utf += 63 & N | 128;

    cout << utf;
}
