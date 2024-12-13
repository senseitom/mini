#include<iostream>
#include<math.h>
int main()
{

 float value1,value2;
char op;
    cout<<"enter the value"<<endl;
    cin>>value1>>op>>value2;
if (op=='+'){
    cout<<"addition:"<<value1+value2<<endl;
}
if else (op=='-'){
    cout<<"substrection"<<value1-value2<<endl;
}
if else(op=='%'){
    cout<<"mod function"<<value1%value2<<endl;
}
if else(op=='/'){
    cout<<"diviton"<<value1/value2<<endl;
}
if else(op=='^'){
    cout<<"power function"<<pow(value1,value2)<<endl;
}
else{
    cout<<"no match found(._.)"<<endl;
}
return 0;
}

