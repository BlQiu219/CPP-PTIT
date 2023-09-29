//
//  main.cpp
//  CPP0115-PHÂN_TÍCH_THỪA_SỐ_NGUYÊN_TỐ-1
//
//  Created by Nguyễn Thị Hoài Thu on 27/09/2023.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int test;
    cin >> test;
    while(test--){
        int n;
        cin >> n;
        for(int j = 2; j <= sqrt(n); j++){
            if(n % j == 0){
                int cnt = 0;
                while(n % j == 0){
                    cnt++;
                    n/=j;
                }
                cout<< j << " "<<  cnt << " ";
            }
        }
        if(n > 1)
            cout << n << " " << 1;
        cout << endl;
    }
    return 0;
}
//qiu
