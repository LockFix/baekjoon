#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int N; cin >> N;
    while(N--) {
        string temp; cin >> temp;
        if(temp == "anj") {
            cout << "뭐야;";
            return 0;
        }
    }
    cout << "뭐야?";
}   