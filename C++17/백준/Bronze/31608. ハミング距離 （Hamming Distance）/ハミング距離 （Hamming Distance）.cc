#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    short N;
    string a, b; cin >> N >> a >> b;
    short count = 0;
    for(int i = 0; i < N; i++) {
        if(a[i] != b[i]) count++;
    }
    cout << count;
}