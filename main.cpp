#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    long long int cur, prev = 0;
    
    cin >> n;
    vector<int> lBoard(n);
    
    for(int i = 0; i < n; i++){
        cin >> cur;
                
        if(cur != prev){            // we ignore identical scores
            lBoard[i] = cur;
            prev = cur;
        }else{
            i--;
            n--;
            
        }
    }
    lBoard.resize(n);
    
    int levels;
    long long int aScore;
    long long int temp = lBoard.size();
    cin >> levels;
    for(int i = 0; i < levels; i++){
        cin >> aScore;
        if(temp != 0){               // 'temp = 0' means that Alice is on first place in leaderboard, and she can only score highier, so she will be first to the end of 'for' loop
            while(aScore >= lBoard[temp - 1]){
                temp--;
                if(temp == 0)
                    break;
            }
        }
        cout << temp + 1 << endl;
        
        
    }
    
    return 0;
}
