#include <iostream>
#include <stdio.h>
#include <stack>
#include <string>
#include <vector>
using namespace std;

int checking(char s){
	if (s == '*' || s == '/') return 2;
	else if(s == '+' || s == '-') return 1;
	else return 0;
}

int main(void){
	string s;
	cin >> s;
	stack<char> st;
	for (int i = 0;i < s.length();i++){
		char &c = s[i];
		if ('A' <= c && c <= 'Z'){
			printf("%c",c);
		}else if (c == '('){
			st.push('(');
		}else if (c == ')'){
			while (st.top() != '('){
				printf("%c",st.top());
				st.pop();
			}
			st.pop();
		}else{
			while (!st.empty() && (checking(st.top()) >= checking(c))){
				printf("%c",st.top());
				st.pop();
			}
			st.push(c);
		}
	}
	while (!st.empty()){
		printf("%c",st.top());
		st.pop();
	}
    return 0;
}

