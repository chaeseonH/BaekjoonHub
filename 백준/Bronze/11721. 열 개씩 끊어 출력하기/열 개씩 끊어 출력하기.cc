#include <stdio.h>
#include <string.h>

int main(void){
    char word[100];
    int i;
    scanf("%s", word);
    for(i=0; i<strlen(word); i++){
        printf("%c", word[i]);
        if(i%10 == 9){
            printf("\n");
        }
    }
    

    return 0;
}