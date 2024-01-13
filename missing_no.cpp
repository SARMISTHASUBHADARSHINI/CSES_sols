#include <iostream>
#include <math.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

int main(){
    const int M = 1e9 + 7;
    const int N = 1e5 + 7;
    long long fact[N];
    fact[0] = fact[1] = 1;
    for (int i = 2; i<= N; i++ ){
        fact[i] = fact[i-1] * i;
    }
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        cout << fact[n] << endl;
    }


}