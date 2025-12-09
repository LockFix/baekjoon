#include <iostream>

using namespace std;

pair<int, int> count(string b) {
    string min = "";
    string max = "";
    for(int i = 0; i < b.length(); i++) {
        if(b[i] == '5') {
            min += '5';
            max += '6';
        }
        else if(b[i] == '6') {
            min += '5';
            max += '6';
        }
        else {
            min += b[i];
            max += b[i];
        }
    }
    return {stoi(min), stoi(max)};
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    string a, b; cin >> a >> b;
    pair<int, int> x = count(a);
    pair<int, int> y = count(b);

    cout << x.first + y.first << ' ' << x.second + y.second;
}