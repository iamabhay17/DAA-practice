#include<stdio.h>
#define max 9
int a[5]={34,23,45,19,21};
int b[3];
int merge(int l,int m,int h)
{
    int l1,l2,i;
    for(l1=l,l2=m+1,i=l;l1<=m && l2<=h;i++)
    {
        if (a[l1]<=a[l2])
        b[i]=a[l1++];
        else
        b[i]=a[l2++];
    }
    while(l1<=m)
    b[i++]=a[l1++];
    while(l2<=h)
    b[i++]=a[l2++];
    for(i=l;i<=h;i++)
    a[i]=b[i];
}

int sort(int low,int high)
{
    int mid;
    if(low<high)
    {
        mid=(low+high)/2;
        sort(low,mid);
        sort(mid+1,high);
        merge(low,mid,high);
    }
    else{
        return 0;
    }
}

int main()
{
    int i;
    printf("Before Sorting:\n");
    for(i=0;i<=max;i++)
    printf("%d ",a[i]);
    sort(0,max);
    printf("\nAfter Sorting:\n");
    for(i=0;i<=max;i++)
    printf("%d ",a[i]);
    return 0;
}