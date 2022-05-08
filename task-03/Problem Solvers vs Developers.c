#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
typedef long long int ll;
using namespace std;

int main() {
    ll n, m;
    cin >> n >> m;
    
    if(n>m){
        cout << "NO" << endl;
        return 0;
    }
    
    ll an[n], am[m], counter=0, msum=0;
    
    for(ll i=0; i<n; i++){
        cin >> an[i];    
    }
    for(ll i=0; i<m; i++){
        cin >> am[i];    
    }
    
    sort(an, an+n);
    sort(am, am+m);
    
    for(ll i=0; i<m; i++){
        if(am[i]>an[counter]){
            msum+=am[i];
            counter++;
        }
        if(counter==n){
            cout << "YES" << endl;
            cout << msum << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}