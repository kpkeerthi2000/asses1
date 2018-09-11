#include<iostream>
using namespace std;
typedef struct NODE{int data;
			struct NODE *next;
		}node;
class QUEUE
{
	public:
	node *front,*rear;
	void enqueue(int n);
	int dequeue();
	void disp();
	QUEUE()
	{
		front=	NULL;
		rear=NULL;
		
	}
};
void QUEUE::enqueue(int n)
{
	node *temp=new(node);
	temp->data=n;
	temp->next=NULL;
	if(front==NULL&&rear==NULL)
	{
		front=temp;
		rear=temp;
	}
	else
	{
		node *t=front;
		while(t->next!=NULL)
		t=t->next;
		t->next=temp;
		rear=temp;
		
	}
}
int QUEUE::dequeue()
{
	int a=0;
	a=front->data;
	if(front!=NULL)	
	front=front->next;
	else	
	cout<<"queue is empty";
	return a;
}
void QUEUE::disp()
{
	if(front==NULL)
	cout<<"queue is empty";
	else
	{
		node *temp1=front;
		while(temp1!=NULL)
		{
			cout<<" "<<temp1->data;
			temp1=temp1->next;
		}  
	}
}
int main()
{
QUEUE q;
q.enqueue(1);
q.enqueue(2);
q.enqueue(3);
q.enqueue(4);
q.disp();
cout<<"\n"<<q.dequeue()<<endl;
q.disp();

}
