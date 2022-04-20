#include<stdio.h>
#include<stdbool.h>//true false를 위해선언
#define MAX_STACK_SIZE 10 //최대스택사이즈를 10으로 설정

int stack[MAX_STACK_SIZE]; //int자료형으로 10의 크기륽 가지는 스택배열생성
int top=-1;//배열을 -1로 초기화해준다 배열은 0부터 시작이므로

int IsEmpty(){			//스택이 비어있는지 treu false로 알려주는 역할을한다
	if(top<0)
		return true;
	else
		return false;
}
int IsFull(){    //stack이 차있는지 treu false로 알려주는 역할을한다
	if(top>=MAX_STACK_SIZE-1)
		return true;
	else
		return false;
}
void push(int value){  		//스택이 가득찬지 확인하고 스택에 데이터를 저장해준다
	if(IsFull()==true)
		printf("스택이 가득 차있다");
	else
		stack[++top]=value;
}
int pop(){//스택이 비었으면 알려주고 스택의 데이터를 뺀다
	if(IsEmpty()==true)
		printf("스택이 비었다");
	else
		return stack[top--];
}

int main(){


	push(1);
	push(2);
	push(1);
	push(100);
	push(1);
	printf("%d",pop());
	printf("%d",pop());
	printf("%d",pop());
	printf("%d",pop());
	printf("%d",pop());
	
	return 0;
}
