#include <iostream>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int a, b, c, d; cin >> a >> b >> c >> d;
    int arr[3]; for(int i = 0; i < 3; i++) cin >> arr[i];
    for(int i = 0; i < 3; i++) {
        int count = 0;
        bool attacking = true;
        int temp = a;
        while(temp < arr[i]) {
            if(attacking) temp += b;
            else temp += a;
            attacking = !attacking;
        }
        if(attacking) count = 1;
        attacking = true;
        temp = c;
        while(temp < arr[i]) {
            if(attacking) temp += d;
            else temp += c;
            attacking = !attacking;
        }
        if(attacking) count++;
        cout << count << '\n';
    }
}

