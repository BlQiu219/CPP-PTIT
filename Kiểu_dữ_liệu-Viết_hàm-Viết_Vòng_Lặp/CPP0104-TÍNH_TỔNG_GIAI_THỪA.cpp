//
//  main.cpp
//  CPP0104-TÍNH_TỔNG_GIAI_THỪA
//
//  Created by Nguyễn Thị Hoài Thu on 22/09/2023.
//

#include <iostream>
#include <iomanip>

using namespace std;

long long gt(int n){
    long long res = 1;
    for(int i = 1; i <= n; i++)
        res *= i;
    return res;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    int n;
    cin >> n;
    long long res = 0;
    for(int i = 1; i <= n; i++)
        res += gt(i);
    cout << res << endl;
    return 0;
}
//qiu

