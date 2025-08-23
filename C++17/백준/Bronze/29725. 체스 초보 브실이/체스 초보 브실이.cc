#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int white = 0;
    int black = 0;
    for(int i = 0; i < 8; i++) {
        string s; cin >> s;
        for(int j = 0; j < 8; j++) {
            if(s[j] >= 65 && s[j] <= 90) {
                switch(s[j]) {
                    case 'P':
                        white++;
                        break;
                    case 'N':
                        white += 3;
                        break;
                    case 'B':
                        white += 3;
                        break;
                    case 'R':
                        white += 5;
                        break;
                    case 'Q':
                        white += 9;
                        break;
                }
            } else if(s[j] >= 97 && s[j] <= 122) {
                switch(s[j]) {
                    case 'p':
                        black++;
                        break;
                    case 'n':
                        black += 3;
                        break;
                    case 'b':
                        black += 3;
                        break;
                    case 'r':
                        black += 5;
                        break;
                    case 'q':
                        black += 9;
                        break;
                }
            }
        }
    }
    cout << white - black;
}   