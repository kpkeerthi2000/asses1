#include<bits/stdc++.h>
using namespace std;
#define MAX 100
class PQUEUE
{
public:
int a[MAX];
int front,rear;
void enqueue(int);
int dequeue();
void disp();
void priority(int);
PQUEUE ()
{
front=rear=0;
}
};
void PQUEUE::enqueue(int n)
{
	if(front==0&&rear==0)
	{
	rear=rear+1;
	a[rear]=n;
	}
	else 
	priority(n);
}
void PQUEUE::priority(int n)
{
	int i=0,j;
	for(i=front+1;i<=rear;i++)
	{
		if(n>a[i])
		{
			for(j=rear+1;j>i;j--)
			{
				a[j]=a[j-1];
			}
rear=rear+1;
			a[i]=n;
			return;
		}
rear=rear+1;
		a[i]=n;
	}
}
int PQUEUE::dequeue()
{
if(front==rear)
cout<<"queue is empty";
else
{
front=front+1;
return(a[front]);
}
}
void PQUEUE::disp()
{
	for(int k=front+1;k<=rear;k++)
	{
		cout<<" "<<a[k];
	}
}
int main()
{
QUEUE 	q;
int i,c;
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

