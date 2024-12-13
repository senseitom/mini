#include<iostream>
using namespace std;
int main(){
    char arr[30][1];
    int n;
    cout<<"Enter number of alphabets you want to enter: ";
    cin>>n;
    cout<<"Enter your Word: "<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i][0];
    }
   /* int a=0,b=0;
    bool z=1;
    for(int i=0; i<n/2;i++){
        a=int(arr[i][0]);
        b=int(arr[n-1-i][0]);
        if(a!=b){
            z=0;
            break;
        }
    }*/
    int count=0;
    for(int i=0; i<n/2;i++){
        if(arr[i][0]==arr[n-1-i][0]){}
        else
        count+=1;

    }

    
    if(count!=0)
    cout<<"not Palindrome";
    else
    cout<<" Palindrome";
    return 0;
}