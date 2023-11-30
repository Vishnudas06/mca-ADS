#include<stdio.h>
void main()
{
int i,j,temp,a[10],n;
printf("enter the no of elements");
scanf("%d",&n);
printf("Enter the numbers :");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
printf("New array :");
for(i=0;i<n;i++)
{
printf("%d\t",a[i]);
}
}
