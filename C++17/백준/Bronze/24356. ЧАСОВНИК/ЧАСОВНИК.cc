#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    short t1, m1, t2, m2; cin >> t1 >> m1 >> t2 >> m2;
    short t = t2 - t1;
    if(t1 > t2) t = (24 - t1 + t2) % 24;
    short m = m2 - m1;
    if(m1 > m2) {
        t--;
        m = (60 - m1 + m2) % 60;
    }
    if(t1 == t2 && m1 > m2) {
        t = 0;
        m = 24 * 60 - m1 + m2;
    }
    cout << t * 60 + m << ' ' << (t * 60 + m) / 30;
}