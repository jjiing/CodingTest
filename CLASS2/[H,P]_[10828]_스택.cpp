#include <iostream>
#include <string>

using namespace std;
class Node
{
public:
	int value;
	Node* next ;
	Node* prev ;
};

class Stack
{
private :
	Node* head=nullptr ;
	Node* tail = nullptr;
	int size = 0;
public :
	void Push(int value)
	{
		Node* currentNode = new Node;
		currentNode->value = value;
		size++;

		if (head == nullptr)
		{			
			head = currentNode;
			tail = currentNode;
		}
		else
		{
			tail->next = currentNode;
			currentNode->prev = tail;
			tail = currentNode;

		}
	}
	int Pop()
	{
		int value;
		
		if (GetSize() == 1)
		{
			value = tail->value;
			delete tail;
			head = nullptr;
			tail = nullptr;
			size--;
		}
		
		else if(GetSize()>1)
		{
			Node* prevTail = new Node;
			value = tail->value;
			prevTail = tail->prev;
			delete tail;
			tail = prevTail;
			size--;
		}
		else if (GetSize() <= 0)
		{
		value = -1;
		}
		
		return value;
	}
	int GetSize()
	{
		return size;
	}
	bool Empty()
	{
		if (head == nullptr)
		{
			return 1;
		}
		else
			return 0;
	}
	int Top()
	{
		if (head != nullptr)
		{
			return tail->value;
		}
		else
			return -1;
	}
	
};

int main() 
{
	Stack stack;

	int N;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		string op;
		cin >> op;
		if (op == "push") 
		{
			int value;
			cin >> value;
			stack.Push(value);
		}
		else if (op == "pop")
		{
			cout << stack.Pop() << endl;
		}
		else if (op == "size")
		{
			cout << stack.GetSize() << endl;
		}
		else if (op == "empty")
		{
			cout << stack.Empty() << endl;
		}
		else if (op == "top")
		{
			cout << stack.Top() << endl;
		}
	}
}



//문제주소
//https://www.acmicpc.net/problem/10828

//문제리뷰
//스택에 데이터가 없을 때 pop에 -1 처리를 해주는 부분에서 애먹었다.
//예외처리를 계속 한다고 했는데 뜻대로 실행이 되지 않다가, size를 적절히 배치하여 적절하게 예외처리를 할 수 있었다.
//또한 예제는 계속 풀리는데 틀린다고 뜨는 부분은 head와 tail 선언시 nullptr로 초기화를 해줌으로써 해결했다.
