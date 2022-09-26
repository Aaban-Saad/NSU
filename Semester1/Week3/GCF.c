#include <stdio.h>
int main()
{
    int vajjo, vajok, rem, GCF, ans;
    printf("\n\tEnter 2 numbers -->  ");
    scanf("%d%d",&vajjo,&vajok);
    while(1)
    {
        rem = vajjo % vajok;
        if(rem == 0)
        {
            GCF = vajok;
            break;
        }
        else
        {
            vajjo = vajok;
            vajok = rem;
            continue;
        }
    }
    printf("\n\tGCF = %d\n\n",GCF);
    getch();
    return 0;
}
