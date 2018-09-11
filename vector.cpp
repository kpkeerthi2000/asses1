#include<iostream>
#include<vector>
int main()
{
   vector<int>empno;
   vector<int>salary;
   int loop=1;
   int ip;
   int val,sal;
   while(loop)
   {
      cout<<"1.Insert Front\t 2.Insert End\t 3.Delete Front  \t4.Delete End \t5.Display\t 6.Exit "<<endl;
      cin>>ip;
      switch(ip)
      {
         case 1:  cout<<"Enter the emp no and his salary to be added"<<endl;
                  cin>>val>>salary;
                  empno.push_front(val);
                  salary.push_front(sal);
                  break;
         case 2:  cout<<"Enter the emp no and his salary to be added"<<endl;
                  cin>>val>>sal;
                  empno.push_back(val);
                  salary.push_back(sal);
                  break;
         case 3:  cout<<"Employee Deleted: "<<empno.front()<<"\t"<<salary.front()<<endl;
                  empno.pop_front();
                  salary.pop_front();
                  break;
         case 4:  cout<<"Employee Deleted: "<<empno.back()<<"\t"<<salary.back()<<endl;
                  empno.pop_back();
                  salary.pop_back();
                  break;
         case 5:  cout<<"The Courses in the list are"<<endl;
                  display(course);
                  break;
         case 6:  loop=0;
                  break;
      }      
   }
   return 0;
}
