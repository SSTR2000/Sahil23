#include<stdio.h>

void main() {
    int x, y;
    printf("Enter the value of x and y__");
    scanf("%d%d", &x, &y);
    if (x > y)
        printf("x is greater than y");
    else
        printf("y is greater than x");
}
