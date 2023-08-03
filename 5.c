//Q12
#include <stdio.h>

int main(){
    printf("   | 1  2  3  4  5  6  7  8  9\n");
    printf("---+---------------------------\n");
    for(int i=1;i<=9;i++){
        printf(" %d |", i);
        for(int j=1;j<=9;j++){
            printf(" %2d", i*j);
        }
        printf("\n");
    }
    return 0;
}
//Q13
#include <stdio.h>

int main(){
    printf("   | 1  2  3  4  5  6  7  8  9\n");
    printf("---+---------------------------\n");
    for(int i=1;i<=9;i++){
        printf(" %d |", i);
        for(int j=1;j<=9;j++){
            printf(" %2d", i+j);
        }
        printf("\n");
    }
    return 0;
}
//Q14
#include <stdio.h>

int main(){
    int n;
    printf("사각형을 출력합니다.\n");
    printf("입력할 수 : ");
    scanf("%d", &n);
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}
//Q15
#include <stdio.h>

int main(){
    int a, b;
    printf("직사각형을 출력합니다.\n");
    printf("높이 : ");
    scanf("%d", &a);
    printf("너비 : ");
    scanf("%d", &b);
    
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}