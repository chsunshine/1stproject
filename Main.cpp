#include<iostream.h>

void move(int count, int start, int finish, int temp)
{
   if (count > 0) {
      move(count - 1, start, temp, finish);
      cout << "Move disk " << count << " from " << start
           << " to " << finish << "." << endl;
      move(count - 1, temp, finish, start);
   }
}

void main()
{ 
   int n;
   bool flag=true;
   char ch;
   cout<<"Please input number of disks ( > 0 ) to move:"<<endl;
   cin>>n;
   cin.get();
   while(flag && n>0)
   {
	   move(n, 1, 3, 2);
	   cout<<"Continue(y/n)?"<<endl;
	   ch=cin.get();
	   if (ch=='y')
       {
		    cout<<"Please input number of disks ( > 0 ) to move:"<<endl;
            cin>>n;
            cin.get(); 
	   }
	   else
		   flag=false;
   }
}