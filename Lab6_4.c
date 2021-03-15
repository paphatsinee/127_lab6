#include<stdio.h>

int main()
{
        int n,r=0,m=0;
        scanf("%d",&n);
        int a[n][2],g[n][1];
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<2; j++)
            {
                scanf("%d",&a[i][j]);
            }

        }
        for(int k=0; k<n; k++)
        {
            for(int i=0; i<n; i++)
            {
                for(int j=0; j<2; j++)
                {

                        if((k+1)==a[i][j])
                        {
                            g[k][0]=g[k][0]+1;
                        }
                    }

                }
            }

        for(int k=0; k<n; k++)
        {
            if(g[k][0]>r)
            {

                r=g[k][0];
                m=k+1;
            }


        }
        printf("%d",m);

        return 0;
}
