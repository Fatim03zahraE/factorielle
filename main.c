#include <stdio.h>
#include <stdlib.h>
int factorielle(int nb)
{
    int i,fct=1;
    for(i=1;i<=nb;i++)
    {
        fct=fct*i;
    }
    return fct;
}
int main()
{
    int i,nbr,fact=1,f;
    printf("entrer un nbr\n");
    scanf("%d",&nbr);
    for(i=1;i<=nbr;i++)
    {
        fact=fact*i;
    }
    printf("factorielle de %d est %d\n",nbr,fact);
    printf("\n*******************************************\n");
    f=factorielle(nbr);
   printf("\nfactorielle de %d est %d",nbr,f);
   printf("\n*******************************************\n");
    return 0;
}
