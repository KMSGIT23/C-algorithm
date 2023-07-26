//연습 문제 1-1
#include <stdio.h>

int max4(int a, int b, int c, int d){
    int max=a;
    if(b>max) max=b;
    if(c>max) max=c;
    if(d>max) max=d;
    return max;
}

int main(){
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    printf("%d", max4(a, b, c, d));

    return 0;
}

//연습 문제 1-2
#include <stdio.h>

int min3(int a, int b, int c){
    int min=a;
    if(min>b) min=b;
    if(min>c) min=c;
    return min;
}

int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d", min3(a, b, c));

    return 0;
}

//연습 문제 1-3
#include <stdio.h>

int min4(int a, int b, int c, int d){
    int min=a;
    if(min>b) min=b;
    if(min>c) min=c;
    if(min>d) min=d;
    return min;
}

int main(){
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    printf("%d", min4(a, b, c, d));

    return 0;
}