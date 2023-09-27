//
//  main.cpp
//  CPP0103-TÍNH_TỔNG_PHÂN_THỨC_1
//
//  Created by Nguyễn Thị Hoài Thu on 22/09/2023.
//

#include <iostream>
#include <iomanip>

using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    int n;
    cin >> n;
    double sum = 0;
    for(int i = 2; i <= n; i++)
        sum += (double)1/i;
    cout << fixed << setprecision(4) << (double)sum + 1 << endl;

    return 0;
}
//qiu
