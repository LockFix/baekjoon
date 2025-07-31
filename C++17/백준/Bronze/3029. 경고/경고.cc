#include <iostream>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string current, throwingT;
    getline(cin, current);
    int cH, cM, cS, tH, tM, tS;
    cH = stoi(current.substr(0, 2));
    cM = stoi(current.substr(3, 2));
    cS = stoi(current.substr(6, 2));
    getline(cin, throwingT);
    tH = stoi(throwingT.substr(0, 2));
    tM = stoi(throwingT.substr(3, 2));
    tS = stoi(throwingT.substr(6, 2));

    if(cH == tH && cM == tM && cS == tS) {
        cout << "24:00:00";
        return 0;
    }

    if(cS > tS) {
        cS = 60- cS + tS;
        cM++;
    } else cS = tS - cS;
    if(cM > tM) {
        cM = 60 - cM + tM;
        cH++;
    } else cM = tM - cM;
    if(cH > tH) {
        cH = 24 - cH + tH;
    } else cH = tH - cH;
    string temp;
    if(to_string(cH).size() == 1) temp.append("0" + to_string(cH));
    else temp.append(to_string(cH));
    temp.append(":");
    if(to_string(cM).size() == 1) temp.append("0" + to_string(cM));
    else temp.append(to_string(cM));
    temp.append(":");
    if(to_string(cS).size() == 1) temp.append("0" + to_string(cS));
    else temp.append(to_string(cS));
    cout << temp;
}