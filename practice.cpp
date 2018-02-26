#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{

int a = 10;

char *ptr = (char*)&a;

if(*ptr)
{
    cout<<"little endian"<<endl;
}
else
{
    cout<<"big endian"<<endl;
}
return 0;
}
