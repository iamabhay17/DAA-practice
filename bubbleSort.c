#include <stdio.h>
int main()
{
    int arr[15],i,j,n,temp;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter elements: ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        if(arr[j]>arr[j+1]){
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
    printf("\nArray after %dth iteration\n",i+1);
    for(int k=0;k<n;k++)
    printf("%d\t",arr[k]);
}
printf("\n\nArray after fully sorted\n");
for(i=0;i<n;i++){
printf("%d ",arr[i]);
}
}