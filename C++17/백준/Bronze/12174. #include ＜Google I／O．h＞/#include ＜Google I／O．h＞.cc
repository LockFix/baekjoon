#include <iostream>
#include <cmath>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int T; cin >> T;
    int num = 1;
    while(T--) {
        int B; cin >> B;
        string io; cin >> io;
        string result;
        int index = 0;
        while(B--) {
            int c = 0;
            string temp = io.substr(index, 8);
            for(int i = 0; i < temp.size(); i++) {
                if(temp[temp.size() - i - 1] == 'I') c += pow(2, i);
            }
            result += (char) c;
            index += 8;
        }
        cout << "Case #" << num << ": " << result << '\n';
        num++;
    }
}