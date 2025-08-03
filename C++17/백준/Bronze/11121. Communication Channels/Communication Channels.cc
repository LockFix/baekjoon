#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int N; cin >> N;
    while(N--) {
        string input, output; cin >> input >> output;
        if(input == output) cout << "OK\n";
        else cout << "ERROR\n";
    }
}