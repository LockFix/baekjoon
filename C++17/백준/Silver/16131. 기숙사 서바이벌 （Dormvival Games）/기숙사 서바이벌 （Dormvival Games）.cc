#include <iostream>
#include <cmath>
using namespace std;

/*
    학번 순으로 상벌점이 주어짐
*/

bool change(int a, int b) { //방을 바꾸어야하는지 반환하는 함수
    if((a >= 0 && b >= 0) && (b >= a + 2)) return true; //교환 ㄱㄱ
    else if(b >= 0 && a < 0) return true; //교환 ㄱㄱ
    else if((a < 0 && b < 0) && b >= a + 4) return true; //교환 ㄱㄱ
    return false; //a >= 0 && b < 0 교환 ㄴㄴ
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int N, A, B, M; cin >> N >> A >> B >> M;
    int sequence[N]; //방 순서
    for(int i = 0; i < N; i++) sequence[i] = i;
    int count = 0;
    int streak = 0;
    int maxStreak = 0;
    A--;
    if(A <= B) {
        count = 1;
        streak = 1;
    }
    M--;
    int joe = A; //조군 위치
    int hong = 0; //홍군 위치
    while(M--) {
        int scores[N]; //점수
        for(int i = 0; i < N; i++) cin >> scores[i]; //상점 반영
        for(int i = 0; i < N; i++) { //벌점 반영
            int temp; cin >> temp;
            scores[i] -= temp;
        }
        for(int i = 1; i < N; i++) {
            int superior = i - 1; //더 좋은 방
            bool permission = change(scores[sequence[superior]], scores[sequence[i]]); //교환해야 됨?
            if(permission) { //교환 ㄱㄱ
                int temp = sequence[superior];
                sequence[superior] = sequence[i]; //나쁜 방 --> 좋은 방
                sequence[i] = temp; //좋은 방 --> 나쁜 방

                scores[sequence[superior]] -= 2;
                scores[sequence[i]] += 2;

                if(A == sequence[superior]) joe = superior; //조군 위치 갱신
                else if(A == sequence[i]) joe = i; //조군 위치 갱신
                if(0 == sequence[superior]) hong = superior; //홍군 위치 갱신
                else if(0 == sequence[i]) hong = i; //홍군 위치 갱신
            }
        }
        if(abs(joe - hong) <= B) {
            count++;
            streak++;
        } else {
            if(maxStreak < streak) maxStreak = streak;
            streak = 0;
        }
    }
    if(maxStreak < streak) maxStreak = streak;
    cout << count << ' ' << maxStreak;
}   