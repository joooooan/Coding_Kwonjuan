#include <iostream>
#include <list>

using namespace std;

// int main(void) �ְ� ���� ���̴� ����.

// Vector : �迭�� ������� �����̳�
// ���� : �����ϰ� ������ ���� ���� �ű�.

// List : �����ͷ� �̷���� ���Ḯ��Ʈ

typedef struct List_Node
{
	int Value;
	List_Node* Nextptr;
}Node;

int main()
{

	// iterator�� ���¿� ��� : A
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

	//iterator�� ���� : B
	{
		list<int>::iterator iter;
		list<int> NumberList = { 10,11,12,13,14 };

		for (iter = NumberList.begin(); iter != NumberList.end(); iter++)
		{
			cout << (*iter) << endl;
		}
	}

	cout << "///////////////////////////////////////////" << endl;

	// A ���� �� B ���°� ������ ����
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

