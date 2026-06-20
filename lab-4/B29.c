// Write a program to merge two unsorted arrays. 
#include<stdio.h>
int main(){
    int m,n,i;
    
    printf("Enter m and n : ");
    scanf("%d %d",&m,&n);

    int a[m],b[n],c[m+n];

    printf("Enter first array ele : \n");
    for(i=0;i<m;i++){
        printf("Enter number : ");
        scanf("%d",&a[i]);
    }

    printf("Enter second array ele : \n");

    for(i=0;i<n;i++){
        printf("Enter number : ");
        scanf("%d",&b[i]);
    }

    for(i=0;i<m;i++){
       c[i]=a[i]; 
    }

    for(i=0;i<n;i++){
       c[i+m]=b[i]; 
    }

    for(i=0;i<m+n;i++){
        printf("%d\n",c[i]);
    }
    return 0;
}