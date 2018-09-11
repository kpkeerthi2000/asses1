#include<iostream>
using namespace std;
typedef struct NODE{int data;
			struct NODE*next;
		    }node;
class STACK
{
	public:
	node *head,*top,*prev;
	void push(int);
	//void pop();
	//void disp();
	STACK()
	{
		top=NULL;
		head=NULL;
		prev=NULL;
	}
};
void STACK::push(int n) 
{
	node *temp=new node;
	temp->data=n;
	temp->next=NULL;
	if(head==NULL&&top==NULL)
	{
		cout<<"hi";
		head=temp;
top=temp;		
prev=NULL;
	}
	else
	{
	prev=top;
	top->next=temp;
	top=top->next;
	}
}
/*void STACK::pop()
{
	if(top==NULL)
	cout<<"stack empty";
	else
	{
		top=prev;
	}
}
void STACK::disp()
{
	//node *temp1=head;
	while(head!=NULL)
	{
		cout<<head->data;
		head=head->next;
	}
}
*/
int main()
{
STACK s1;   
s1.push(5);
s1.push(6);

s1->disp();
}
