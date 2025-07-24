#include <iostream>
#include <sstream>
using namespace std;
int main() {
    int T;
    cin >> T;
    stringstream st;
    for(int i = 0; i < T; i++) {
        int N;
        int D;

        int count = 0;

        cin >> N >> D;
        for(int j = 0; j < N; j++) {
            int v;
            int f;
            int c;
            cin >> v >> f >> c;
            
            if((double) D / v * c <= f) count++;
        }
        st << count << "\n";
    }
    cout << st.str();
}