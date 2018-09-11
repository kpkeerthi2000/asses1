#include<iostream>
#include<queue>
using namespace std;
void disp(queue <int>temp,int n)
{
queue <int> temp1=temp;
int i=0;
while(i<n)
{
	cout<<temp1.front()<<" ";
	temp1.pop();
	i++;
}
}
int main()
{
	queue<int> q;
	q.push(1);
q.push(2);
q.push(3);
int a=q.size();
disp(q,a);

}
