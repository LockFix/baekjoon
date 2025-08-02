#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int count = 0; 
    int N; cin >> N;
    string arr[N];
    for(int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    for(int i = 0; i < N; i++) {
        string temp; cin >> temp;
        if(arr[i] == temp) {
            count++;
        }
    }
    cout << count;
}
