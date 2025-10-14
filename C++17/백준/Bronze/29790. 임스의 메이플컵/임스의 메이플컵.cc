#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int N; short U, L; cin >> N >> U >> L;
    if(N >= 1000) {
        if(U >= 8000 || L >= 260) cout << "Very Good";
        else cout << "Good";
    } else cout << "Bad";
}