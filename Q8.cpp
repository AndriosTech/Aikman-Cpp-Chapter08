#include<iostream>
using namespace std;

class stringg
{
    private:

    char str[20];
    int count=0;
    int i;

    char st1[25], st2[25];

    public:

    void length()
    {
        cout<<"enter string: "<<endl;
        cin>>str;

        while (str[count] != '\0')
        {
         count++;
        }

        cout<<"the string is: "<<str<<endl;
        cout<<"the length is: "<<count<<endl;

    }

    void copy()
    {
        cout<<"Enter first string:"<<endl;
        cin>>st1;

        for(i=0; st1[i] != '\0'; i++)
        {
            st2[i] = st1[i];
        }
        st2[i] = '\0';

        cout<<"first string is: "<<st1<<endl;
        cout<<"copied string is: "<<st2<<endl;


    }

};

int main()
{
    stringg s;

    s.length();
    s.copy();
}