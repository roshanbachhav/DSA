#include<stdio.h>

void main(){
    int a[100],n,i,src,flag=0;

    printf("Enter Element for array \n");
    scanf("%d",&n);

    printf("Enter element in array:: \n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    printf("Enter element want you search \n");
    scanf("%d",&src);

    for(i=0;i<n;i++){
        if(a[i] == src){
            flag = 1;
            break;
        }
    }

    if(flag == 1){
        printf("The element can found: %d \n",src);
    }
    else{
        printf("Please enter valid text \n");
    }

}