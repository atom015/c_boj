#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
	int h_point,p,point, a[51];
	for (int i = 0; i < 50; i++){
		scanf("%d ", &p);
		a[i] = p;
	}
	scanf("\n%d",&h_point);
	for (int i = 0; i < 50; i++){
		if (a[i] == h_point){
			point = i+1;
			break;
		}
	}
	if (1 <= point && point <= 5){
		printf("A+");	
	}
	else if (6 <= point && point <= 15){
		printf("A0");
	}
	else if (16 <= point && point <= 30){
		printf("B+");
	}
	else if (31 <= point && point <= 35){
		printf("B0");
	}
	else if (36 <= point && point <= 45){
		printf("C+");
	}
	else if (46 <= point && point <= 48){
		printf("C0");
	}else{
		printf("F");
	}
}
