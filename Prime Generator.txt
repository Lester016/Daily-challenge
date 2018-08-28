#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, m, n;
    scanf("%d", &m);
    scanf("%d", &n);
    if(1 <= m && m <= n && n <= 1000000000 && n-m<=100000){
        for(j = m; j <= n; j++){
                if((j%2 == 0 || j%3 == 0 || j%5 == 0 || j%7 == 0)){
                    if(j == 2 || j == 3 || j == 5 || j == 7){
                        printf("%d\n", j);
                    }
                }else{
                    if(j != 1){
                        printf("%d\n", j);
                    }
                }
        }
    }else{
        printf("Your start can't be greater than the final!");
    }
    return 0;
}
