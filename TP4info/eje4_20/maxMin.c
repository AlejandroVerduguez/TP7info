#include<stdio.h>

void minMax(long *a,int n){
    long max=0;
    int i;
    for(i=0; i<n ;i++){
        if(a[i]> max){
            max=a[i];
        }
    }
    printf("el numero maximo es: %li \n", max);
}
int main()
{
    long num[5]={6,123,4444,3,2223};
    long *l=num;

    printf("los numeros en el vector son: %ld,%ld,%ld,%ld,%ld\n",l[0],l[1],l[2],l[3],l[4]);
    minMax(l,5);


    return 0;
}
