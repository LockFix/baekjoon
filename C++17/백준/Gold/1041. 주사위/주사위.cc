#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

vector<pair<short, short>> refine(vector<pair<short, short>> number) { //반대 면 제외
    vector<pair<short, short>> temp;
    vector<pair<short, short>> result;
    temp.push_back(number[0]);
    result.push_back(number[0]);
    switch(number[0].second) {
        case 0:
            for(int i = 1; i < 6; i++) {
                if(number[i].second != 5) temp.push_back(number[i]);
            }
            break;
        case 1:
            for(int i = 1; i < 6; i++) {
                if(number[i].second != 4) temp.push_back(number[i]);
            }
            break;
        case 2:
            for(int i = 1; i < 6; i++) {
                if(number[i].second != 3) temp.push_back(number[i]);
            }
            break;
        case 3:
            for(int i = 1; i < 6; i++) {
                if(number[i].second != 2) temp.push_back(number[i]);
            }
            break;
        case 4:
            for(int i = 1; i < 6; i++) {
                if(number[i].second != 1) temp.push_back(number[i]);
            }
            break;
        case 5:
            for(int i = 1; i < 6; i++) {
                if(number[i].second != 0) temp.push_back(number[i]);
            }
            break;
    }
    result.push_back(temp[1]);
    switch(temp[1].second) {
        case 0:
            for(int i = 2; i < 5; i++) {
                if(temp[i].second != 5) result.push_back(temp[i]);
            }
            break;
        case 1:
            for(int i = 2; i < 5; i++) {
                if(temp[i].second != 4) result.push_back(temp[i]);
            }
            break;
        case 2:
            for(int i = 2; i < 5; i++) {
                if(temp[i].second != 3) result.push_back(temp[i]);
            }
            break;
        case 3:
            for(int i = 2; i < 5; i++) {
                if(temp[i].second != 2) result.push_back(temp[i]);
            }
            break;
        case 4:
            for(int i = 2; i < 5; i++) {
                if(temp[i].second != 1) result.push_back(temp[i]);
            }
            break;
        case 5:
            for(int i = 2; i < 5; i++) {
                if(temp[i].second != 0) result.push_back(temp[i]);
            }
            break;
    }
    return result;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long long N; cin >> N;
    vector<pair<short, short>> number(6);
    long long ans = 0;
    for(int i = 0; i < 6; i++) {
        short temp; cin >> temp;
        number[i] = {temp, i};
    }

    sort(number.begin(), number.end());

    if(N == 1) {
        cout << number[0].first + number[1].first + number[2].first + number[3].first + number[4].first;
        return 0;
    }
    number = refine(number);

    ans += (2 * N - 3) * (number[0].first + number[1].first) * 4; //기둥 + 상단
    ans += (N - 2) * number[0].first * 4; //하단
    ans += (number[0].first + number[1].first + number[2].first) * 4; //상단 네 모서리
    ans += (N - 2) * (N - 2) * number[0].first * 5; //중심부
    cout << ans;

    //반대 면 : 0 과 5, 2 와 3, 1과 4
}