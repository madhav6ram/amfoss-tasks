#include <cmath>
#include <iostream>
typedef long long int ll;
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        ll n, max=0;
        cin >> n;
        int flag=1;
        for(ll i=2; i<=sqrt(n); i++){
            while(n%i==0){
                n=n/i;
                max=i;
                if(n==i){
                    cout << n << endl;
                    flag--;
                    break;
                }
            }
        }
        if(flag){
            cout << n << endl;
        }
    }
    return 0;
}
