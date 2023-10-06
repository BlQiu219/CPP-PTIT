//
//  main.cpp
//  CPP0105-SỐ_LỘC_PHÁT
//
//  Created by Nguyễn Thị Hoài Thu on 22/09/2023.
//

#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int test;
    cin >> test;
    while(test--){
        string s;
        cin >> s;
        char *tmp = new char (s.size() + 1);
        for(int i = 0; i < s.size(); i++)
            tmp[i] = s[i];
        int res = 0;
        for(int i = 0; i < s.size(); i++){
            int temp = tmp[i] - '0';
            if(!(temp == 8 || temp == 0 || temp == 6))
                res = 1;
        }
        if(res == 1)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}
//qiu
