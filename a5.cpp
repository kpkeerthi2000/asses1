#include<iostream>
using namespace std;
int main()
{
	float n,n1;
	float sum=0;
	cout<<"enter no.of call";
	cin>>n;
	cout<<"enter no.of calls attended";
	cin>>n1
	if(n<=200)
	sum=300;
	else if(n<=300)
	sum=300+0.5*(n-200);
	else 
	sum=350+0.3*(n-300);
	if(n1>500)
	sum=0.9*sum;
	cout<<"rs."<<sum;
}
