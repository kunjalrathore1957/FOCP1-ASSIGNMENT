#include<stdio.h>
intmain(){
    int arr[10]={2,5,9,10,12,13,19,20,23,24};
    int even[10], odd[10], e=0,o=0,i;
    for(i=0;i<10;i++){
        if(arr[i]%2==0)
        even[e++]==arr[i];
        else
        odd[o++]=arr[i];
        }
        printf("EVEN: ");
        for(i=0;i<e;i++)printf("%d", even[i]);
    printf("\nodd:");
for(i=0;i<o;i++)printf("%d", odd[i]);
return 0;
}