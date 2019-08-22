#include <stdio.h>


int main()
{
    int i = 0, j, iut, mode, k;
    do{
        printf("Choose Mode \n[1] right triangle, \n[2] left triangle, \n[3] equilateral triangle, \n[4] diamond\n");
        scanf("%d", &mode);
        if(mode == 1){
            scanf("%d", &iut);
            for(i; i < iut; i++){
                for(j = 0; j <= i; j++){
                    printf("*");
                }
                printf("\n");
            }
        }else if(mode == 2){
            scanf("%d", &iut);
            for(i = iut; i >= 0; i--){
                for(j = 0; j <= i; j++){
                    printf(" ");
                }
                for(k = i; k < iut; k++){
                    printf("*");
                }
                printf("\n");
            }
        }else if(mode == 3){
            scanf("%d", &iut);
            for(i = iut; i >= 0; i--){
                for(j = 0; j <= i; j++){
                    printf(" ");
                }
                for(k = i; k < iut; k++){
                    printf("* ");
                }
                printf("\n");
            }
        }else{
            scanf("%d", &iut);
            for(i = iut; i >= 0; i--){
                for(j = 0; j <= i; j++){
                    printf(" ");
                }
                for(k = i; k < iut; k++){
                    printf("* ");
                }
                printf("\n");
            }
            for(i = 1; i < iut; i++){
                for(j = 0; j <= i; j++){
                    printf(" ");
                }
                for(k = i; k < iut; k++){
                    printf("* ");
                }
                printf("\n");
            }
        }

    }while(mode > 0 && mode < 5);



    return 0;
}
