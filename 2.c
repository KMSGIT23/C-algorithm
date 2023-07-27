//Q4
#include <stdio.h>

int med3(int a, int b, int c){
    if(a>=b){
        if(b>=c) return b;
        else if(a<=c) return a;
        else return c;
    }
    else if(a>c) return a;
    else if(b>c) return c;
    else return b;
}

int main(void){
    int a, b, c;
    printf("세 정수의 중앙값을 구합니다.\n");
    printf("중앙값은 %d입니다.\n", med3(3, 2, 1));
    printf("중앙값은 %d입니다.\n", med3(3, 2, 2));
    printf("중앙값은 %d입니다.\n", med3(3, 1, 2));
    printf("중앙값은 %d입니다.\n", med3(3, 2, 3));
    printf("중앙값은 %d입니다.\n", med3(2, 1, 3));
    printf("중앙값은 %d입니다.\n", med3(3, 3, 2));
    printf("중앙값은 %d입니다.\n", med3(3, 3, 3));
    printf("중앙값은 %d입니다.\n", med3(2, 2, 3));
    printf("중앙값은 %d입니다.\n", med3(2, 3, 1));
    printf("중앙값은 %d입니다.\n", med3(2, 3, 2));
    printf("중앙값은 %d입니다.\n", med3(1, 3, 2));
    printf("중앙값은 %d입니다.\n", med3(2, 3, 3));
    printf("중앙값은 %d입니다.\n", med3(1, 2, 3));
}