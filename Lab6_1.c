#include <stdio.h>
#include <string.h>

int main()
{
    char temp[50];
    int a;
    scanf("%d",&a);
    char str[a][50];

    for(int i=0; i<=a; ++i)
    {
        fgets(str[i], sizeof(str[i]), stdin);
    }


}
