//Write a program to insert a number at a given location in an array. 
#include<stdio.h>
int main(){
    int n,pos,num,i;
    printf("Enter n : ");
    scanf("%d",&n);

    int a[n+1];
    for(i=0 ; i<n ; i++){
        printf("Enter number : ");
        scanf("%d",&a[i]);
    }

    printf("Enter position and number : ");
    scanf("%d %d",&pos,&num);

    if(pos>=0 && pos<n){
        for(i=n;i>pos;i--){
            a[i]=a[i-1];
        }
        n=n+1;
        a[pos] = num;
        for(i=0;i<n;i++){
            printf("%d\n",a[i]);
        }
    }else{
        printf("Invalid position");
    }
    return 0;
}