#include<stdio.h>
#include<stdbool.h>
#define MAX 10
int front=-1;//큐초기화
int rear=-1;
int queue[MAX];

int IsEmpty(void){
	if(front==rear) //front 와rear 이 같으면 비어있기때문에 true를 출력
		return true;
	else
		return false;
}
int IsFull(void){
	int tmp=(rear+1)%MAX;	//원형 큐에서 rear+1/max로나눈 나머지 값이 front
	if(tmp==front)//와 같으면 큐는 가득차있는 상태이다
		return true;
	else
		return false;
}
void put(int value){//큐에 데이터를 넣어준다 만약 꽉차있다면 꽉차있다고 출력해준다
	if(IsFull())
		printf("큐는 꽉찾다");
	else{
rear=(rear+1)%MAX;
queue[rear]=value;
}
}
int delete(){
	if(IsEmpty())//큐에있는데이터를 삭제해주고 큐가비었다는것을 알려준다
		printf("큐는 비었다");
	else{
		front=(front+1)%MAX;
		return queue[front];
}
}

int main(){
	
	put(4);
	put(4);
	
	printf("%d",delete());
	return 0;
}
	

