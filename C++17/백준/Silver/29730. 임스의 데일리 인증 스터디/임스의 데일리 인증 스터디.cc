    #include <iostream>
    #include <map>
    #include <vector>
    #include <algorithm>

    using namespace std;
    bool compare(pair<string, int> a, pair<string, int> b) {
        if(a.first.size() == b.first.size()) return a.first < b.first;
        return a.first.size() < b.first.size();
    }

    int main() {
        ios::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);

        int N; cin >> N;
        cin.ignore();
        map<string, int> study;
        map<int, int> boj;
        for(int i = 0; i < N; i++) {
            string temp;
            getline(cin, temp);
            if(temp.find("boj.kr/") == 0) {
                temp = temp.substr(7, temp.length() - 7);
                boj[stoi(temp)]++;
            } else study[temp]++;
        }
        vector<pair<string, int>> tmp(study.begin(), study.end());
        sort(tmp.begin(), tmp.end(), compare);
        for(pair<string, int> s : tmp) {
            for(int i = 0; i < s.second; i++) cout << s.first << '\n';
        }
        for(pair<int, int> s : boj) {
            for(int i = 0; i < s.second; i++) cout << "boj.kr/" << s.first << '\n';
        }
    }  