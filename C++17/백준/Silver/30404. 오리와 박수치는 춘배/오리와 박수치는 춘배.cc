#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, k; cin >> n >> k;

    int time[n];
    int clap = 0;
    for(int i = 0; i < n; i++) cin >> time[i];

    for(int i = 0; i < n;) {
        int j = i;

        clap++;
        while(j < n && k >= time[j] - time[i]) j++;
        i = j;
    }
    cout << clap;
}