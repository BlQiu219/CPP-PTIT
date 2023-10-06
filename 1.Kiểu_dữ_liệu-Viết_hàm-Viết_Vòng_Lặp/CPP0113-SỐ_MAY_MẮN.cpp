//
//  main.cpp
//  CPP0113-SỐ_MAY_MẮN
//
//  Created by Nguyễn Thị Hoài Thu on 22/09/2023.
//

#include <iostream>
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
        if(s[l-1] == '6' && s[l-2] == '8')
            cout << 1 << endl;
        else
            cout << 0 << endl;
    }
    return 0;
}
//qiu

