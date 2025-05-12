#include <stdio.h>

int main() {
    int escolha;
    char dominio[100];  // variável para armazenar o domínio

    printf("1. Registrar um novo domínio\n");
    printf("2. Exibir o domínio\n");
    printf("3. Apagar um domínio\n");
    printf("Escolha uma opção: ");
    scanf("%d", &escolha);  // ler a escolha do usuário

    if (escolha == 1) {
        printf("Insira o domínio que deseja registrar: ");
        scanf("%s", dominio);
        printf("Domínio '%s' registrado com sucesso!\n", dominio);
    } else if (escolha == 2) {
        printf("Função de exibir domínio ainda não implementada.\n");
    } else if (escolha == 3) {
        printf("Função de apagar domínio ainda não implementada.\n");
    } else {
        printf("Opção inválida.\n");
    }

    return 0;
}
