//
//  main.cpp
//  CPP0110-MÃ_SỐ_QUỐC_GIA
//
//  Created by Nguyễn Thị Hoài Thu on 22/09/2023.
//

#include <iostream>
#include <iomanip>
#include <math.h>
#include <cstring>

using namespace std;


int main(int argc, const char * argv[]) {
    // insert code here...
    int test;
    cin >> test;
    while(test--){
        string s;
        cin >> s;
        int pos;
        int l = s.size();
        for(int i = 0; i < l-2; i++)
            if(s[i] == '0' && s[i+1] == '8' && s[i+2] == '4'){
               pos = i;
               break;
        }
        for(int i = 0; i < l; i++){
            if(pos == i || pos == i-1 || pos == i-2)
                continue;
            cout << s[i];
         }
         cout << endl;
    }
    return 0;
}
//qiu
