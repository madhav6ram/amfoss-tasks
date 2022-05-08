#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    long long int n, q;
    cin >> n;
    
    long long int arr[n];
    for(long long int i=0; i<n; i++){
        cin >> arr[i];
    }
    
    cin >> q;
    while(q--){
        long long int lc, rc, sum=0;
        cin >> lc >> rc;
        for(long long int i=lc-1; i<rc; i++){
            sum+=arr[i];
        }
        cout << sum << "\n";
    }
    
    return 0;
}