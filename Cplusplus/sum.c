#include <stdio.h>
#include <math.h>
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    int a = n % 10;
    int b = (n / 10) % 10;
    int c = (n / 100) % 10;
    int d = (n / 1000) % 10;
    int e = (n / 10000) % 10;
    printf("%d%d%d%d%d\n", a, b, c, d, e);
    int p;
    int i = 1;
    while (i < 5){
        if (a > b){
        p = a;
        a = b;
        b = p;
    }
    if (b > c){
        p = b;
        b = c;
        c = p;
    }
    if (c > d){
        p = c;
        c = d;
        d = p;
    }
    if (d > e){
        p = d;
        d = e;
        e = p;
    }
    i = i + 1;
}
    
    printf("%d%d%d%d%d\n", e, d, c, b, a);
    return 0;
}