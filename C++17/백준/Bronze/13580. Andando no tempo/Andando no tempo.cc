#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int a, b, c; cin >> a >> b >> c;
    if(a == b || b == c || a == c) cout << "S";
    else if(a > b && a > c && b + c == a) cout << "S";
    else if(b > a && b > c && a + c == b) cout << "S";
    else if(c > a && c > b && a + b == c) cout << "S";
    else cout << "N";
}