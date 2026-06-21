/*Write  a  program to delete  a number  from  an  array  that  is  already  sorted  in  an 
ascending order. */
#include<stdio.h>
int main(){
    int n,pos,i;
    printf("Enter n : ");
    scanf("%d",&n);
    int a[n];
    for(i=0 ; i<n ; i++){
        printf("Enter number : ");
        scanf("%d",&a[i]);
    }
    printf("Enter position : ");
    scanf("%d",&pos);

    if(pos>=0 && pos<n){
        for(i=pos;i<n-1;i++){
            a[i] = a[i + 1];
        }
        n--;
        for(i=0;i<n;i++){
            printf("%d\n",a[i]);
        }
    }else{
        printf("Invalid number!");
    }
    return 0;
}