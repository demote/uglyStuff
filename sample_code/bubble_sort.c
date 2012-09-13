/****************************************
 * a sample code of bubble sort alogrithm
 *
 * From: http://www.dailyfreecode.com
 *
 ***************************************/

#include<stdio.h>
#include<conio.h>
#define N 6

void main()
{
    int arr[N]={0};
    int key,exch=0,pass,comp,temp,i;


    textcolor(00);
    textbackground(55);

    clrscr();


    printf("\n\t ENTER THE DATA::: ");
    for(i=0;i<N;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(pass=0;pass<N;pass++)
    {
        clrscr();
        printf("\n\t PASS::: %d",pass+1);

        for(comp=0;comp<N;comp++)
        {
            printf("\n COMP ::: %d.%d",pass+1,comp+1);
            if(arr[comp]>arr[comp+1])
            {
                exch=1;
                temp=arr[comp];
                arr[comp]=arr[comp+1];
                arr[comp+1]=temp;
            }
            printf("\n\t\t %d",arr[comp]);
        }
        printf("\n\t");
        getch();
     }
     printf("\n\n\t DATA AFTER SORTING......");
     printf("\n\n\n");

     for(i=0;i<N;i++)
     {
        printf("\t %d",arr[i]);
     }
     getch();
}
