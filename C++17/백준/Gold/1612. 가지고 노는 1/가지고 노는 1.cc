#include <iostream>

using namespace std;

//나머지 연산의 성질

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int N; cin >> N;
    bool check[1000000] = {false, };
    
    int cnt = 0;
    int a = 0;
    while(!check[a]) {
        check[a] = true;
        a *= 10;
        a += 1;
        a %= N;
        cnt++;
        if(a == 0) {
            cout << cnt;
            return 0;
        }
    }
    cout << -1;
}