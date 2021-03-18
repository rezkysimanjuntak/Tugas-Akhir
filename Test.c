/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <string.h>

int main(){
    int t, i;
    char req[10][50], nama[10][50], nilai[10][3], tipe[10][50];
    char *token;
    char temp;
    scanf("%d", &t);
    scanf("%c",&temp); //temp statement to clear buffer
    if(t > 0 && t <= 10){
        for(i = 0; i < t; i++){
            scanf("%[^\n]", req[i]);
            //printf("%s\n", req[i]);
            token = strtok(req[i], "#");
        }
    }
    while(token != NULL){
        printf( "%s\n", token); //printing each token
        token = strtok(NULL, "#");
    }
    return 0; 
}
