#include <iostream>

using namespace std;

int main()
{
    int x,div;
    cout<<"enter the number for prime factorisation \n";
    cin>>x;
    cout<<"prime factors are";
    for (int i = 2; i*i<=x; i++)
    {
       while (x%i==0)
       {
        cout<<i<<" ";
        x /=i;
       }
       if (x !=1)
       {
        cout<<x;
       }
    }
    return 0;
}
