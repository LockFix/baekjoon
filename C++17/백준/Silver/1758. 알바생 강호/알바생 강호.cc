#include <iostream>
#include <algorithm>
using namespace std;
bool compare(int a, int b) {
    return a > b;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int N; cin >> N;
    int array[N];
    for(int i = 0; i < N; i++) {
        cin >> array[i];
    }
    sort(array, array + N, compare);
    long long result = 0;
    for(int i = 0; i < N; i++) {
        if(array[i] - i <= 0) break;
        result += array[i] - i;
    }
    cout << result;
}
