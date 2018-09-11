#include<iostream>
using namespace std;
#define MAX 100
class QUEUE
{
	public:
	int front,rear;
	int a[MAX];
	void enqueue(int);
	void dequeue();
void disp();
	QUEUE()
	{
		front=rear=0;
	}
};
void QUEUE::enqueue(int n)
{
	if(rear!=MAX-1)
	{
		rear+=1;
		cout<<"seat no:"<<rear<<endl;
		a[rear]=n;
	}
	else
	cout<<"queue is full";
}
void QUEUE::dequeue()
{
	if(front==rear)
	cout<<"queue is empty";
	else
	{
		front+=1;
		
	}
}
void QUEUE::disp()
{
	for(int i=front+1;i<=rear;i++)
	cout<<" "<<a[i];
}
QUEUE q;
void fun(int q)
{
	for(int i=1;i<=q;i++)
	{
		q.enqueue(1);
	}
}
void fun1(int q)
{
for(int i=1;i<=q;i++)
	{
		q.dequeue();
	}
}	
int main()
{
	int a,s;

	cin>>a;
	switch(a)
	{
	case 1:{cout<<"enter the no of students";
		cin>>s;
		fun(s);
		break;
		}
	case 2:{cout<<"enter no. of students to be removed";
		cin>>s;
		fun1(s);
		break;
}
	}

}	
