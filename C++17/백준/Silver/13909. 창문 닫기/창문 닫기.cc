#include <iostream>
using namespace std;

/* 
    N보다 작거나 같은 제곱수 번째 창문만이 열려있음
*/

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int N; cin >> N;
    int count = 0;
    int plus = 1;
    for(int i = 1; i <= N; i += plus) {
        count++;
        plus += 2;
    }
    cout << count;
}   