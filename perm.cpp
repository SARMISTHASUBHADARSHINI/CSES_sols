#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    if (t ==2 || t ==3){
        cout << "NO SOLUTION";

    }
    else{
    const int M = 1e6;
    int arr[M];
    int l = t/2;
    int r = t/2;
    arr[l] = t;
    int n = 0;
    while (t!= n && l >= 0 && r < t){
        n = n + 1;
        l = l - 1;
        arr[l] = n;
        n += 1;
        r = r + 1;
        arr[r] = n;

    }
    for (int i = 0; i< (t); i++){
        cout << arr[i] << " ";
    }
    }
}