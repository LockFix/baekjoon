#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string s; cin >> s;
    int arr[10] = {};
    int max = 0;
    int number = 0;
    for(int i = 0; i < s.size(); i++) arr[s[i] - '0']++;
    arr[6] = (arr[6] + arr[9]) / 2 + (arr[6] + arr[9]) % 2;
    arr[9] = 0;
    sort(arr, arr + 10);
    cout << arr[9];
}   