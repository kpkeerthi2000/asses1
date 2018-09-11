#include<iostream>
using namespace std;
#define MAX 100
class QUEUE
{
	public:
	int front,rear;
	int a[MAX];
	void enqueue(int);
	int dequeue();
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
		a[rear]=n;
	}
	else
	cout<<"queue is full";
}
int QUEUE::dequeue()
{
	if(front==rear)
	cout<<"queue is empty";
	else
	{
		front+=1;
		return front;
	}
}
void QUEUE::disp()
{
	for(int i=front+1;i<=rear;i++)
	cout<<" "<<a[i];
}
int main()
{
QUEUE 	q;
int i;
cout<<"1.enqueue\n2.dequeue\n3.display4.exit";
	while(1)
	{
	cout<<"enter choice";
	cin>>c;
	switch(c)
	{
		case 1:{cout<<"enter element to be enqueued";
			cin>>i
			q.enqueue(i);
			break;
			}
		case 2:cout<<q.dequeue();break;
		case 3:q.disp();break;
		case 4:return 0;
	}
}
}

	
