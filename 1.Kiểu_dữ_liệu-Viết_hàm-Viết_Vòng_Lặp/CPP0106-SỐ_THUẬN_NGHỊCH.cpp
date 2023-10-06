//
//  main.cpp
//  CPP0106-SỐ_THUẬN_NGHỊCH
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
        int l = 0;
        int r = s.size();
        while(l < r){
            if(tmp[l] != tmp[r-1] )
                res = 1;
            l++; r--;
        }
        if(res == 1)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}
//qiu
