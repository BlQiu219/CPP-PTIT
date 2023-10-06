//
//  main.cpp
//  CPP0213-KIỂM_TRA_DÃY_FIBONACCI
//
//  Created by Nguyễn Thị Hoài Thu on 06/10/2023.
//

#include <iostream>
#include <vector>

using namespace std;

long long fibo[1000001];

void f(){
    fibo[0] = 0;
    fibo[1] = 1;
    fibo[2] = 1;
    for(int i = 3; i <= 92; i++)
        fibo[i] = fibo[i-1] + fibo[i-2];
}

int main(int argc, const char * argv[]) {
    int test;
    cin >> test;
    f();
    while(test--){
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++)
            cin >> a[i];
        vector<int> ve;
        for(int i = 0; i < n; i++){
            for(int j = 0; j <= 92; j++){
                if(a[i] == fibo[j]){
                    ve.push_back(a[i]);
                    break;
                    //cout << a[i] << " ";
                }
            }
        }
        for(int x : ve)
            cout << x << " ";
        cout << endl;
    }
    return 0;
}
//qiu
