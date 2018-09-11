#include<iostream>
#include<stack>
#include<cstring>

using namespace std;
void disp(stack <char> temp)

{
	stack <char> temp1=temp;
	while(!temp1.empty())
	{
		cout<<'\t'<<temp1.top();
		temp1.pop();
	}
}	

int main()
{
	stack <char> s;
	int i=0,j=0;
	char a[50];
	cin>>a;
	while(a[i]!='\0')
	{
		s.push(a[i]);
		i++;
	}
	i=0;
	
	while(i<strlen(a))
	{
		if(s.top()==a[i])
		{
			j++;
			s.pop();
			
		}
	i++;
	}
	
	if(j==strlen(a))
	cout<<"\n it is a palindrome";
	else
	cout<<"not a palindrome";
	//disp(s);*/
}
