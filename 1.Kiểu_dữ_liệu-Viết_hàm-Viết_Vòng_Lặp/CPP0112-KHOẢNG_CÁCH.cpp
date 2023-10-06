//
//  main.cpp
//  CPP0112-KHOẢNG_CÁCH
//
//  Created by Nguyễn Thị Hoài Thu on 22/09/2023.
//

#include <iostream>
#include <iomanip>
#include <math.h>
#include <cstring>
#include "string"
#include<algorithm>

using namespace std;

int main() {
    int test;
    cin >> test;
    while(test--){
        double xA, yA, xB, yB;
        cin >> xA >> yA >> xB >> yB;
        double res = sqrt((xA - xB) * (xA - xB) + (yA - yB) * (yA - yB));
        cout << fixed << setprecision(4) << res << endl;
    }
}
//qiu
