
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "agenda.h"
#include "sobre.h"

//###             Universidade Federal do Rio Grande do Norte                ###
//###                 Centro de Ensino Superior do Seridó                    ###
//###               Departamento de Computação e Tecnologia                  ###
//###                  Disciplina DCT1106 -- Programação                     ###
//###                  Projeto Agenda compromissos                           ###
//###             Developed by @GEOCASTASOUZA -- since Mar, 2023             ###



//
// Programa principal
int main(void) {
    tela_menu_principal();
    tela_sobre();
    tela_equipe();
    tela_menu_compromi();
    tela_cadastrar_compromi();
    tela_pesquisar_compromi();
    tela_alterar_compromi();
    tela_excluir_compromi();
    return 0;
}


void tela_menu_principal(void) {
    char op;
    system("clear||cls");
    printf("\n");
    printf("##############################################################################\n");
    printf("###                                                                        ###\n");
    printf("###             Universidade Federal do Rio Grande do Norte                ###\n");
    printf("###                 Centro de Ensino Superior do Seridó                    ###\n");
    printf("###               Departamento de Computação e Tecnologia                  ###\n");
    printf("###                  Disciplina DCT1106 -- Programação                     ###\n");
    printf("###                  Projeto Agenda comprimissos                           ###\n");
    printf("###           Developed by @geocastasouza -- since Mar, 2023               ###\n");
    printf("###                                                                        ###\n");
    printf("##############################################################################\n");
    printf("###                                                                        ###\n");
    printf("###            - - - - - AGENDA DE COMPROMISSOS - - - - -                  ###\n");
    printf("###                                                                        ###\n");
    printf("###            1. Cadastrar compromisso                                    ###\n");
    printf("###            2. Listar compromisso                                       ###\n");
    printf("###            3. Editar copromisso                                        ###\n");
    printf("###            4. Prioridade do evento                                     ###\n");
    printf("###            5. Excluir compromisso                                      ###\n");
    printf("###            0. Sair                                                     ###\n");
    printf("###                                                                        ###\n");
    printf("###            Escolha a opção desejada: ");
    scanf("%c", &op);
    getchar();
    printf("###                                                                        ###\n");
    printf("##############################################################################\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}


void tela_sobre(void) {
    system("clear||cls");
    printf("\n");
    printf("##############################################################################\n");
    printf("###                                                                        ###\n");
    printf("###             Universidade Federal do Rio Grande do Norte                ###\n");
    printf("###                 Centro de Ensino Superior do Seridó                    ###\n");
    printf("###               Departamento de Computação e Tecnologia                  ###\n");
    printf("###                  Disciplina DCT1106 -- Programação                     ###\n");
    printf("###               Projeto Agenda de compromissos                           ###\n");
    printf("###               Developed by @Geocastasouza                              ###\n");
    printf("###                                                                        ###\n");
    printf("##############################################################################\n");
    printf("###                                                                        ###\n");
    printf("###                = = = = Agenda compromisso = = = = =                    ###\n");
    printf("###                                                                        ###\n");
    printf("### Programa exemplo utilizado na disciplina DCT1106 - Programação, para   ###\n");
    printf("### fins didáticos de ilustração. O programa contém os principais módulos  ###\n");
    printf("### e funcionalidades que serão exigidos na avaliação dos projetos a serem ###\n");
    printf("### desenvolvidos,nesse por exemplo sera uma agenda de compromissos evetos ###\n");
    printf("### pra melhor organização dos eventos do dia-dia.                         ###\n");
    printf("###                                                                        ###\n");
    printf("##############################################################################\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}


void tela_equipe(void) {
    system("clear||cls");
    printf("\n");
    printf("##############################################################################\n");
    printf("###                                                                        ###\n");
    printf("###             Universidade Federal do Rio Grande do Norte                ###\n");
    printf("###                 Centro de Ensino Superior do Seridó                    ###\n");
    printf("###               Departamento de Computação e Tecnologia                  ###\n");
    printf("###                  Disciplina DCT1106 -- Programação                     ###\n");
    printf("###                  Agenda de Compromissos                                ###\n");
    printf("###             Developed by @geocastasouza-- since Mar, 2023              ###\n");
    printf("###                                                                        ###\n");
    printf("##############################################################################\n");
    printf("###                                                                        ###\n");
    printf("###                    Gestao de compromissos                              ###\n");
    printf("###                                                                        ###\n");
    printf("###            Este projeto exemplo foi desenvolvido por:                  ###\n");
    printf("###            Dis.Geocasta Aves de Souza                                  ###\n");
    printf("###            Prof. Flavius Gorgônio                                      ###\n");
    printf("###            E-mail:geocastasouza9@gmail.com                             ###\n");
    printf("###            Redes sociais: @gecasta                                     ###\n");
    printf("###  Git: https://github.com/@geocastasouza/agenda-de-compromissos.git     ###\n");
    printf("###                                                                        ###\n");
    printf("##############################################################################\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
} 


void tela_menu_compromi(void) {
    char op;
    system("clear||cls");
    printf("\n");
    printf("##############################################################################\n");
    printf("###                                                                        ###\n");
    printf("###       -------------------------------------------------------          ###\n");
    printf("###       ########################################################         ###\n");
    printf("###             - - - -    Agenda de Compromissos  - - - -                 ###\n");
    printf("###       ########################################################         ###\n");
    printf("###       -------------------------------------------------------          ###\n");
    printf("###              Developed by @geocastasouza -- since Mar, 2023            ###\n");
    printf("###                                                                        ###\n");
    printf("\n");
    printf("###                                                                        ###\n");
    printf("###       ########################################################         ###\n");
    printf("###                - - - - - -  Menu Compromisso  - - - - - -              ###\n");
    printf("###       ########################################################         ###\n");
    printf("###                                                                        ###\n");
    printf("###           1. Cadastrar um novo compromisso                             ###\n");
    printf("###           2. Pesquisar os dados de um comopromisso                     ###\n");
    printf("###           3. Atualizar o cadastro de um compromisso                    ###\n");
    printf("###           4. Excluir-lo do sistema compromisso                         ###\n");
    printf("###           0. Voltar ao menu anterior                                   ###\n");
    printf("###                                                                        ###\n");
    printf("###            Escolha a opção desejada: ");
    scanf("%c", &op);
    getchar();
    printf("###                                                                        ###\n");
    printf("###                                                                        ###\n");
    printf("\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}


void tela_cadastrar_compromi(void) {
    system("clear||cls");
    printf("\n");
    printf("\n");
    printf("###                                                                         ###\n");
    printf("###       -------------------------------------------------------           ###\n");
    printf("###      ########################################################           ###\n");
    printf("###            - - - - - Agenda de compromissos - - - - -                   ###\n");
    printf("###      ########################################################           ###\n");
    printf("###       -------------------------------------------------------           ###\n");
    printf("###               Developed by @geocastasouza -- since Mar, 2023            ###\n");
    printf("###                                                                         ###\n");
    printf("\n");
    printf("###                                                                         ###\n");
    printf("###     ########################################################            ###\n");
    printf("###            - - - - -      Cadastrar     - - - - -                       ###\n");
    printf("###     ########################################################            ###\n");
    printf("###                                                                         ###\n");
    printf("###             Compromisso:                                                ###\n");
    printf("###             Nome completo:                                              ###\n");
    printf("###             Hora:                                                       ###\n");
    printf("###             Data (dd/mm/aaaa):                                          ###\n");
    printf("###             Prioridade:                                                 ###\n");
    printf("###                                                                         ###\n");
    printf("###                                                                         ###\n");
    printf("\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}


void tela_pesquisar_compromi(void) {
    system("clear||cls");
    printf("\n");
    printf("\n");
    printf("###                                                                        ###\n");
    printf("###         -------------------------------------------------------        ###\n");
    printf("##############################################################################\n");
    printf("###            --------  Agenda de compromissos  ------                    ###\n");
    printf("##############################################################################\n");
    printf("###         -------------------------------------------------------        ###\n");
    printf("###              Developed by @geocastasouza -- since Mar, 2023            ###\n");
    printf("###                                                                        ###\n");
    printf("##############################################################################\n");
    printf("###                                                                        ###\n");
    printf("###      ########################################################          ###\n");
    printf("###       - - - - - - - - - listar compromissos - - - - - - - -            ###\n"); 
    printf("###      ########################################################          ###\n");
    printf("###                                                                        ###\n");
    printf("###            Informe o nome:                                             ###\n");
    printf("###                                                                        ###\n");
    printf("###                                                                        ###\n");
    printf("##############################################################################\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}


void tela_alterar_compromi(void) {
    system("clear||cls");
    printf("\n");
    printf("\n");
    printf("###                                                                        ###\n");
    printf("###       -------------------------------------------------------          ###\n");
    printf("###       ########################################################         ###\n");
    printf("###            - - - -  Agenda de Compromissos  - - - -                    ###\n");
    printf("###       ########################################################         ###\n");
    printf("###        -------------------------------------------------------         ###\n");
    printf("###                                                                        ###\n");
    printf("\n");
    printf("###                                                                        ###\n");
    printf("###      ########################################################          ###\n");
    printf("###        - - - - - - - -  Alterar Evento  - - - - - - -                  ###\n");
    printf("###      ########################################################          ###\n");
    printf("###                                                                        ###\n");
    printf("###           Informe o nome :                                             ###\n");
   
    printf("\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}


void tela_excluir_compromi(void) {
    system("clear||cls");
    printf("\n");
    printf("\n");
    printf("###                                                                         ###\n");
    printf("###       -------------------------------------------------------           ###\n");
    printf("###       ########################################################          ###\n");
    printf("###             - - - -   Agenda compromissos    - - - -                    ###\n");
    printf("###       ########################################################          ###\n");
    printf("###        -------------------------------------------------------          ###\n");
    printf("###            Developed by @geocastasouza -- since mar, 2023               ###\n");
    printf("###                                                                         ###\n");
    printf("\n");
    printf("###                                                                         ###\n");
    printf("###       ########################################################          ###\n");
    printf("###          - - - - - - - - Excluir evento - - - - - - -                   ###\n");
    printf("###       ########################################################          ###\n");
    printf("###                                                                         ###\n");
    printf("###            Informe compromisso nome :                                   ###\n");
    printf("\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}



