#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int N; cin >> N;
    cin.ignore();
    while(N--) {
        string temp;
        getline(cin, temp);
        short index = temp.find(' ');
        index = temp.find(' ', index + 1);
        cout << temp.substr(index + 1) << ' ' << temp.substr(0, index + 1) << '\n';
        
    }
}