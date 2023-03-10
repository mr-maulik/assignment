#include<iostream>
using namespace std;
class Calculator 
{
    public:
        float num1, num2; 
        void getdata() 
        {
            cout<<"Enter the first number: ";
            cin>>num1;
            cout<<"Enter the second number: ";
            cin>>num2;
        }
};
class Addition : public Calculator 
{
    public:
        float sum() 
        {
            return num1 + num2;
        }
};
class Subtraction : public Calculator 
{
    public:
        float diff() 
        {
            return num1 - num2;
        }
};
class Multiplication : public Calculator 
{
    public:
        float mul() 
        {
            return num1 * num2;
        }
};
class Division  : public Calculator 
{
    public:
        float div() 
        {
            if (num2 != 0) 
            {
                return num1 / num2;
            }
            else 
            {
                cout<<"Error: Division by zero is undefined." <<"\n";
                return 0;
            }
        }
};
int main() 
{
    Addition obj1;
    Subtraction obj2;
    Multiplication obj3;
    Division obj4;

    obj1.getdata();
    cout<<"Sum = "<<obj1.sum()<<"\n";

    obj2.getdata();
    cout<<"Difference = "<<obj2.diff()<<"\n";

    obj3.getdata();
    cout<<"Multiplication= "<<obj3.mul()<<"\n";

    obj4.getdata();
    cout<<"Division = "<<obj4.div()<<"\n";

    return 0;
}
