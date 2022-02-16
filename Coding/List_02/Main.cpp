#include <iostream>

using namespace std;

typedef struct tagNode
{
	tagNode* Front;
	int Value;
	tagNode * Back;
	
	tagNode()
	{
		Front = nullptr;
		Value = 0;
		Back = nullptr;
	}

}Node;

void push_back(int value, Node*pList);
Node * front(Node * pList);
Node * back(Node*pList);
void Delete(int _where, Node*_pList);


int main()
{
	Node *pList = new Node();

	push_back(1, pList);
	push_back(2, pList);
	push_back(3, pList);
	push_back(4, pList);
	push_back(5, pList);


	Delete(0, pList);
	cout << pList->Back->Value << endl;

	//cout << back(pList)->Value << endl;

	return 0;
}

Node * front(Node * pList)
{
	return pList;
}

Node * back(Node*_pList) 
{

	Node* pNestNode = _pList;

	if (pNestNode->Back == nullptr)
	{
		return pNestNode;
	}
	else
	{
		back(pNestNode->Back);
	}
}

void Delete(int _where, Node * _pList)
{
	if (_where == 0)
	{
		if (_pList->Front == nullptr) //첫 번째 일때
		{
			_pList->Back->Front = nullptr;

			cout << _pList->Back->Back->Front->Value << endl;

		}
		else
		{
			if (_pList->Back == nullptr)
			{
				_pList->Front->Back = nullptr;
			}
			else
			{
				_pList->Front->Back = _pList->Back;
				_pList->Back->Front = _pList->Front;
			}
		}

		delete(_pList);
	}
	else
	{
		if (_pList->Back == nullptr)
		{
			cout << "에러 _where이 리스트 크기를 초과했습니다." << endl;
		}
		else
		{
			Delete(_where + (-1), _pList->Back);

		}
	}

}

void push_back(int value,Node*pList)
{
	if (pList->Back == nullptr)
	{
		Node* node = new Node();

		node->Front = pList;
		node->Value = value;
		node->Back = nullptr;

		pList->Back = node;
	}
	else
	{
		push_back(value, pList->Back);
	}
}

