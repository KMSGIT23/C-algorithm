//Q10
#include <stdio.h>

int main(){
    int a, b;
    printf("a의 값 : ");
    scanf("%d", &a);

    do{
        printf("b의 값 : ");
        scanf("%d", &b);
        if(b<=a){
            printf("a보다 큰 값을 입력하세요!");
        }
    }while(b<a);

    printf("b - a는 %d입니다.", b-a);
    
    return 0;
}

//Q11
#include <stdio.h>

int main(){
    int n, sum=0;

    do{
        printf("n의 값 : ");
        scanf("%d", &n);
    }while(n<=0);

    while(0<n){
        n/=10;
        sum++;
    }

    printf("그 수는 %d자리입니다.", sum);
    
    return 0;
}