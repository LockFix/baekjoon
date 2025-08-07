#include <iostream>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int N; cin >> N;
    while(N--) {
        string name, study, birth; cin >> name >> study >> birth;
        int courses; cin >> courses;
        study = study.substr(0, 4);
        if(2010 <= stoi(study)) {
            cout << name << " eligible\n";
            continue;
        }
        birth = birth.substr(0, 4);
        if(1991 <= stoi(birth)) {
            cout << name << " eligible\n";
            continue;
        }
        if(courses >= 41) cout << name << " ineligible\n";
        else cout << name << " coach petitions\n";
    }
}