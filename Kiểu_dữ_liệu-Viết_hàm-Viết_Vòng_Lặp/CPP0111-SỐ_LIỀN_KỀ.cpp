//
//  main.cpp
//  CPP0111-SỐ_LIỀN_KỀ
//
//  Created by Nguyễn Thị Hoài Thu on 22/09/2023.
//

#include <iostream>
#include <iomanip>
#include <math.h>
#include <cstring>
#include "string"

using namespace std;


int main(int argc, const char * argv[]) {
    // insert code here...
    int test;
    cin >> test;
    while(test--){
        string s;
        cin >> s;
        int pos = 0;
        int l = s.size();
        for(int i = 0; i < l-1; i++){
            int a = s[i] - '0';
            int b = s[i+1] - '0';
            if(abs(a-b) != 1){
                pos = 1;
            }
        }
        if(pos == 1)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
        
    }
    return 0;
}
//qiu
