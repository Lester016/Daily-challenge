#include <stdio.h>

int main()
{
    int T, N, A[10000];
    scanf("%d", &T);
    if(T <= 20){
        for(int j = 0; j < T; j++){
            scanf("%d", &N);
            if(1 <= N && N <= 10000){
                for(int i = 0; i < N; i++){
                    scanf("%d", &A[i]);
                    if(!(1 <= A[i] && A[i] <= 1000000000)){
                        return;
                    }
                }
                solve(N, A);
            }
        }
    }else{
        return;
    }
}
void solve(int a, int b[]){
    int sum = 0, ave;
    for(int i = 0; i < a; i++){
        sum += b[i];
    }
    ave = sum/a;
    printf("%d\n", ave);
}
