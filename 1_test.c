//202610111119
//刘嘉琪

#include <stdio.h>

typedef struct{
    char name[16];
    int score;
}Player;

void sort_players(Player arr[],int n){
    Player temp;

    for(int i=0;i<n - 1;i++){
          for(int j=0;j<n - 1 - j;j++){
            if(arr[j].score < arr[j + 1].score){
                Player temp =arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;

            }
          }
    }
}


int main() {
    int n,i;
    scanf("%d",&n); 
    Player players[15];
    for(int i = 0;i < n;i++){
        scanf("%s %d",&players[i].name,&players[i].score);
    }
    sort_players(players,n);

    for(int i = 0;i < n;i++){
        printf("%d %s %d\n",i + 1,players[i].name,players[i].score);
    }

    return 0;
}