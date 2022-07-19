//递归算法
#include <bits/stdc++.h>
using namespace std;
unsigned long long fb(unsigned long long n)
{
    if(n==1||n==2){return 1;}
    else return fb(n-1)+fb(n-2);
}

int main()
{
    int a=40;
	for(int i=1;i<=a;i++){
		printf("%llu ", fb(i));
	} 
    return 0;
}