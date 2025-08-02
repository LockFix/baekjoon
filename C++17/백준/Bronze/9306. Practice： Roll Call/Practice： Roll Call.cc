#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int N; cin >> N;
    int index = 1;
    while(N--) {
        string last, first; cin >> first >> last;
        cout << "Case " << index << ": " << last << ", " << first << '\n';
        index++;
    }
}
