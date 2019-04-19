#include<stdio.h>
void main()
{
int a[10],b,i,j,k;
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<9;i++)
{
   for(j=0;j<9;j++)
          {
           if(a[j]>a[j+1]){
               b=a[j];
               a[j]=a[j+1];
               a[j+1]=b;
                        }
          }
}
for(k=0;k<10;k++)
{
    printf("%d,",a[k]);
}
}

