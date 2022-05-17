#include<stdio.h>
#include<iostream>
#include<string.h>




using namespace std;


int main(){

   char str[80] = "Daniel!Gomes  Januario Junior";

   char *token;
    char buffer[8][25];
    char buffer2[50]= "";

    int i=0;
   /* get the first token */
   token = strtok(str, "-!. ");
//strcpy(buffer[0],token);
   /* walk through other tokens */

        while( token != NULL ) {
        strcpy(buffer[i],token);
        token = strtok(NULL, "-!. ");
        if (token == NULL){
            break;
        }
        i++;
   }
strcat(buffer2,buffer[i]);
strcat(buffer2,", ");

for(int j=0;j<i;j++){

    if ( j != 0){
        strcat(buffer2," ");
    }
    strcat(buffer2,buffer[j]);
}
char nomeInvertido[50];
strcpy(nomeInvertido,buffer2);
printf("%s\n",nomeInvertido);


return 0;
}
