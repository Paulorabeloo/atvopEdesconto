#include <stdio.h>
int main(){
    int idadeh, idadem;
    printf("Digite a idade do casal:\n");
    scanf("%i%i", &idadeh, &idadem);
    if (idadeh % 2 == 0 && idadem % 2 ==0){
        printf("DESCONTO DE 50%");
    }
    else{
        printf("SEM DESCONTO");
    }
return 0;
}
