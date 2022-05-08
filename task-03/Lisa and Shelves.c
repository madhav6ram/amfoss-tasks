#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
    long long n, c=0; 
    cin >> n;
    if(n==1){
        cout << 1;
        return 0;
    }
    for(long long i=1; i<=sqrt(n); i++){
        if(n%i==0){
            if(i!=n/i)
                c+=2;
            else
                c++;
        }
    }
    cout << c;
    
    return 0;
}