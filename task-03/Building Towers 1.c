#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n;
    
    long long int arr[n], count=1, num=1, max=0;
    for(int i=0; i<n; i++)
        cin >> arr[i];
    
    sort(arr, arr+n);
    
    for(int i=0; i<n-1; i++){
        if(arr[i]==arr[i+1]){
            count++;
        }else{
            if(count>max)
                max=count;
            num++;
            count=1;
        }
        
    }
    cout << max << " " << num <<endl;
    
    return 0;
}
