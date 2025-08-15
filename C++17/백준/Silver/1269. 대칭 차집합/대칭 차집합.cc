#include <iostream>
#include <algorithm>
#include <set>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int nA, nB; cin >> nA >> nB;
    set<int> A;
    set<int> B;
    vector<int> result(nA + nB);
    for(int i = 0; i < nA; i++) {
        int temp; cin >> temp;
        A.insert(temp);
    }
    for(int i = 0; i < nB; i++) {
        int temp; cin >> temp;
        B.insert(temp);
    }
    auto it = set_symmetric_difference(A.begin(), A.end(), B.begin(), B.end(), result.begin());
    result.erase(it, result.end());
    cout << result.size();
}   