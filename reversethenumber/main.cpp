#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        unsigned long int n,s,a=0;
        cin>>n;
        for(;n!=0;)
        {
            s=n%10;
            n=n/10;
            a=a*10+s;
        }
        cout<<a<<endl;
    }

    return 0;
}
