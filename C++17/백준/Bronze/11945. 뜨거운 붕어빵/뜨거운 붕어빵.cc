#include <iostream>
using namespace std;

int main(){
    int N, M; cin >> N >> M;
    while(N--) {
        string temp; cin >> temp;
        for(int i = M - 1; i >= 0; i--) {
            cout << temp[i];
        }
        cout << '\n';
    }
}