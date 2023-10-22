#include<iostream>
using namespace std;

int sum(int a,int b)
{
    return a+b;
}
double sum(int a,double b)
{
    return a+b;
}
double sum(double a, int b)
{
    return a+b;
}
double sum(double a,double b)
{
    return a+b;
}
double sum(int a,int b, int c)
{
    return a+b+c;
}
double sum(int a,int b, double c)
{
    return a+b+c;
}
double sum(int a,double b,int c)
{
    return a+b+c;
}
double sum(int a,double b,double c)
{
    return a+b+c;
}
double sum(double a,int b,int c)
{
    return a+b+c;
}
double sum(double a,int b,double c)
{
    return a+b+c;
}
double sum(double a,double b,int c)
{
    return a+b+c;
}
double sum(double a,double c,double b)
{
    return a+b+c;
}

int main()
{
    double xyz;
    xyz=sum(2,2.567,254.6666);
    cout<<"sum is "<<xyz;
    return 0;
}
