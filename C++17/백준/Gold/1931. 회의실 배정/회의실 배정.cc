#include <iostream>
#include <algorithm>
using namespace std;

/* 

회의 종료시간을 기준으로 오름차순 정렬.
첫번째로 종료시간이 가장 이른 것을 선택.
전 회의의 종료시간과 같거나 큰 것의 시작시간 중 가장 이른 시작시간의 회의 선택.
^^^반복

*/

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int N; cin >> N;
    pair<int, int> meeting[N];
    int result = 1;
    for(int i = 0; i < N; i++) {
        int second, first; cin >> first >> second;
        meeting[i] = {second, first}; //{종료시간, 시작시간}
    }
    sort(meeting, meeting + N); //종료시간을 기준으로 오름차순 정렬

    pair<int, int> previous = meeting[0]; //이전 회의
    for(int i = 1; i < N; i++) {
        if(meeting[i].second >= previous.first) {
            previous = meeting[i];
            result++;
        }
    }
    cout << result;
}