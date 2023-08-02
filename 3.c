//Q7
#include <stdio.h>

int main(){
    int n;
    
    scanf("%d", &n);
    
    int sum=0;
    
    for(i=1;i<=n;i++){
        sum+=i;
    }
    
    printf("%d", sum);
    
    return 0;
}

//Q8
#include <stdio.h>

int main(){
    int n;
    
    scanf("%d", &n);
    
    int sum;

    sum=n * (n + 1) / 2;
    
    printf("%d", sum);
    
    return 0;
}

//Q9
#include <stdio.h>

int main(){
    int a, b;

    scanf("%d %d", &a, &b);

    int i=0, sum=0;

    if(a>b){
        for(i=b;i<=a;i++){
            sum+=i;
        }
    }
    else if(a<b){
        for(i=a;i<=b;i++){
            sum+=i;
        }
    }
    else{
        sum=a;
    }

    printf("%d", sum);
    
    return 0;
}