#include<iostream>
using namespace std;


class records
{
    private:

    int person;
    char name[15];
    int age;
    char address[15];


    public:
    
    void input();
    void display();
  
};

void records :: input()
{
    cout<<"enter name: "<<endl;
    cin>>name;
    cout<<"enter age: "<<endl;
    cin>>age;
    cout<<"enter address: "<<endl;
    cin>>address;
}

void records :: display()
{
    cout<<"Name: "<<name<<endl;
    cout<<"Age: "<<age<<endl;
    cout<<"Address: "<<address<<endl;
    cout<<endl;
}

int main()
{
    records p[10];

    int i;

    for(i=1; i<=10; i++)
    {
        p[i].input();
    }
    cout<<endl;
    for(i=1; i<=10; i++)
    {
        p[i].display();
    }
    
}