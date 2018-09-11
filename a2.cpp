#include<iostream>
using namespace std;
class emp
{	
	public:
	int empno;
	int salary;
	int bonus;
	emp()
	{
	salary=10000;
	bonus=10;
	}
	void newsal();
friend class abc;
};
class abc
{
public:
int z=24;
z=salary+z;
//void func();
};

void emp::newsal()
{
cout<<emp::salary+emp::bonus;
} 
int main()
{
	emp a;abc b;
	cout<<b.z;
	a.newsal();
//b.func();
return 0;
}
	
