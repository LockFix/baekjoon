#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    short n; cin >> n;
    
    unordered_map<char, char> pre;
    while(n--) {
        char a, b; string trash; cin >> a >> trash >> b;

        pre[a] = b;
    }
    short m; cin >> m;
    while(m--) {
        char a, b; string trash; cin >> a >> trash >> b;

        while(a != b && pre.find(a) != pre.end()) a = pre[a];
        if(a == b) cout << "T\n";
        else cout << "F\n";
    }
}