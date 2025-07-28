#include <iostream>
#include <cmath>
using namespace std;

/*
2차 정사각행렬이 될 때까지 행렬을 4개로 쪼갬(r행 c열이 포함되는 행렬을 선택)
^^^반복
*/

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int N, r, c; cin >> N >> r >> c;
    int arr[2][2] = {{0, 1},
                     {2, 3}};
    int x = 0;
    int n = (int)pow(2, N);
    while(n != 2) {
        x += (int)pow(n / 2, 2) * 2 * (r / (n / 2)) + (int)pow(n / 2, 2) * (c / (n / 2));
        r = r % (n / 2);
        c = c % (n / 2);
        n /= 2;
    }
    cout << x + arr[r][c];
}