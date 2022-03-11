#include<stdio.h>
#define n 5;
int a[10],b[10],c[10],i,j,k;
int main()
{
int i,v;
printf("enter the num of elemets in tha first array");
scanf("%d",&v);
printf("enter the elements of first array");
for(i=0;i<v;i++)
{
scanf("%d",&a[i][j]);
}

printf("enter the num of elemets in tha first array");
scanf("%d",&c);
printf("enter the elements of second array");
for(i=0;i<c;i++)
{
scanf("%d",&b[i]);
}
printf("second array is");
for(i=0;i<n;i++)
{
printf("%d",&b[i][j]);
}
}
