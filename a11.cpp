#include<iostream>
#include<string.h>
using namespace std;
typedef struct NODE{int data;
			struct NODE*next;
		    }node;
class STACK
{
	public:
	node *head,*top,*prev;
	void push(int);
	int pop();
	void disp();
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
		
		head=top=temp;
		prev=NULL;
	}
	else
	{
	prev=top;
	top->next=temp;
	top=top->next;
	}
}
int STACK::pop()
{
	if(top==NULL)
	cout<<"stack empty";
	else
	{
		node *t=top;
		top=prev;
		top->next=NULL;
		return t->data;
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
int main()
{
STACK s;   
char x[30];
int a,b;
cin>>x;
for(int i=0;i<strlen(x);i++)
{
	if(x[i]>=48 &&x[i]<=57)
	s.push(x[i]-'0');
	else
	{
		b=s.pop();
		a=s.pop();
		switch(x[i])
		{
			case '+':s.push(a+b);
				break;
			case '-':s.push(a-b);
				break;
			case '*':s.push(a*b);
				break;
			case '/':s.push(a/b);
				break;
		}
	}
}
cout<<s.pop()<<endl;
}

