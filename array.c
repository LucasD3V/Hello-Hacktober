#include<stdio.h>
void main()
{
  int a[10],b,*c,i,j,k;
  printf("Enter an array of 10 numbers\n");
  for(i=0;i<10;i++){
    scanf("%d",&a[i]);
  }
  printf("Enter a number to access\n");
  scanf("%d",&b);
  c=&b;
  for(j=0;j<10;j++){
        if(*c==a[j]){
            printf("%d is at address %d",*c,(a+j));
        }
  }
}

