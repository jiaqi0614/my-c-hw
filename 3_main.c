// 202610111119
// 刘嘉琪

#include <stdio.h>

int main() {
    float a,b,c;
    scanf("%f %f %f",&a,&b,&c);
    if (a + b > c&&b + c > a&&a + c > b){
        printf("能构成三角形");
    }
    else {
        printf("不能构成三角形");
    }

return 0;
    
    }
