#include<bits/stdc++.h>

using namespace std;

int freq[26] = {0};
// struct charno{
//     char c;
//     int n;
// };

// bool comparecharno(charno i1, charno i2){
//     return (i1.n < i2.n);
// }
int main(){
    string s;
    cin >> s;
    int m = s.size();
    for (int i = 0; i<m; i++){
        freq[s[i]-'A'] += 1;
    }

    int odds_n= 0;
    int odds_i = -1;
    for (int i =0; i<26; i++){
        if (freq[i] %2 != 0){
            odds_n ++;
            odds_i = i;
        }
    }
    if (odds_n >1){
        cout << "NO SOLUTION";
    }
    else{
        // print left
        for (int i =0; i<26; i++){
            if (i!= odds_i){
            int half = freq[i]/2;
                while(half --){
                    cout<< char(i+'A');
                }
                freq[i] = freq[i]/2;
            }
        }
        // print middle
        if (odds_i != -1){
            while(freq[odds_i]--){
                cout<< char(odds_i+'A');
            }
        }

        // print right
        for (int i =25; i>=0; i--){
            if (i!= odds_i){
            int n_half = freq[i];
                while(n_half --){
                    cout<< char(i+'A');
                }
            }
        }

    }
}