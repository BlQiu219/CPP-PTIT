//
//  main.cpp
//  CPP0107-CHẤM_ĐIỂM_TRẮC_NGHIỆM
//
//  Created by Nguyễn Thị Hoài Thu on 22/09/2023.
//

#include <iostream>
#include <iomanip>
#include <math.h>
#include <cstring>
#include <string>
#include <algorithm>

using namespace std;
char frt[20] = {'A','B','B','A','D','C','C','A','B','D','C','C','A','B','D'}, scd[20] = {'A','C','C','A','B','C','D','D','B','B','C','D','D','B','B'};

int main() {
    int test;
    cin >> test;
    while(test--){
        int tp,cnt=0;
        cin >> tp;
        string s;
        for(int i = 0; i < 15; i++)
            cin >> s[i];
        double score = 10;
        if(tp == 101){
            for(int i = 0; i < 15; i++){
                if(s[i] != frt[i])
                    score -= (double)10/15;
            }
        }else if(tp == 102){
            for(int i = 0; i < 15; i++){
                if(s[i] != scd[i])
                    score -= (double)10/15;
            }
        }
        //score=cnt*10/15;
        cout << fixed << setprecision(2) << score << endl;
    }
}
//qiu
