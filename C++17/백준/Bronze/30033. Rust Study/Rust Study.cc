#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    short N; cin >> N;
    short sche[N];
    short count = 0;

    for(int i = 0; i < N; i++) cin >> sche[i];
    for(int i = 0; i < N; i++) {
        short tmp; cin >> tmp;

        if(tmp >= sche[i]) count++;
    }
    cout << count;
}