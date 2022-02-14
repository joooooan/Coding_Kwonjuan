#include <iostream>
#include <list>

using namespace std;

// int main(void) 있고 없고 차이는 없음.

// Vector : 배열로 만들어진 컨테이너
// 단점 : 복사하고 삭제한 다음 값을 옮김.

// List : 포인터로 이루어진 연결리스트

typedef struct List_Node
{
	int Value;
	List_Node* Nextptr;
}Node;

int main()
{

	// iterator의 형태와 비슷 : A
	{
		int Array[10] = { 0,1,2,3,4,5,6,7,8,9 };

		int * iter = nullptr;

		iter = Array;

		for (int i = 0; i < 10; i++)
		{
			cout << (*(iter + i)) << endl;
		}
	}

	cout << "///////////////////////////////////////////" << endl;

	//iterator의 형태 : B
	{
		list<int>::iterator iter;
		list<int> NumberList = { 10,11,12,13,14 };

		for (iter = NumberList.begin(); iter != NumberList.end(); iter++)
		{
			cout << (*iter) << endl;
		}
	}

	cout << "///////////////////////////////////////////" << endl;

	// A 형태 와 B 형태가 같은지 증명
	{
		int Array[5] = { 15,16,17,18,NULL };

		for (int *iter = Array; (*iter) != NULL; iter+= 1)
		{
			cout << (*iter) << endl;
		}
	}

	cout << "///////////////////////////////////////////" << endl;


	{
		Node *pList = new Node;

		pList->Value = 0;
		pList->Nextptr = nullptr;

		Node *pNode = new Node;

		pNode->Value = 1;
		pNode->Nextptr = nullptr;

		pList->Nextptr = pNode;

		cout << pList->Value << endl;
		cout << pList->Nextptr->Value << endl;
		
	}

	return 0;
}

