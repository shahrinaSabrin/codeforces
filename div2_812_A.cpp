#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test,move;
    cin>>test;
    while(test--)
    {
        int p,minx=0,maxx=0,miny=0,maxy=0;
        cin>>p;
        vector<int>v1,v2;
        int x,y,m,n;
        for(int i=1;i<=p;i++)
        {
            cin>>x>>y;
            if(x<minx)
                minx=x;
            if(x>maxx)
                maxx=x;
            if(y<miny)
                miny=y;
            if(y>maxy)
                maxy=y;


           // cout<<x<<" "<<y;
/*
            if(x==0)
            {
                v2.push_back(y);
            }
            if(y==0)
            {
                v1.push_back(x);
            }
*/
        }
        
        //sort(v1.begin(),v1.end());
        //sort(v2.begin(),v2.end());
        if(minx>=0)
        {
            m=maxx;
            
        }
        else if(maxx<=0)
        {
            m=abs(minx);
        
        }
        else
        {
            m=abs(minx)+abs(maxx);
        }
        if(miny>=0)
        {
            n=maxy;
            
        }
        else if(maxy<=0)
        {
            n=abs(miny);
        
        }
        else
        {
            n=abs(miny)+abs(maxy);
        }
        //cout<<m<<" "<<n<<endl;
        move=2*(m+n);

      
        cout<<move<<endl;

    }
}