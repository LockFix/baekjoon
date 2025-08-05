#include <iostream>
using namespace std;

long long gcd(long long a, long long b) {
    if(b == 0) return a;
    else return gcd(b, a % b);
}
long long lcm(long long a, long long b) {
    return a * b / gcd(a, b);
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long long N; cin >> N;
    long long arr[N][2];

    for(long long i = 0; i < N; i++) {
        cin >> arr[i][0];
        cin >> arr[i][1];
    } 
    long long denominator = arr[0][1];
    for(long long i = 1; i < N; i++) {
        denominator = lcm(denominator, arr[i][1]);
    }
    for(long long i = 0; i < N; i++) {
        arr[i][0] *= denominator / arr[i][1];
    }
    long long numerator = arr[0][0];
    for(long long i = 1; i < N; i++) {
        numerator = gcd(numerator, arr[i][0]);
    }
    
    long long g = gcd(denominator, numerator);
    denominator /= g;
    numerator /= g;
    cout << numerator << " " << denominator;
}

