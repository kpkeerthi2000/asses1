#include<iostream>
using namespace std;
#define MAX 100
class STACK
{
	public:
	int top;
	int a[MAX];
	void push(int);
	int pop();
	void disp();
	STACK()
	{
		top=0;
	}
};
void STACK::push(int n)
{
	if(top!=MAX-1)
	{
		top+=1;
		a[top]=n;
	}
	else
	cout<<"stack overflow";
}
int STACK::pop()
{
	if(top!=0)
	{
		top-=1;
		return a[top+1];
	}

	else
	cout<<"stack empty";

}
void STACK::disp()
{
	int i=1;
	while(i<=top)
	{
		cout<<a[i];
		i++;
	}
}
int main()
{
STACK s1;
int a;
s1.push(1);
s1.push(2);
s1.push(3);
a=s1.pop();
cout<<a<<endl;
s1.disp();

}

