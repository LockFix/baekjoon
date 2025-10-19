#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int a, b, c, d; cin >> a >> b >> c >> d;
    int temp = b - a;
    int tmp = d - c;
    while(temp != tmp) {
        if(temp > tmp) tmp += d;
        else temp += b;
    }
    cout << temp;
}