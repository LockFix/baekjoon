#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    //N : 곡수, L : 노래 길이, C : CD 용량

    int N;
    short L, C;
    cin >> N >> L >> C;

    short quantity = C / (L + 1) + (C % (L + 1) == L ? 1 : 0); //한 cd에 들어가는 곡의 개수
    if(quantity % 13 == 0) quantity--; //13배수 방지

    if(quantity >= N) {
        if(N % 13 == 0) cout << 2;
        else cout << 1;
        return 0;
    }

    cout << N / quantity + (N % quantity == 0 ? 0 : 1) + (N % quantity != 0 && (((quantity - 1) % 13 != 0 && N % quantity + 1 >= quantity)|| ((quantity - 2) % 13 != 0 && N % quantity + 2 >= quantity)) && N % quantity % 13 == 0 ? 1 : 0);
}