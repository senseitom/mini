#include<iostream>
using namespace std;
int main()
{
    int h[5]={1,2,3,4,5};
    int j[5]={1,2,3};
   for (int i = 0; i < 5; i++)
{
    if (i < 5) {
        cout << h[i] << " ";
    }
    if (i < 3) {
        cout << j[i] << " ";
    }
}
    return 0;
}
