#include "bits/stdc++.h"
using namespace std;
typedef long long int ll;
const ll N=4e5+2,inf=1e9+7;
class Base
{
public:
    void _print()
    {
        cout<<"Base member function\n";
    }
};
class derived:public Base
{
public:
    void _print()
    {
        cout<<"Derived member function\n";
    }
};

class A
{
private:
    string name;
public:
    A():name("Tareq"){}
    virtual void _display()
    {
        cout<<"Class A - "<<name<<"\n";
    }
};
class B:public A
{
private:
    string name;
public:
    B():name("Mehedi"){}
    void _display()
    {
        cout<<"Class B - "<<name<<"\n";
    }
};
class C:public A
{
private:
    string name;
public:
    C():name("Kanto"){}
    void _display()
    {
        cout<<"Class C - "<<name<<"\n";
    }
};
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    //ofstream outfile("output.txt");
    //cout<<setprecision(4)<<fixed;

    int tc=1,t=0;//cin>>tc;
    while(tc--){
        // function overriding
        derived der;
        der._print(); // Derived member function
        der.Base::_print(); // Base member function

        // virtual function
        A* a=new A();
        A* b=new B();
        A* c=new C();
        a->_display();
        b->_display();
        c->_display();
    }


    return 0;
}
