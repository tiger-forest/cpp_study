//递推算法
#include <bits/stdc++.h>
using namespace std;

int main() {
    unsigned long long f[10001]={0,1,1};
    printf("%llu ",f[1]);
    printf("%llu ",f[2]);
    for(int i=3;i<=40;i++){
        f[i]=f[i-1]+f[i-2];
        printf("%llu ",f[i]);
    }
    return 0;
}