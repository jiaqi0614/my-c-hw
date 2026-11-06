//202610111119
//刘嘉琪

#include <stdio.h>

typedef struct {
    int temp;
    int humi;
    int valid;
}Sensor;
 Sensor pack_sensor(int t,int h) {
    Sensor s;
    s.temp = t;
    s.humi = h;
    if(s.temp >= -20&&s.temp <= 50&&s.humi > 0&&s.humi < 100){
       s.valid = 1;
    }

    else{
       s.valid = 0;
    }
    return s;
}


int main() {
    int t,h;
    scanf("%d %d",&t,&h);
    Sensor result = pack_sensor(t,h);
    if(result.valid == 1){
        printf("TEMP=%d HUMI=%d",result.temp,result.humi);
    }
    else{
        printf("ERROR: Out of Range");
    }

    return 0;
}