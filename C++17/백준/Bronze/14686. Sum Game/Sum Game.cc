#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int N; cin >> N;
    int swift[N];
    int semap[N];
    int swsum = 0;
    int sesum = 0;
    for(int i = 0; i < N; i++) {
        cin >> swift[i];
        swsum += swift[i];
    }
    for(int i = 0; i < N; i++) {
        cin >> semap[i];
        sesum += semap[i];
    }
    if(sesum == swsum) {
        cout << N;
        return 0;
    }
    for(int i = N - 1; i >= 0; i--) {
        swsum -= swift[i];
        sesum -= semap[i];
        if(swsum == sesum) {
            cout << i;
            break;
        }
    }
}   