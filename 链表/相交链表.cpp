#include <iostream>
#include <cstdio>
using namespace std;
struct node{
	int val;
	struct node* next;
	node(int x): val(x), next(NULL){}
};
node* headA, *headB;
int main()
{
	//�ֹ�ģ������ע��Ҫָ��ͬһ����� 
	headA = NULL, headB = NULL;
	node* rear = headA;
	char c;
	//��cin �� ���Ի��з� �� �ո�
	do{
		int x;
		cin >> x;
		node * p = new node(x);//ΪʲôҪ��ָ����ʽ���� 
		if(headA == NULL)
		headA = p, rear = p;
		else rear->next = p, rear = p;
	}while((c = getchar()) != '\n');
	rear = headB;
	do{
		int x;
		cin >> x;
		node * p = new node(x);//ΪʲôҪ��ָ����ʽ���� -->���� 
		if(headB == NULL)
		headB = p, rear = p;
		else rear->next = p, rear = p;
	}while((c = getchar()) != '\n');
	node* p = headA, *q = headB;
	while(p != q)
	{
		p = (p == NULL ? headB : p->next);
		q = (q == NULL ? headA : q->next);
	}
	if(p == NULL)puts("NULL");
	else cout << p->val;
}
