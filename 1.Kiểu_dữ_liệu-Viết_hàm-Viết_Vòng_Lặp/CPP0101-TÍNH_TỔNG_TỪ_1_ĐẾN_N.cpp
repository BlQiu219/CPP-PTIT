//
//  main.cpp
//  CPP0101-TÍNH_TỔNG_TỪ_1_ĐẾN_N
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
        int n;
        cin >> n;
        cout << (long long)n*(n+1)/2 << "\n";
    }
    return 0;
}
//qiu
