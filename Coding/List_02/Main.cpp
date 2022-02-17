#include <iostream>
#include <list>

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

typedef struct tagiterator
{
	tagNode* Front;
	tagNode* pThis;
	tagNode * Back;

}Iterator;


int size_num = 0;

void push_back(int value, Node*pList);
Node * front(Node * pList);
Node * back(Node*pList);

Iterator* begin(Node*_plist);
Iterator* end(Node*_plist);

void Delete(int _where, Node*_pList);
Node* Erase(int _where, Node*_pList);
int size();


int main()
{
	Node *pList = new Node();

	push_back(1, pList);
	push_back(2, pList);
	push_back(3, pList);
	push_back(4, pList);
	push_back(5, pList);
	
	int i = 0;

	

	/*
		STL 표준 템플릿 라이브러리 
	*/

	for (Iterator *iter = begin(pList); iter->pThis != nullptr; iter->pThis = iter->pThis->Back)
	{

		//cout << iter->pThis->Value << endl;
	}

	Erase(2, pList);

	cout << size() << endl;

	//====================================================================================

	list<int> NumberList;

	for (int i = 0; i < 10; ++i)
	{
		NumberList.push_back(i + 1);

	}

	{
		for (list<int>::iterator iter = NumberList.begin(); iter != NumberList.end(); ++iter)
		{
			cout << (*iter) << endl;
		}
	}


	for (int iter : NumberList)
	{
		cout << iter << endl;

	}

	cout << "size : " << NumberList.size() << endl;

	list<int>::iterator iter = NumberList.end();

	cout << "begin : " << (*NumberList.begin()) << endl;
	cout << "end : " << (*--NumberList.end()) << endl;


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

Iterator* begin(Node * _plist)
{
	Iterator* iter = new Iterator;

	iter->pThis = new Node();
	iter->pThis = _plist;

	return iter;
}

Iterator* end(Node * _plist)
{
	Iterator* iter = new Iterator;

	iter->pThis = new Node();
	iter->pThis = back(_plist)->Back;

	return iter;
}

void Delete(int _where, Node * _pList)
{
	if (_where == 1)
	{
		_pList->Front->Back = _pList->Back;
		_pList->Back->Front = _pList->Front;
		
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

Node* Erase(int _where, Node * _pList)
{
	if (_where == 1)
	{
		_pList->Back->Front = _pList->Front;
		_pList->Front->Back = _pList->Front;


		Node* back_list = _pList->Back;
		
		delete(_pList);

		size_num += (-5);

		return back_list;
	}
	else
	{
		Erase(_where + (-1), _pList->Back);

	}

	return nullptr;
}

int size()
{
	return size_num;
}

void push_back(int value,Node*pList)
{
	if (pList->Back == nullptr)
	{
		Node* node = new Node();

		node->Front = pList;
		node->Value = value;
		node->Back = nullptr;

		++size_num;

		pList->Back = node;
	}
	else
	{
		push_back(value, pList->Back);
	}
}

