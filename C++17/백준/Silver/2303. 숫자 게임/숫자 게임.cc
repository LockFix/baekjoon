#include <iostream>
#include <cmath>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int N; cin >> N;
    int n = N;
    int person[N];
    int index = 0;
    while(n--) {
        int cards[5];
        int sum = 0;
        int max = -1;
        for(int i = 0; i < 5; i++){
            int card; cin >> card;
            cards[i] = card;
            sum += card;
        }
        for(int i = 0; i < 5; i++) {
            for(int j = 0; j < 5; j++) {
                if(i == j) continue;
                for(int k = 0; k < 5; k++) {
                    if(i == k || j == k) continue;
                    int temp = cards[i] + cards[j] + cards[k];
                    if(temp % 10 > max) max = temp % 10;
                }
            }
        }
        person[index] = max;
        index++;
    }
    int result = 0;
    int max = -1;
    for(int i = 0; i < N; i++) {
        if(max <= person[i]) {
            max = person[i];
            result = i + 1;
        }
    }
    cout << result;
}