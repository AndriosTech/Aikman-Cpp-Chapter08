#include<iostream>
using namespace std;

class factorial
{
       private:

       int fact=1;
       int i;
       int n;

       public:

       factorial()
       {
              cout<<"enter number: "<<endl;
              cin>>n;
       }

       void cal()
       {
             for(int i=1;i<=n;i++)
	      {
	           fact=fact*i;
	
	      }
       }

       void display()
       {
              cout<<"the factorial is: "<<fact<<endl;
       }
};

class sum
{
       private:

       int a;
       int b;

       public:

       sum()
       {
              cout<<"enter number: "<<endl;
              cin>>a>>b;
              cout<<"the sum is: "<<a+b;
       }
};

int main()
{
       factorial f;


       f.cal();
       f.display();

       sum s;
       
      
}