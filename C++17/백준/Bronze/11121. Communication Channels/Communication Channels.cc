#include <iostream>
using namespace std;

int main(){
    int N; cin >> N;
    while(N--) {
        string input, output; cin >> input >> output;
        if(input == output) cout << "OK\n";
        else cout << "ERROR\n";
    }
}