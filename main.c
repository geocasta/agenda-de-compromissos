#include <stdio.h>
//  a agenda contara com um sistem simples de cadastro de compromissos e prioridades do dia
//  a a
//Agenda deve conter as seguintes informações.
//MENUS
//1 - Cadastrar compromisso
//  nome do compromisso
//  data do compromisso
//  hora do compromisso  
//  prioridade do compromisso
//  a agenda deve conter as seguintes funções.
//  2- Listar compromisso
//  listar compromissos por prioridade
//  listar compromissos por data
//  listar compromissos por hora
//  listar compromissos por nome
//  MENUS 
//  3- Editar compromisso 
//  visualizar compromisso
//  alterar data 
//  alterar hora
//  alterar prioridade
//  remover
// 4- Sair
//  sair do programa

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// teste

#define Quant_Compromissos 100

typedef struct {
    char nome[100];
    char data[20];
    char hora[10];
    int prioridade;
} Compromisso;

typedef struct {
    Compromisso compromissos[Quant_Compromissos];
    int quantidade;
} Agenda;

void cadastrar_compromisso(Agenda *agenda);
void listar_compromissos(Agenda *agenda);
void listar_por_prioridade(Agenda *agenda);
void listar_por_data(Agenda *agenda);
void listar_por_hora(Agenda *agenda);
void listar_por_nome(Agenda *agenda);
void editar_compromisso(Agenda *agenda);
void menu_principal(Agenda *agenda);

int main() {
    Agenda agenda;
    agenda.quantidade = 0;
    menu_principal(&agenda);
    return 0;
}

void cadastrar_compromisso(Agenda *agenda) {
    if (agenda->quantidade >= Quant_Compromissos) {
        printf("A agenda está cheia.\n");
        return;
    }

    Compromisso novo_compromisso;
    printf("Nome do compromisso: ");
    scanf(" %[^\n]", novo_compromisso.nome);
    printf("Data do compromisso: ");
    scanf(" %[^\n]", novo_compromisso.data);
    printf("Hora do compromisso: ");
    scanf(" %[^\n]", novo_compromisso.hora);
    printf("Prioridade do compromisso: ");
    scanf("%d", &novo_compromisso.prioridade);

    agenda->compromissos[agenda->quantidade] = novo_compromisso;
    agenda->quantidade++;
}

void listar_compromissos(Agenda *agenda) {
    printf("Lista de compromissos:\n");
    for (int i = 0; i < agenda->quantidade; i++) {
        printf("Nome: %s, Data: %s, Hora: %s, Prioridade: %d\n",
               agenda->compromissos[i].nome,
               agenda->compromissos[i].data,
               agenda->compromissos[i].hora,
               agenda->compromissos[i].prioridade);
    }
}

void listar_por_prioridade(Agenda *agenda) {
    printf("Lista de compromissos por prioridade:\n");
    for (int i = 0; i < agenda->quantidade; i++) 
}
void listar_por_data(Agenda *agenda) {
    printf("Lista de compromissos por data:\n");
    for (int i = 0; i < agenda->quantidade; i++)
}
void listar_por_hora(Agenda *agenda) {
    printf("Lista de compromissos por hora:\n");
    for (int i = 0; i < agenda->quantidade; i++)    
}

void listar_por_nome(Agenda *agenda) {
    printf("Lista de compromissos por nome:\n"); 
    for (int i = 0; i < agenda->quantidade; i++)     
}

void editar_compromisso(Agenda *agenda) {
    char nome[100];
    printf("Digite o nome do compromisso a ser editado: ");
    scanf(" %[^\n]", nome);
    for (int i = 0; i < agenda->quantidade;)  
}

void menu_principal(Agenda *agenda) {
    int opcao;
    do {
        printf("\nMENU PRINCIPAL\n");
        printf("1 - Cadastrar compromisso\n");
        printf("2 - Listar compromissos\n");
        printf("3 - Editar compromisso\n");
        printf("4 - Sair\n");
        printf("Escolha a opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                cadastrar_compromisso(agenda);
                break;
            case 2:
                listar_compromissos(agenda);
                break;
            case 3:
                editar_compromisso(agenda);
                break;
            case 4:
                printf("Saindo do programa...\n");
                break;
            default:
                printf("Opção inválida. Por favor, escolha uma opção válida.\n");
        }
    } while (opcao != 4);
