#include <iostream>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    double n, b, m;
    while(cin >> n >> b >> m) {
        b /= 100;
        int day = 0;
        while(n < m) {
            n += n * b;
            day++;
        }
        cout << day << '\n';
    }
}

