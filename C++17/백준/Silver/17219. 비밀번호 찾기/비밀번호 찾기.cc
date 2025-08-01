#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    unordered_map<string, string> manager;
    int N, M; cin >> N >> M;
    while(N--) {
        string site, password; cin >> site >> password;
        manager.insert({site, password});
    }
    while(M--) {
        string site; cin >> site;
        cout << manager[site] << '\n';
    }
}
