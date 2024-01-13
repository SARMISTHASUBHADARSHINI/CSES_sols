// #include <iostream>
// #include <math.h>
// #include <math.h>
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
#include <bits/stdc++.h>

using namespace std;

int main(){
    unordered_map<char, int> m;
    // m['A'] = 0;
    // m['C'] = 0;
    // m['G'] = 0;
    // m['T'] = 0;
    string s;
    cin >> s;
    char old = s[0];
    int p1 = 1;
    int p2 = 0;

    for( int i = 1; i < s.size(); i++){
        if(s[i] == old){
            p1 = p1+1;
        }
        else{
            p2 = max(p2,p1);
            p1 = 1;
        }
        old = s[i];
    }
    p2 = max(p2,p1);
    
    // for (auto x : m) {
    //     p = max(p,x.second);
    // }
    cout << p2;
        
} 