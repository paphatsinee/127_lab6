#include<stdio.h>

int main()
{
        int n,r;
        scanf("%d",&n);
        int a[n][2],g[n];
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<2; j++)
            {
                scanf("%d",&a[i][j]);
            }

        }
        for(int k=1; k<=n; k++)
        {
            for(int i=0; i<n; i++)
            {
                for(int j=0; j<2; j++)
                {

                    if(k==a[i][j])
                    {
                        g[k]++;
                    }
                }
            }
        }
        for(int k=1; k<=n; k++)
        {
            if(g[k]>g[k+1])
            {
                r=k;
            }
        }
        printf("%d",r);

        return 0;
}
