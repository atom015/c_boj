#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;
int n,c;
int li[10];

void func(int ix1,int ix2){
	if (ix2 == c){
		for (int i = 0;i < n;i++){
			if (li[i] >= 1 && count(li,li+9,li[i]) >= 2){
				return;
			}
		}
		for (int i = 0;i < c; i++){
			printf("%d ",li[i]);
		}
		printf("\n");
	}else{
		for (int i = 0; i < n;i++){
			li[ix2] = i+1;
			func(i+1,ix2+1);
		}
	}
}

int main(void){
	scanf("%d %d",&n,&c);
	func(0,0);
    return 0;
}

