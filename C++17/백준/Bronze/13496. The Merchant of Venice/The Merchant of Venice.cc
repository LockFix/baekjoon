#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int N; cin >> N;
    int index = 1;
    while(N--) {
        int n, s, d; cin >> n >> s >> d;
        int sum = 0;
        while(n--) {
            int di, vi; cin >> di >> vi;
            if(s * d >= di) sum += vi;
        }
        cout << "Data Set " << index << ":\n" << sum << "\n\n";
        index++;
    }
}