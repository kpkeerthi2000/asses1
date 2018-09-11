#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	string s;
	cout<<"enter the string";
	cin>>s;
int i=0;
	while(s[i]!='\0')
	{
		cout<<(int)s[i]<<endl;
	i++;
	}
return 0;
}
