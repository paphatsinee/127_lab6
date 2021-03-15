#include<stdio.h>

int main()
{
        int n,r=0,m=0;
        scanf("%d",&n);
        int a[n][2],g[n];
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<2; j++)
            {
                scanf("%d",&a[i][j]);
            }

        }

            for(int i=0; i<n; i++)
            {
                for(int j=0; j<2; j++)
                {
                    for(int k=0; k<=n; k++)
                    {
                        if(k==a[i][j])
                        {
                            g[k]=g[k]+1;
                        }
                }
            }
        }
        for(int k=0; k<n; k++)
        {
            if(g[k]>r)
            {
                r=g[k];
                m=k+1;
            }
        }
        printf("%d",m);

        return 0;
}
