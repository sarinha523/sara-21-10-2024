#include <stdio.h>
#include <stdlib.h>

int main(){
char estado;

printf("digite a letra:  ");
scanf("%c", &estado);


if(estado == 's'){
    printf("Ela e solteira");

}


if(estado == 'c'){
    printf("Ela e casada");

}

if(estado == 'd'){
    printf("Ela e divorciada");

}

if(estado == 'v'){
    printf("Ela e viuva");
    

}
}
