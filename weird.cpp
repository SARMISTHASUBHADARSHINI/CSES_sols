#include <iostream>
#include <math.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


using namespace std;
int main(){
    long long n;
    cin >> n;
    cout << n << " ";
    while(n!= 1){
        if (n%2 ==0){
            n = n/2;
        }
        else{
            n = 3*n+1;
        }
        cout << n << " ";
    }
}