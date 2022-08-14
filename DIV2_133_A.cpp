#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int n,ans=0;
        cin>>n;
        n=abs(n);
        
            if(n==1)
                n=2;
            else
            {
                if(n%3)
                n=n/3 +1;
                else
                n/=3;


            
            

        }
        cout<<n<<endl;
    }
}