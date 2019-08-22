#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Scenarios, i, StampsNeed, friends, friendsStamps[1000], j, prev = 0, k, totalStamps, friendsNeed = 1;
    scanf("%d", &Scenarios);
    for(i = 0; i < Scenarios; i++){
        do{
            printf("How many stamps ? : \n");
            scanf("%d %d", &StampsNeed, &friends);
        }while((StampsNeed > 1000000 || StampsNeed < 1) || (friends > 1000 || friends < 1));
        for(j = friends; j > 0; j--){
            scanf("%d", &friendsStamps[j]);
        }
        for(k = friends; k >= 0; k--){
            for(j = 0; j < friends; j++){
                if(friendsStamps[j] > friendsStamps[j+1]){
                    prev = friendsStamps[j];
                    friendsStamps[j] = friendsStamps[j+1];
                    friendsStamps[j+1] = prev;
                }
            }
        }
        totalStamps = friendsStamps[friends-1];
        for(k = (friends-1); k > 0; k--){
            if(totalStamps < StampsNeed){
               totalStamps = totalStamps + friendsStamps[k-1];
               friendsNeed++;
            }
        }
        if(friendsNeed > 0){
            printf("%d", friendsNeed);
        }else{
            printf("Impossible");
        }
    }
}
