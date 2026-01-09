#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int N; cin >> N;
    int sum = 0;
    while(N--) {
        string s; cin >> s;

        if(s == "Poblano") sum += 1500;
        else if(s == "Mirasol") sum += 6000;
        else if(s == "Serrano") sum += 15500;
        else if(s == "Cayenne") sum += 40000;
        else if(s == "Thai") sum += 75000;
        else sum += 125000;
    }
    cout << sum;
}