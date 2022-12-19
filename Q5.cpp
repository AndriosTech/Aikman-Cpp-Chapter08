#include<iostream>
using namespace std;

class finda
{
    private:

    int arr[5];
    int max;
    int i;

    public:

    void input(void)
    {
        cout<<"enter values into array: "<<endl;
        for(i=0; i<5; i++)
        {
            cin>>arr[i];
        }
    }

    void fmax(void)
    {
        max = arr[0];
        for(i=0; i<5; i++)
        {
            if(arr[i]>arr[i+1])
            {
                max=arr[i];
            }
        }
        max = arr[i];
    }

    void print(void)
    {
        cout<<"the maximum value is: "<<max;
    }
};

int main()
{
    finda ob;

    ob.input();
    ob.fmax();
    ob.print();
}