#include<iostream>
#include<stdio.h>
#include<utility>
using namespace std;



int main(){
	int x1,y1,x2,y2,x3,y3;
	scanf("%d %d\n%d %d\n%d %d",&x1,&y1,&x2,&y2,&x3,&y3);
	int ret = ((x2-x1)*(y3-y1))-((y2-y1)*(x3-x1));
	printf("%d",ret < 0 ? -1 : (ret > 0 ? 1 : 0));
    return 0;
}
