#include<iostream>
#include<list>
using namespace std;
void display ( list<string>course)
{
   list<string>:: iterator it=course.begin();
   for( ;it!=course.end();++it)
   {
      cout<<*it<<endl;
   }
}
int main()
{
   list<string>course;
   int loop=1;
   int ip;
   string val;
   while(loop)
   {
      cout<<"1.Insert Front\t 2.Insert End\t 3.Delete Front  \t4.Delete End \t5.Display\t6.Sort \t 7.Exit "<<endl;
      cin>>ip;
      switch(ip)
      {
         case 1:  cout<<"Enter the course to be added"<<endl;
                  cin>>val;
                  course.push_front(val);
                  break;
         case 2:  cout<<"Enter the course to be added"<<endl;
                  cin>>val;
                  course.push_back(val);
                  break;
         case 3:  cout<<"Course Deleted: "<<course.front()<<endl;
                  course.pop_front();
                  break;
         case 4:  cout<<"Course Deleted: "<<course.back()<<endl;
                  course.pop_back();
                  break;
         case 5:  cout<<"The Courses in the list are"<<endl;
                  display(course);
                  break;
         case 6:  course.sort();
                  cout<<"The sorted list is"<<endl;
                  display(course);
                  break;
         case 7:  loop=0;
                  break;
      }      
   }
   return 0;
}
