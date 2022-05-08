#include <cmath>
#include <iostream>
typedef long long int ll;
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        long n;
        cin >> n;
        
        if(n<=2){
            cout << 2 << endl;
            continue;
        }
        if(n<=10){
            cout << 10 << endl;
            continue;
        }
        
        ll a=2, b=8, efib, efsum=2; 
        while(b<=n){
            efib=(4*(b)+(a));
            a=b;
            b=efib;
            efsum+=a;
        }
        cout << efsum << endl;
    }
    return 0;
}
