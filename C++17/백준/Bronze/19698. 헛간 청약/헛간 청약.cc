#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int N, W, H, L; cin >> N >> W >> H >> L;
    int result = (W / L) * (H / L);
    if(result > N) result = N;
    cout << result;
}   