//递归算法（缓存优化）
#include <bits/stdc++.h>
using namespace std;
unsigned long long f[10001]={0,1,1};
unsigned long long fb(unsigned long long n)
{
    if (f[n])
    {
        return f[n];
    }
    else{
        f[n]=fb(n-1)+fb(n-2);
        return fb(n-1)+fb(n-2);
    }
}

int main()
{
	int a=40;
	for(int i=1;i<=a;i++){
		printf("%llu ", fb(i));
	} 
    return 0;
}