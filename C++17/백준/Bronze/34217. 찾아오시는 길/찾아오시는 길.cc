#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int A, B, C, D; cin >> A >> B >> C >> D;
    if(A + C >  B + D) cout << "Yongdap";
    else if(A + C < B + D) cout << "Hanyang Univ.";
    else cout << "Either";
}