#include <iostream>
#include <list>

using namespace std;

// int main(void) & int main() 차이는 없음.

// Vector : 배열로 만들어진 컨테이너
// 단점 : 복사하고 삭제한 다음 값을 옮김.

// List : 포인터로 이루어진 연결리스트

// 연산은 후연산 보단 전연산이 좋다.
// 배열은 2의 n 제곱으로 만드는게 좋다.

typedef struct List_Node
{
	int Value;
	List_Node* Nextptr;

	List_Node() //디폴트 생성자
	{
		Value = 0;
		Nextptr = nullptr;
	};


}Node;

Node *pList = new Node();

Node* Back(Node* node)
{
	if (node->Nextptr != nullptr)
		Back(node->Nextptr);
	else
		return node;
}

void push_back(int value)
{
	Node* node = new Node();
	node->Value = value;

	Back(pList)->Nextptr = node;
}

int main()
{
	

	// iterator의 형태와 비슷 : A
	{
		int Array[8] = { 0,1,2,3,4,5,6,7 };

		int * iter = nullptr;

		iter = Array;

		for (int i = 0; i < 8; i++)
		{
			cout << (*(iter + i)) << endl;
		}
	}

	cout << "///////////////////////////////////////////" << endl;

	//iterator의 형태 : B
	{
		list<int>::iterator iter;
		list<int> NumberList = { 10,11,12,13,14 };

		for (iter = NumberList.begin(); iter != NumberList.end(); ++iter)
		{
			cout << (*iter) << endl;
		}
	}

	cout << "///////////////////////////////////////////" << endl;

	// A 형태 와 B 형태가 같은지 증명
	{
		int Array[4] = { 15,16,17,NULL };

		for (int *iter = Array; (*iter) != NULL; iter+= 1)
		{
			cout << (*iter) << endl;
		}
	}

	cout << "///////////////////////////////////////////" << endl;


	{


		for (int i = 0; i < 4; i++)
		{
			Node* node = new Node();
			node->Value = i + 1;

			Back(node);
			Back(pList)->Nextptr = node;
		}

		cout << Back(pList)->Value << endl;

		push_back(5);

		cout << Back(pList)->Value << endl;

		
	}

	return 0;
}




