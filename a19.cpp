#include<bits/stdc++.h>
using namespace std;
#define MAX 100
class PQUEUE
{
public:
int a[MAX][2];
int front,rear;
void enqueue(int,int);
int dequeue();
void disp();
void priority(int,int);
PQUEUE ()
{
front=rear=0;
}
};
void PQUEUE::enqueue(int n,int p)
{
	if(front==0&&rear==0)
	{
	rear=rear+1;
	a[rear][0]=n;
	a[rear][1]=p;
	}
	else 
	priority(n,p);
}
void PQUEUE::priority(int n,int p)
{
	int i=0,j;
	for(i=front+1;i<=rear;i++)
	{
		if(p<a[i][1])
		{
			for(j=rear+1;j>i;j--)
			{
				a[j][0]=a[j-1][0];
				a[j][1]=a[j-1][1];
			}
rear=rear+1;
			a[i][0]=n;
			a[i][1]=p;
			return;
		}
	}
rear=rear+1;
		a[i][0]=n;
		a[i][1]=p;
	
}
int PQUEUE::dequeue()
{
if(front==rear)
cout<<"queue is empty";
else
{
front=front+1;
return(a[front][0]);
}
}
void PQUEUE::disp()
{
	for(int k=front+1;k<=rear;k++)
	{
		cout<<" "<<a[k][0]<<" "<<a[k][1]<<endl;
	}
}
int main()
{
	PQUEUE q;
	q.enqueue(2,5);
	q.enqueue(38,6);
	q.enqueue(48,7);
	q.disp();
}
