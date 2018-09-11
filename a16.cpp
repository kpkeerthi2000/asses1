#include<iostream>
using namespace std;
int a[100];
void fun(int s)
{
	
	
		for(int k=0,q=0;q<s;k++)
		{	
			if(a[k]==0)
			{
				a[k]=1;
				cout<<k+1<<endl;
q++;
			}
		}
	
}
void fun1(int s)
{
	
		for(int k=0,q=0;q<s;k++)
		{	
			if(a[k]==1)
			{a[k]=0;
			q++;
			}
		}
	
}		


int main()
{
	int a,s;


	while(a!='3')
	{
		cout<<"enter ur choice";
		cin>>a;		
		switch(a)
		{
			case 1:{cout<<"enter no of students";
				cin>>s;
				fun(s);
				break;
				}
			case 2:{cout<<"enter no.of students to be removed";
				cin>>s;
				fun1(s);
				break;
				}
		}
	}
}
