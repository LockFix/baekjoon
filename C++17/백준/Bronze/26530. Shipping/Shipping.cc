#include <iostream>
#include <cmath>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cout.precision(2);
    cout << fixed;

    int n; cin >> n;
    while(n--) {
         int x; cin >> x;
         double sum = 0;
         while(x--) {
            string aban;
            int quantity;
            double price; cin >> aban >> quantity >> price;
            sum += price * quantity;
         }
         cout << '$' << round(sum * 100) / 100 << '\n';
    }
}