#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int count = 0;
    string s;
    while(getline(cin, s)) {
        count++;
    }
    cout << count;
}