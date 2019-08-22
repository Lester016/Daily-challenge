#include <stdio.h>
#include <stdlib.h>

int main()
{
    char Str[200], StrStore[200];
    int Length = 1, i, j = 0, totalMatches = 0;
    int StrStoreLength = 0;
    printf("Please Enter a sentence: ");
    gets(Str);
    while(Str[Length] != '\0'){
        Length++;
    }
    printf("\nEnter pattern: ");
    gets(StrStore);
    while(StrStore[StrStoreLength] != '\0'){
        StrStoreLength++;
    }
    if(StrStoreLength == 1){
        printf("Match located at : ");
        for(j = 0; j < StrStoreLength; j++){
            for(i = 0; i <= Length; i++){
                if(StrStore[j] == Str[i]){
                    printf("%d ", i+1);
                    totalMatches++;
                }
            }
        }
    }else{
        printf("Match located at : ");
        for(i = 1; i <= Length; i++){
            if(StrStore[j] == Str[i]){
                if(StrStore[j+1] == Str[i+1]){
                    printf("%d ", i+1);
                    totalMatches++;
                }
            }
        }
    }
    printf("\nNumber of matches found : %d \n", totalMatches);
}
