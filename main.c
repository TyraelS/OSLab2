#include <stdio.h>

int main() {
    puts("====Discriminant Calculator====");
    int a, b, c, d;
    puts("Enter a:");
    scanf("%d", &a);
    puts("Enter b:");
    scanf("%d", &b);
    puts("Enter c:");
    scanf("%d", &c);
    d = b*b - 4*a*c;
    if(d<0){
        printf("D = %d(equation has no real roots)", d);
    }
    else if(d == 0 ){
        printf("D = %d(equation has signle root)", d);
    }
    else {
        printf("D = %d(equation has two roots)", d);
    }
    puts("      ");

    return 0;
}