import java.util.EmptyStackException;

//먼저 Stack class를 만든다. Obeject를 만들때 Data Type를 명시하도록하고
class Stack<T>{
	//같은 Type을 받는 Node를 선언하도록 한다
	class Node<T>{
		private T data;		//data를 선언한다
		private Node<T> next;	//다음 node도 선언한다.



		//Constructor 에서 해당 Type의 data를 하나 받는다.
		public Node(T data){
			this.data=data; //내부 filed(변수)에  저장한다.
			
		}
   	}
		//member field 하나를 선언한다.
		//Stack은 맨 위에 올라 있는 address만 알고 있으면 된다.
	private Node<T> top;

	//함수를 구현하도록 한다.
	//가장 위 에 있는 node를 가져오는 pop()함수를 구한다.
	public T pop(){
		//top에서 data를 가져오는데,만약에 top null이면
		if(top==null){
			//EmptyStackExcetion() error 를 throw하도록한다
			throw new EmptyStackException();
			

		}

		//아니면 맨 위에 있는 data를 반환하기 전에 다음 address에 있는 node를 top으로 만들어준다
		//data를  backup하고
		T item=top.data;
		//다음 node를 top로 만들어준다
		top=top.next;
		//그리고 data를 반환한다
		return item;	
	}
	//(2)추가하는 push()함수를 만들어 T type의 item을 받아서
	public void push(T item){
		//그 item을 가지고 node을 하나생성한다.
		Node<T>t=new Node<T>(item);
   		//top에 그 node를 위치시킨다
		t.next=top;
		//이제 그 node가 top이 된다.
		top=t;
	}

	//(3)peek()를 만들어 T type의 data를 반환한다
	public T peek(){
		//null check?
		if (top==null){
			throw new EmptyStackException();
		}
		//null이 아니면 현재 top이 가리키고 있는 data를 반환한다
		return top.data;
	}
	//(4) isEmpty()는 top이 null인지 보면된다.
	public boolean isEmpty(){
		return top==null;
	}
}
public class StackTest{
        public static void main(String[] args){
                //Object을 만들어 integer Type의 data를 사용한다.
		Stack<Integer> s=new Stack<Integer>();
		//Stack을 쌓아본다.
		s.push(1);
		s.push(2);
		s.push(3);
		s.push(4);
		s.push(5);
        System.out.println("첫번째pop: "+ s.pop());
		System.out.println(s.pop());
		System.out.println(s.peek());
	}
		 

         
	}


