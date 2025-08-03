#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    const double litara = 3.785411784;
    const double kilometara = 1.609344;

    double g; cin >> g;

    g = 100 / (g * kilometara / litara);
    
    cout << fixed << setprecision(6);
    cout << g;
}