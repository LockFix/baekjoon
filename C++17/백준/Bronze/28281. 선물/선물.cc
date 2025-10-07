#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int N, X; cin >> N >> X;
    N -= 1;
    short pre; cin >> pre;
    int min = INT32_MAX;
    while(N--) {
        short tmp; cin >> tmp;
        if(min > X * (pre + tmp)) min = X * (pre + tmp);
        pre = tmp;
    }
    cout << min;
}