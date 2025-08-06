#include <iostream>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int coord[3][2];
    for(int i = 0; i < 3; i++) {
        cin >> coord[i][0] >> coord[i][1];
    }
    if(coord[0][0] == coord[1][0]) {
        if(coord[2][0] == coord[0][0]) cout << "WHERE IS MY CHICKEN?";
        else cout << "WINNER WINNER CHICKEN DINNER!";
    } else {
        double slope[2] = {coord[0][1] - coord[1][1], coord[0][0] - coord[1][0]};
        double yInter = coord[0][1] - (slope[0] * coord[0][0] / slope[1]);
        if(coord[2][1] == slope[0] * coord[2][0] / slope[1] + yInter) cout << "WHERE IS MY CHICKEN?";
        else cout << "WINNER WINNER CHICKEN DINNER!";
    }
}