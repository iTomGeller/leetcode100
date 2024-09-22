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
	//手工模拟链表注意要指向同一个结点 
	headA = NULL, headB = NULL;
	node* rear = headA;
	char c;
	//用cin 是 忽略换行符 与 空格
	do{
		int x;
		cin >> x;
		node * p = new node(x);//为什么要以指针形式操作 
		if(headA == NULL)
		headA = p, rear = p;
		else rear->next = p, rear = p;
	}while((c = getchar()) != '\n');
	rear = headB;
	do{
		int x;
		cin >> x;
		node * p = new node(x);//为什么要以指针形式操作 -->方便 
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
