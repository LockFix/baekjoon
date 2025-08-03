#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int s, t, d; cin >> s >> t >> d;
    cout << (d / (s * 2) * t);
}