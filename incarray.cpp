#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    long long old = 0;
    long long sum = 0;
    while(t--){
        long long n;
        cin >> n;
        long long dif = n - old;

        if (dif <= 0){
            sum = sum - dif;
            old = n - dif;
        }
        else{
            old = n;
        }
        
    }
    cout << sum;
} 