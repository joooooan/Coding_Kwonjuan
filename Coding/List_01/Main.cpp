#include <iostream>
#include <list>

using namespace std;

// int main(void) & int main() ���̴� ����.

// Vector : �迭�� ������� �����̳�
// ���� : �����ϰ� ������ ���� ���� �ű�.

// List : �����ͷ� �̷���� ���Ḯ��Ʈ

// ������ �Ŀ��� ���� �������� ����.
// �迭�� 2�� n �������� ����°� ����.

typedef struct List_Node
{
	int Value;
	List_Node* Nextptr;

	List_Node() //����Ʈ ������
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
	

	// iterator�� ���¿� ��� : A
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

	//iterator�� ���� : B
	{
		list<int>::iterator iter;
		list<int> NumberList = { 10,11,12,13,14 };

		for (iter = NumberList.begin(); iter != NumberList.end(); ++iter)
		{
			cout << (*iter) << endl;
		}
	}

	cout << "///////////////////////////////////////////" << endl;

	// A ���� �� B ���°� ������ ����
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




