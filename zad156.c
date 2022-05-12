// Program treba pronaci najmanji broj pomocu pokazivaca i dinamicke alokacije.

#include <stdio.h>
#include <conio.h>
#include<stdlib.h>

int main()
{
    int n,*p,i,h=0;

        printf("Koliko brojeva zelis unijeti: ");
        scanf("%d",&n);

        p=(int *) malloc(sizeof(int));

        if(p==NULL)
        {
                printf("\nAlokacija memorije nije uspjela.\n");
                exit(0);
        }
        for(i=0;i<n;i++)
        {
                printf("\nUnesi broj %d : ",i+1);
                scanf("%d",p+i);
        }

        h=*p;
        for(i=1;i<n;i++)
        {
                if(*(p+i)<h)
                        h=*(p+i);
        }
        printf("\nNajmanji broj je %d \n",h);
        
        return 0;
}
