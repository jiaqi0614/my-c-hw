// 202610111119
// 刘嘉琪

#include <stdio.h>

int main() {
    float a,b;
    char op;
    scanf("%f %c %f",&a,&op,&b);

    if (op == '+') {
            printf("%.2f",a+b);
    }
    else if (op == '-') {
            printf("%.2f",a-b);
    }
    else if (op == '*') {
            printf("%.2f",a*b);
    }
    else if (op == '/') {
        if (b != 0) {
            printf("%.2f",a/b);
        }
        else {
            printf("错误：除数不能为 0");
        }
    }

    else {
        printf("错误：不支持的运算符");
    }
    
return 0;

    }