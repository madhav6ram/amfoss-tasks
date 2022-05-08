#include <cmath>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n, x=2, c1=0, c2=0, divided=0, ans=1, arr[1000];
        cin >> n;
        
        if(n==1){
            cout << 1 << endl;
            continue;
        }
        
        for(int i=0; i<=n-2; i++){
            arr[i]=i+2;
        }
        
        while(1){
            for(int i=0; i<=n-2; i++){
                if(arr[i]%x==0){
                    if(arr[i]/x==1){
                        c2++;
                    }
                    arr[i]/=x;
                    divided++;
                }
                if(arr[i]==1)
                    c1++;
            }
            //multiply only 1 time
            if(c2>=1){
                ans*=x;
            }
            
            x=divided?x:x+1;
            
            //exit
            if(c1==n-1){
                break;
            }
            
            divided=0, c1=0, c2=0;
        }
        cout << ans << endl;
    }
    return 0;
}
