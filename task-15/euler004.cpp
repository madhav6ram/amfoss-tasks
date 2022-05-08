#include <algorithm>
#include <cmath>
#include <string>
#include <iostream>
using namespace std;

int ispalindrome(string str){
    int len = str.length();
    
    for(int i=0; i<len; i++){
        if(len!=6 || str[i]!=str[len-i-1])
            return false;
    }
    
    return true;
}

int main(){
    int t, arr[100000], c=0;
    
    for(int i=100; i<=999; i++){
        for(int j=100; j<=999; j++){
            if(ispalindrome(to_string(i*j))){
                arr[c++]=(i*j);
            }
        }
    }
    sort(arr, arr+977, greater<int>());
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        
        int n;
        cin >> n;
        
        for(int i=0; i<977; i++){
            if(arr[i]<n){
                cout << arr[i] << endl;
                break;
            }
            
        }
    }
    return 0;
}
