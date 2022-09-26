#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{

    char login[30];
    char senha[30];

}
    pessoa; pessoa p[1];

int main(){


    char login[30];
    char senha[30];

    strcpy(p[0].login, "Mateus");
    strcpy(p[0].senha, "123");

    printf("\nLogin: ");
    scanf("%s", login);

    printf("\nSenha: ");
    scanf("%s", senha);

    if ((strcmp(login,p[0].login)==0) && (strcmp(senha,p[0].senha)==0)){

        printf("\n\nUsuário logado com sucesso!\n\n");
        printf("+----------------------------------------+\n");
        printf("|             Menu de opções             |\n");
        printf("+----------------------------------------+\n");
        printf("| 01 - Opção 1                           |\n");
        printf("| 02 - Opção 2                           |\n");
        printf("| 03 - Opção 3                           |\n");
        printf("| 04 - Opção 4                           |\n");
        printf("+----------------------------------------+\n");
    }
    else {
        printf("Login e/ou senha incorretos");
    }

    return 0;
}
