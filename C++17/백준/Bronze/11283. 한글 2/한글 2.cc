#include <iostream>
using namespace std;

int main(){
    string s; cin >> s;

    int N = (s[0] & 15) * 4096;
    N += (s[1] >> 2 & 15) * 256;
    N += (s[1] & 3) * 64;
    N += (s[2] >> 4 & 3) * 16;
    N += (s[2] & 15);
    
    N -= 44031;
    
    cout << N;
    return 0;
}