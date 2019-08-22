#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, addition = 0, i, temp;
    scanf("%d", &N);
    temp = N % 2;
    //Counting the box that can be formed by 4 6 8 ... that can be divided to pieces again
    for(i = 4; i <= N; i=i+2){
        addition++;
    }
    printf("%d", addition+i-2);
}
