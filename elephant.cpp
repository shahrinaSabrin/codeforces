#include<iostream>
using namespace std;
int main()
{
    int distance;
    cin>>distance;
    int move=0;
    move+=distance/5;
    if(distance%5!=0)
    move++;
    cout<<move<<endl;
}