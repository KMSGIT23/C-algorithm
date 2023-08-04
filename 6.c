//Q16-1
#include <stdio.h>

void triangleLB(int n){
    int i, j;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
}

void main(){
    int n;
    scanf("%d", &n);
    triangleLB(n);
}
//Q16-2
#include <stdio.h>

void triangleLU(int n) {
    int i, j;
    for (i = 1;i <= n;i++) {
        for (j = 1;j <= n-i+1;j++) {
            printf("*");
        }
        printf("\n");
    }
}

void main() {
    int n;
    scanf("%d", &n);
    triangleLU(n);
}
//Q16-3
#include <stdio.h>

void triangleRU(int n) {
    int i, j;
    for (i = 0;i < n;i++) {
        for (j = 0;j < i;j++) {
            printf(" ");
        }
        for (j = 0;j < n - i;j++) {
            printf("*");
        }
        printf("\n");
    }
}

void main() {
    int n;
    scanf("%d", &n);
    triangleRU(n);
}
//Q16-4
#include <stdio.h>

void triangleRB(int n) {
    int i, j;
    for (i = 1;i <= n;i++) {
        for (j = 0;j < n-i;j++) {
            printf(" ");
        }
        for (j = 0;j < i;j++) {
            printf("*");
        }
        printf("\n");
    }
}

void main() {
    int n;
    scanf("%d", &n);
    triangleRB(n);
}
//Q17
#include <stdio.h>

void spira(int n) {
    for (int i = 0;i < n;i++) {
        for (int j = n - 1;j > i;j--) {
            printf(" ");
        }

        for (int j = 0;j < 2 * i + 1;j++) {
            printf("*");
        }
        printf("\n");
    }
}
void main() {
    int n;
    scanf("%d", &n);
    spira(n);
}
//Q18
#include <stdio.h>

void nrpira(int n) {
    for (int i = 1;i <= n;i++) {
        for (int j = 0;j < i;j++) {
            printf(" ");
        }

        for (int j = 2 * n - 1;j > 2 * (i-1);j--) {
            printf("%d", i);
        }
        printf("\n");
    }
}
void main() {
    int n;
    scanf("%d", &n);
    nrpira(n);
}
