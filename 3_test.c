#include <stdio.h>

typedef struct{
    int buffer[3];
    int count;
}Window;

Window push_data(Window win,int val){
    win.buffer[win.count % 3 ] = val;
    win.count++;

    return win;
}


    int get_average(Window win){
        int sum = 0;
        if(win.count < 3){
            for(int i = 0;i < win.count;i++){
                sum += win.buffer[i];
            }
            return sum / win.count;
        }
        else{
            for(int i = 0;i < 3;i++){
                sum += win.buffer[i];
            }
            return sum / 3;
        }
    }


    int main(){
        int m;
        Window win;
        win.count = 0;

        scanf("%d",&m);

        for(int i = 0;i < m;i++){
            int val;
        scanf("%d",&val);
        win = push_data(win,val);
        printf("%d ",get_average(win));
        }
    
        return 0;
    }





