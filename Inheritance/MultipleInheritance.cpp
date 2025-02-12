#include<iostream>
using namespace std;
class A{
    public:
        int a;

    A(int a)
    {
        this ->a=a;
    }
    void printa()
    {
        cout<<"class a"<<a<<endl;
    }
};

class B{
    public:
    int b;

    B(int b)
    {
        this->b=b;
    }

    void printb(){
        cout<<"class b"<<" "<<b;
    }
};

class C:public A,public B
{   
    public:
    C(int a,int b):A(a),B(b)
    {

    }

    int sum(){
        return a+b;
    }

};





int main()
{

    C c (10,20);

    c.printa();
    c.printb();
    cout<<endl;
    cout<<c.sum();

        return 0;
}