//Write a program to delete duplicate numbers from an array.
#include<stdio.h>
int main(){
    int n,i,j,k;
    printf("Enter n : ");
    scanf("%d",&n);
    int a[n];
    for(i=0 ; i<n ; i++){
        printf("Enter number : ");
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i] == a[j]){
                for(k = j; k < n - 1; k++) {
                    a[k] = a[k + 1];
                }

                n--;
                j--; 

            }
        }
        
    }
    for(i=0;i<n;i++){
            printf("%d\n",a[i]);
    }
    return 0;
}