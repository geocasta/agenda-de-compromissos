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

###             Universidade Federal do Rio Grande do Norte                 ###
###                 Centro de Ensino Superior do Seridó                     ###
###               Departamento de Computação e Tecnologia                   ###
###                  Disciplina DCT1106 -- Programação                      ###
###                  Projeto Sistema de Gestão Escolar                      ###
###             Developed by @flgorgonio -- since Mar, 2020                 ###

###                                Semana 2                                 ###



//
// Assinatura das funções
void tela_menu_principal(void);
void tela_sobre(void);
void tela_equipe(void);
void tela_menu_aluno(void);
void tela_cadastrar_aluno(void);
void tela_pesquisar_aluno(void);
void tela_alterar_aluno(void);
void tela_excluir_aluno(void);

//
// Programa principal
int main(void) {
    tela_menu_principal();
    tela_sobre();
    tela_equipe();
    tela_menu_aluno();
    tela_cadastrar_aluno();
    tela_pesquisar_aluno();
    tela_alterar_aluno();
    tela_excluir_aluno();
    return 0;
}


###//
// Funções

void tela_menu_principal(void) {
    char op;
    system("clear||cls");
    printf("\n");
    printf("#########################################################################\n");
    printf("###                                                                         ###\n");
    printf("###             Universidade Federal do Rio Grande do Norte                 ###\n");
    printf("###                 Centro de Ensino Superior do Seridó                     ###\n");
    printf("###               Departamento de Computação e Tecnologia                   ###\n");
    printf("###                  Disciplina DCT1106 -- Programação                      ###\n");
    printf("###                  Projeto Sistema de Gestão Escolar                      ###\n");
    printf("###             Developed by @flgorgonio -- since Mar, 2020                 ###\n");
    printf("###                                                                         ###\n");
    printf("#########################################################################\n");
    printf("###                                                                         ###\n");
    printf("###            - - - - - AGENDA DE COMPROMISSOS - - - - -             ###\n");
    printf("###                                                                         ###\n");
    printf("###            1. Cadastrar compromisso                                             ###\n");
    printf("###            2. Listar compromisso                                        ###\n");
    printf("###            3. Editar copromisso                                              ###\n");
    printf("###            4. Prioridade do evento                                          ###\n");
  printf("###              5. Excluir compromisso                                        ###\n");
    printf("###            0. Sair                                                      ###\n");
    printf("###                                                                         ###\n");
    printf("###            Escolha a opção desejada: ");
    scanf("%c", &op);
    getchar();
    printf("###                                                                         ###\n");
    printf("#########################################################################\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}


void tela_sobre(void) {
    system("clear||cls");
    printf("\n");
    printf("#########################################################################\n");
    printf("###                                                                         ###\n");
    printf("###             Universidade Federal do Rio Grande do Norte                 ###\n");
    printf("###                 Centro de Ensino Superior do Seridó                     ###\n");
    printf("###               Departamento de Computação e Tecnologia                   ###\n");
    printf("###                  Disciplina DCT1106 -- Programação                      ###\n");
    printf("###               Projeto Agenda de compromissos                          ###\n");
    printf("###               Developed by @Geocastasouza                             ###\n");
    printf("###                                                                         ###\n");
    printf("#########################################################################\n");
    printf("###                                                                         ###\n");
    printf("###            = = = = = Sistema de Gestão Escolar = = = = =                ###\n");
    printf("###                                                                         ###\n");
    printf("###  Programa exemplo utilizado na disciplina DCT1106 - Programação, para   ###\n");
    printf("###  fins didáticos de ilustração. O programa contém os principais módulos  ###\n");
    printf("###  e funcionalidades que serão exigidos na avaliação dos projetos a serem ###\n");
    printf("###  desenvolvidos pelos alunos ao longo da disciplina. Serve como um guia  ###\n");
    printf("###  de consulta e referência para o desenvolvidos dos demais projetos.     ###\n");
    printf("###                                                                         ###\n");
    printf("#########################################################################\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}


void tela_equipe(void) {
    system("clear||cls");
    printf("\n");
    printf("#########################################################################\n");
    printf("###                                                                         ###\n");
    printf("###             Universidade Federal do Rio Grande do Norte                 ###\n");
    printf("###                 Centro de Ensino Superior do Seridó                     ###\n");
    printf("###               Departamento de Computação e Tecnologia                   ###\n");
    printf("###                  Disciplina DCT1106 -- Programação                      ###\n");
    printf("###                  Agenda de Compromissos                               ###\n");
    printf("###             Developed by @geocastasouza-- since Mar, 2023                  ###\n");
    printf("###                                                                         ###\n");
    printf("#########################################################################\n");
    printf("###                                                                         ###\n");
    printf("###                    Gestao de comprissos                           ###\n");
    printf("###                                                                         ###\n");
    printf("###            Este projeto exemplo foi desenvolvido por:                   ###\n");
    printf("###             Dis.Geocasta Aves de Souza                                       ###\n");
    printf("###            Prof. Flavius Gorgônio                                       ###\n");
    printf("###            E-mail:geocastasouza9@gmail.com                               \n");
    printf("###            Redes sociais: @gecasta                                     ###\n");
    printf("###            Git: https://github.com/@geocastasouza/agenda-de-compromissos.git ###\n");
    printf("###                                                                         ###\n");
    printf("#########################################################################\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
} 


void tela_menu_aluno(void) {
    char op;
    system("clear||cls");
    printf("\n");
    printf("#########################################################################\n");
    printf("###                                                                         ###\n");
    printf("###       -------------------------------------------------------         ###\n");
    printf("###        ########################################################      ###\n");
    printf("###             - - - -    Agenda de Compromissos  - - - -                       ###\n");
    printf("###        ########################################################      ###\n");
    printf("###       -------------------------------------------------------         ###\n");
    printf("###               Developed by @flgorgonio -- since Mar, 2020               ###\n");
    printf("###                                                                         ###\n");
    printf("\n");
    printf("###                                                                         ###\n");
    printf("###       ########################################################          ###\n");
    printf("###                   - - - - - -  Menu Compromisso  - - - - - -               ###\n");
    printf("###        ########################################################          ###\n");
    printf("###                                                                         ###\n");
    printf("###            1. Cadastrar um novo compromisso                           ###\n");
    printf("###            2. Pesquisar os dados de um comopromisso                           ###\n");
    printf("###            3. Atualizar o cadastro de um compromisso                          ###\n");
    printf("###            4. Excluir um d do sistema compromisso                               ###\n");
    printf("###            0. Voltar ao menu anterior                                    ###\n");
    printf("###                                                                         ###\n");
    printf("###            Escolha a opção desejada: ");
    scanf("%c", &op);
    getchar();
    printf("###                                                                         ###\n");
    printf("###                                                                         ###\n");
    printf("\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}


void tela_cadastrar_aluno(void) {
    system("clear||cls");
    printf("\n");
    printf("\n");
    printf("###                                                                         ###\n");
    printf("###       -------------------------------------------------------         ###\n");
    printf("###        ########################################################      ###\n");
    printf("###            - - - - - Agenda de compromissos - - - - -                ###\n");
    printf("###        ########################################################      ###\n");
    printf("###       -------------------------------------------------------         ###\n");
    printf("###               Developed by @flgorgonio -- since Mar, 2020               ###\n");
    printf("###                                                                         ###\n");
    printf("\n");
    printf("###                                                                         ###\n");
    printf("###    ########################################################          ###\n");
    printf("###            - - - - -      Cadastrar     - - - - -                    ###\n");
    printf("###    ########################################################          ###\n");
    printf("###                                                                         ###\n");
    printf("###            Compromisso (apenas números):                                  ###\n");
    printf("###            Nome completo:                                               ###\n");
    printf("###            Hora                                                       ###\n");
    printf("###            Data  (dd/mm/aaaa):                                        ###\n");
    printf("###            Celular  (apenas números):                                   ###\n");
    printf("###                                                                         ###\n");
    printf("###                                                                         ###\n");
    printf("\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}


void tela_pesquisar_aluno(void) {
    system("clear||cls");
    printf("\n");
    printf("\n");
    printf("###                                                                         ###\n");
    printf("***       -------------------------------------------------------         ###\n");
    printf("########################################################################\n");
    printf("           --------  Agenda de compromissos  ------                     \n");
    printf("########################################################################\n");
    printf("         -------------------------------------------------------          ###\n");
    printf("###               Developed by @flgorgonio -- since Mar, 2020               ###\n");
    printf("###                                                                         ###\n");
    printf("************************************************************************\n");
    printf("###                                                                         ###\n");
    printf("###    ########################################################          ###\n");
    printf("###       - - - - - - - - - listar compromissos - - - - - - - -          ###\n"); 
    printf("###    ########################################################          ###\n");
    printf("###                                                                         ###\n");
    printf("###            Informe a  (apenas números):                        ###\n");
    printf("###                                                                         ###\n");
    printf("###                                                                         ###\n");
    printf("######################################################################\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}


void tela_alterar_aluno(void) {
    system("clear||cls");
    printf("\n");
    printf("\n");
    printf("###                                                                         ###\n");
    printf("###       -------------------------------------------------------         ###\n");
    printf("###        ########################################################      ###\n");
    printf("###             - - - -  Agenda de Compromissos  - - - -                  ###\n");
    printf("###        ########################################################      ###\n");
    printf("###       -------------------------------------------------------         ###\n");
    printf("###               Developed by @flgorgonio -- since Mar, 2020               ###\n");
    printf("###                                                                         ###\n");
    printf("\n");
    printf("###                                                                         ###\n");
    printf("###    ########################################################          ###\n");
    printf("###           - - - - - - - -  Alterar Evento  - - - - - - -              ###\n");
    printf("###    ########################################################          ###\n");
    printf("###                                                                         ###\n");
    printf("###            Informe a matrícula (apenas números):                        ###\n");
    printf("###                                                                         ###\n");
    printf("###                                                                         ###\n");
    printf("\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}


void tela_excluir_evento(void) {
    system("clear||cls");
    printf("\n");
    printf("\n");
    printf("###                                                                         ###\n");
    printf("###       -------------------------------------------------------         ###\n");
    printf("###        ########################################################      ###\n");
    printf("###          - - - -   Escola de Idiomas Língua Solta   - - - -          ###\n");
    printf("###        ########################################################      ###\n");
    printf("###       -------------------------------------------------------         ###\n");
    printf("###               Developed by @flgorgonio -- since Mar, 2020               ###\n");
    printf("###                                                                         ###\n");
    printf("\n");
    printf("###                                                                         ###\n");
    printf("###    ########################################################          ###\n");
    printf("###            - - - - - - - - Excluir evento - - - - - - -              ###\n");
    printf("###    ########################################################          ###\n");
    printf("###                                                                         ###\n");
    printf("###            Informe compromisso (apenas números):                        ###\n");
    printf("###                                                                         ###\n");
    printf("###                                                                         ###\n");
    printf("\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}

// teste





/*int main() {
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
        printf("Nome: %s, Data: %s, Hora: %s, Prioridade: %d\n");
               agenda->compromissos[i].nome;
               agenda->compromissos[i].data;
               agenda->compromissos[i].hora;
               agenda->compromissos[i].prioridade;
    }
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
  }
*/