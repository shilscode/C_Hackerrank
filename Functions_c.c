#include <stdio.h>
int max_of_four(int a, int b, int c, int d);


int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}

int max_of_four(int a, int b, int c, int d){
    int i;
    
    if (a>b && a>c && a>d){
        i=a;
    }
    else if (d>a && d>c && d>b){
        i=d;
    }
    else if (b>a && b>c && b>d){
        i=b;
    }
    else {
        i=c;
    } 
    
    
    return i;
}
