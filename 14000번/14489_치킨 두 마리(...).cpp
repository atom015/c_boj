#include<iostream>
#include<stdio.h>
using namespace std;

int main(void)
{
	int a,b,c;
	scanf("%d %d",&a,&b);
	scanf("%d",&c);
	if (a+b >= c*2){
		printf("%d",(a+b)-(c*2));
	}else{
		printf("%d",a+b);
	}
    return 0;
}

