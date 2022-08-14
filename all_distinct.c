#include <stdio.h>
int main()
{
    int n,t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        int a[n];
        for (int i=0; i<n; i++)
            scanf("%d",&a[i]);
        for (int i = 0; i < n; i++)
        {
            int temp;
            for (int j = i+1; j < n; j++)
            {
                if(a[i] > a[j])
                {
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
        }
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            while (i < n - 1 && a[i] == a[i + 1])
            {
                i++;
            }
            count++;
        }
        int rep=n-count;
        if(rep%2==0)
        {
            printf("%d\n",count);
        }
        else
        {
            printf("%d\n",count-1);
        }
    }
 
    return 0;
}