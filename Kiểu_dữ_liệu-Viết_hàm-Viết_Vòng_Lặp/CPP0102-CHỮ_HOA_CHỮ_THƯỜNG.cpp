//
//  main.cpp
//  CPP0102-CHỮ_HOA_CHỮ_THƯỜNG
//
//  Created by Nguyễn Thị Hoài Thu on 22/09/2023.
//

#include <iostream>

using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    int test;
    cin >> test;
    while(test--){
        char c;
        cin >> c;
        int chck = c -'0';
        //cout << chck ;
        char res_c;
        if(chck >= 17 && chck <= 42)
            res_c = tolower(c);
        else
            res_c = toupper(c);
        cout  << res_c << endl;
    }
    return 0;
}
//qiu
