#include<stdio.h>
int main(){
    int n,i,sum;
    printf("Enter n : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum += i;
    }
    float avg = (float)sum / n;

    printf("%.2f",avg);
    return 0;
}