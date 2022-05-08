#include <cmath>
#include <iostream>
using namespace std;

int main(){
    long long int t;
    cin >> t;
    for(long long int a = 0; a < t; a++){
        long long int n, sum=0;
        cin >> n;
        n-=1;
        long long int T = floor(n/3);
        long long int F = floor(n/5);
        long long int TF = floor(n/15);
        
        sum += T*(6+((T-1)*3))/2;
        sum += F*(10+((F-1)*5))/2;
        sum -= TF*(30+((TF-1)*15))/2;
        
        cout << sum << "\n";
    }
    return 0;
}
