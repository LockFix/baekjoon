#include <iostream>
#include <algorithm>
#include <sstream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int T; cin >> T;
    string command;
    int n;
    string temp;
    int array[100000];
    while(T--) {
        bool reversed = false;
        cin >> command;
        cin >> n;
        cin >> temp;
        if(n == 0) temp = "";
        else {
            temp = temp.substr(1, temp.size() - 2);
            temp.substr(temp.size() - 1);
        }
        
        stringstream ss(temp);

        for(int i = 0; i < n; i++) {
            getline(ss, temp, ',');
            array[i] = stoi(temp);
        }
        int dcnt = 0;
        for(int i = 0; i < command.size(); i++) {
            if(command[i] == 'D') {
                dcnt++;
            }
        }
        if(dcnt > n) {
            cout << "error\n";
            continue;
        }

        char cmd;
        int index = 0;
        int lastindex = n - 1;
        int cursor = 0;
        for(int i = 0; i < command.size(); i++) {
            cmd = command[i];
            if(cmd == 'R') {
                if(reversed) {
                    cursor = index;
                    reversed = false;
                } else {
                    cursor = lastindex;
                    reversed = true;
                }
            } else {
                if(reversed) {
                    lastindex--;
                    cursor = lastindex;
                } else {
                    index++;
                    cursor = index;
                }
            }
        }

        string s;
        cout << '[';
        if(reversed) {
            for(; lastindex >= index; lastindex--) {
                s.append(to_string(array[lastindex]) + ",");
            }
            s = s.substr(0, s.size() - 1);
            s.append("]");
            cout << s << '\n';
            continue;
        }
        for(; index <= lastindex; index++) {
            s.append(to_string(array[index]) + ",");
        }
        s = s.substr(0, s.size() - 1);
        s.append("]");
        cout << s << '\n';

    }
}