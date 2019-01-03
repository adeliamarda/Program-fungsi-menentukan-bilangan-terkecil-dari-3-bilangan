#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"masukan bilangan 1"<<endl;
    cin>>a;
    cout<<"masukan bilangan 2"<<endl;
    cin>>b;
    cout<<"masukan bilangan 3"<<endl;
    cin>>c;
    if(a<b)
    {
        cout<<"nilai yang terkecil adalah="<<a<<endl;}
        else
            if(b<c)
        {
            cout<<"nilai yang terkecil adalah:"<<b<<endl;}
            else
                if(c<a,c<b)
            {
                cout<<"nilai yang terkecil adalah:"<<c<<endl;}
                return 0;
}
