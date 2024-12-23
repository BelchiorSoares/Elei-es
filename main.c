#include <stdio.h>
#include <stdlib.h>

void info(void);
void infosala(void);

int main(void)
{
    // cadastro de funcionários
    char prog1[20] = "Nenhum", prog2[20] = "Nenhum", prog3[20] = "Nenhum", prog4[20] = "Nenhum", prog5[20] = "Nenhum", prog6[20] = "Nenhum", lider2[20] = "Nenhum";
    char reda8[20] = "Nenhum", reda10[20] = "Nenhum", reda12[20] = "Nenhum";
    char lider4[50] = "Chelsia", lider6[50] = "Sebastiao";
    // Salario dos Funcionários
    float salaprog1 = 0, salaprog2 = 0, salaprog3 = 0, salaprog4 = 0, salaprog5 = 0, salaprog6 = 0, salalider2 = 0;
    float salareda8 = 0, salareda10 = 0, salareda12 = 0;

    // Variaveis complementares
    float SFA = 600000;
    int escolha = 0;
    char cadtLider = 0, cadtReda = 0, casado = 0;
    int votar, idadevotar = 0;
    int  votar1 = 0,votar2 = 0,votar3 = 0;

    do
    {
        system("clear");
        // Criacao do Menu
        printf("\t\tEmpresa Gelson Morais\n");
        printf("Eleições Americanas ocorridas a 5 de Novembro de 2024.\n");
        printf("1 - Cadastrar Funcionários\n");
        printf("2 - Aribuição de Salários\n");
        printf("3 - Lista dos Funcionarios\n");
        printf("4 - Eleger Candidato\n");
        printf("5 - Resultados das Eleições\n");
        printf("0 - sair\n");
        printf("Faça a sua escolha Aqui: ");
        scanf("%d", &escolha);

        // Processamento de dados
        switch (escolha)
        {
        case 0:
            break;
        case 1:
            system("clear");
            printf("\tCadastrar novos Programadores\n");
            printf("Nome do Programador para o grupo I: ");
            scanf("%s", &prog1);
            printf("Nome do Programador para o grupo III: ");
            scanf("%s", &prog2);
            printf("Nome do Programador para o grupo V: ");
            scanf("%s", &prog3);
            printf("Nome do Programador para o grupo VII: ");
            scanf("%s", &prog4);
            printf("Nome do Programador para o grupo IV: ");
            scanf("%s", &prog5);
            printf("Nome do Programador para o grupo XI: ");
            scanf("%s", &prog6);
            printf("Progamadores cadastrados com sucesso!");
            info();getchar();getchar();system("clear");
            printf("O grupo numero II precisa de Lider,Pretende cadastrar?(s/n)");
            scanf("%c", &cadtLider);
            if (cadtLider == 's')
            {
                printf("Nome do Lider para o grupo II: ");
                scanf("%s", &lider2);
                printf("Lider cadastrado com sucesso!");
                info();
                getchar();
                getchar();
                system("clear");
                printf("O grupo numero VIII , X e XII precisam de Redactores,Pretende cadastrar?(s/n): ");
                scanf("%c", &cadtReda);
                if (cadtReda == 's')
                {
                    printf("Nome do Redator para o grupo VIII: ");
                    scanf("%s", &reda8);
                    printf("Nome do Redator para o grupo X: ");
                    scanf("%s", &reda10);
                    printf("Nome do Redator para o grupo XII: ");
                    scanf("%s", &reda12);
                    printf("Redactores cadastrado com sucesso!");
                    getchar();
                    getchar();
                    system("clear");
                }
                else if (cadtReda == 'n')
                {
                    printf("Redactores nao cadastrado!\n");
                    getchar();
                    getchar();
                    system("clear");
                }
            }
            else if (cadtLider == 'n')
            {
                printf("Lider nao cadastrado!\n");
                info();
                getchar();
                getchar();
                system("clear");
            }
            system("clear");
            break;
        case 2:
            system("clear");
            printf("\tAtribuição salarial aos novos funcionarios\n");
            printf("Salario do Programador para o grupo I: ");
            scanf("%f", &salaprog1);
            if (salaprog1 >= SFA)
            {
                infosala();
                info();
                getchar();
                getchar();
                system("clear");
            }
            printf("Salario do Programador para o grupo III: ");
            scanf("%f", &salaprog2);
            if (salaprog2 >= SFA)
            {
                infosala();
                info();
                getchar();
                getchar();
                system("clear");
            }
            printf("Salario do Programador para o grupo V: ");
            scanf("%f", &salaprog3);
            if (salaprog3 >= SFA)
            {
                infosala();
                info();
                getchar();
                getchar();
                system("clear");
            }
            printf("Salario do Programador para o grupo VII: ");
            scanf("%f", &salaprog4);
            if (salaprog4 >= SFA)
            {
                infosala();
                info();
                getchar();
                getchar();
                system("clear");
            }
            printf("Salario do Programador para o grupo IV: ");
            scanf("%f", &salaprog5);
            if (salaprog5 >= SFA)
            {
                infosala();
                info();
                getchar();
                getchar();
                system("clear");
            }
            printf("Salario do Programador para o grupo XI: ");
            scanf("%f", &salaprog6);
            if (salaprog6 >= SFA)
            {
                infosala();
                info();
                getchar();
                getchar();
                system("clear");
            }
            printf("Salario dos Progamadores atribuidos com sucesso!");
            info();getchar();getchar();system("clear");
            printf("O Lider do grupo II precisa de um Salario,Pretende atribuir?(s/n): ");
            scanf("%c", &cadtLider);
            if (cadtLider == 's')
            {
                printf("Salario do Lider para o grupo II: ");
                scanf("%f", &salalider2);
                if (salalider2 >= SFA)
                {
                    infosala();
                    info();
                    getchar();
                    getchar();
                    system("clear");
                }
                printf("Salario Lider atribuido com sucesso!");
                info();
                getchar();
                getchar();
                system("clear");
                printf("O grupo numero VIII , X e XII precisam de Salario para os Redactores,Pretende atribuir?(s/n): ");
                scanf("%c", &cadtReda);
                if (cadtReda == 's')
                {
                    printf("Salario do Redator para o grupo VIII: ");
                    scanf("%f", &salareda8);
                    if (salareda8 >= SFA)
                    {
                        infosala();
                        info();
                        getchar();
                        getchar();
                        system("clear");
                    }
                    printf("Salario do Redator para o grupo X: ");
                    scanf("%f", &salareda10);
                    if (salareda10 >= SFA)
                    {
                        infosala();
                        info();
                        getchar();
                        getchar();
                        system("clear");
                    }
                    printf("Salario do Redator para o grupo XII: ");
                    scanf("%f", &reda12);
                    if (salareda12 >= SFA)
                    {
                        infosala();
                        info();
                        getchar();
                        getchar();
                        system("clear");
                    }
                    printf(" Salario dos Redatores atribuidos com sucesso!");
                    getchar();
                    getchar();
                    system("clear");
                }
                else if (cadtReda == 'n')
                {
                    printf(" Salario dos Redactores nao Atribuidos!\n");
                    getchar();
                    getchar();
                    system("clear");
                }
            }
            else if (cadtLider == 'n')
            {
                printf("Lider nao cadastrado!\n");
                info();
                getchar();
                getchar();
                system("clear");
            }
            printf("Os novos funcionarios sao casados?(s/n): ");
            scanf("%c", &casado);
            if (cadtLider == 's')
            {
                salaprog1 *= 0.05;
                salaprog2 *= 0.05;
                salaprog3 *= 0.05;
                salaprog4 *= 0.05;
                salaprog5 *= 0.05;
                salaprog6 *= 0.05;
                salalider2 *= 0.05;
                salareda8 *= 0.05;
                salareda10 *= 0.05;
                salareda12 *= 0.05;
            }
            system("clear");
            break;
        case 3:
            system("clear");
            printf("\t\tLista dos funcionarios\n");
            printf("Nome: %s \tSalario: %.3f kzs\tGrupo: I\tCargo: Programador\n", prog1, salaprog1);
            printf("Nome: %s \tSalario: %.3f kzs\tGrupo: III\tCargo: Programador\n", prog2, salaprog2);
            printf("Nome: %s \tSalario: %.3f kzs\tGrupo: V\tCargo: Programador\n", prog3, salaprog3);
            printf("Nome: %s \tSalario: %.3f kzs\tGrupo: VII\tCargo: Programador\n", prog4, salaprog4);
            printf("Nome: %s \tSalario: %.3f kzs\tGrupo: IX\tCargo: Programador\n", prog5, salaprog5);
            printf("Nome: %s \tSalario: %.3f kzs\tGrupo: XI\tCargo: Programador\n", prog6, salaprog6);
            printf("Nome: %s \tSalario: %.3f kzs\tGrupo: II\tCargo: Lider\n", lider2, salalider2);
            printf("Nome: %s \tSalario: %.3f kzs\tGrupo: VIII\tCargo: Redator\n", reda8, salareda8);
            printf("Nome: %s \tSalario: %.3f kzs\tGrupo: X\tCargo: Redator\n", reda10, salareda10);
            printf("Nome: %s \tSalario: %.3f kzs\tGrupo: XII\tCargo: Redator\n", reda12, salareda12);
            info();getchar();getchar();system("clear");
            break;
        case 4:
            system("clear");
            printf("\t\tEleiçoes dos cadidadtos\n");
            printf("Os líderes, analistas e os redactores serão os eleitores votantes\n");
            for (int i = 0; i < 6; i++)
            {
                printf("Informe a sua idade: ");
                scanf("%d", &idadevotar);
                if (idadevotar >= 21 && idadevotar < 30)
                {
                    system("clear");
                    printf("\t\tEleiçoes dos cadidadtos\n");
                    printf("1.Nome: %s \tGrupo: II\tCargo: Lider\n", lider2);
                    printf("2.Nome: %s \tGrupo: IV\tCargo: Lider\n", lider4);
                    printf("3.Nome: %s \tGrupo: VI\tCargo: Lider\n", lider6);
                    printf("vote no seu candidato aqui: ");
                    scanf("%d", &votar);

                    switch (votar)
                    {
                    case 1:
                        votar1 += votar;
                        printf("o seu voto efetuado com sucesso!");
                        info();
                        getchar();
                        getchar();
                        break;
                    case 2:
                        votar2 += votar;
                        printf("o seu voto efetuado com sucesso!");
                        info();
                        getchar();
                        getchar();
                        break;
                    case 3:
                        votar3 += votar;
                        printf("o seu voto efetuado com sucesso!");
                        info();
                        getchar();
                        getchar();
                        break;
                    default:
                        printf("Candidato inexistenente,por favor vote em um canddato existente!\n");
                        break;
                    }
                }
                else
                {
                    printf("Nao podes votar, porque nao tens idade adquada para tal!");
                    info();getchar();getchar();system("clear");
                }
            }
            printf("Eleições Termnadas!");
            info();getchar();getchar();system("clear");
            break;
        case 5:
            system("clear");
            printf("\t\tResultados das Eleições\n");
            printf("1.Candidato: %s \tGrupo: II\tCargo: Lider\tNº de votos: %d\n", lider2, votar1);
            printf("2.Candidato: %s \tGrupo: IV\tCargo: Lider\tNº de votos: %d\n", lider4, votar2);
            printf("3.Candidato: %s \tGrupo: VI\tCargo: Lider\tNº de votos: %d\n", lider6, votar3);
            if (votar1 > votar2 || votar3)
            {
                printf("\nO candidato de nome %s do Grupo: II que atendia pelo Cargo de Lider, é o novo Presidente com Nº de votos de: %d\n", lider2, votar1);
            }
            else if (votar2 > votar1 || votar3)
            {
                printf("\nO candidato de nome %s do Grupo: IV que atendia pelo Cargo de Lider, é o novo Presidente com Nº de votos de: %d\n", lider4, votar2);
            }
            else if (votar3 > votar1 || votar2)
            {
                printf("\nO candidato de nome %s do Grupo: VI que atendia pelo Cargo de Lider, é o novo Presidente com Nº de votos de: %d\n", lider6, votar3);
            }
            info();getchar();getchar();system("clear");
            break;
        default:
            printf("Escolha invalida, porfavor informe uma escolha valida.");
            info();getchar();getchar();system("clear");
            break;
        }
    } while (escolha != 0);
    printf("Saindo do Programa...\n");
    return 0;
}

void info(void)
{
    printf("\nPressione qualquer tecla para continuar");
}
void infosala(void)
{
    printf("Erro de salario!, Informe um salario inferior ao dos funcionarrios antigos(500000 kzs)");
}

