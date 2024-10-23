#include <stdio.h>

main()
{

        printf("O software a seguir se trata apenas de conteudo\n");
        printf("informativo sobre o jogo ficticio \"GTA V\".\n\n");
        printf("Continuar...");
        scanf("%c");

        system("cls");

    char opcao = '  ';

    while(opcao != 's')
    {
        printf("Qual golpe voce deseja fazer?\n\n");
        printf("1- Cayo Perico\n");
        printf("2- Cassino Diamond\n\n");
        printf("Digite \"s\" para sair\n\n");
        printf("Escolha uma opcao: ");
        scanf(" %c", &opcao);

        system("cls");

        switch(opcao)
        {
            case '1':
            {
                cayo();
                break;
            }
            case '2':
            {
                cassino();
                break;
            }
            case '3':
            {
                break;
            }
        }
    }

}

void cassino()
{
    char opcao = ' ';

    while(opcao != 's')
    {
        printf("Quais dados voce deseja visualizar:\n");
        printf("1- itens principais\n\n");
        printf("Digite \"s\" para sair\n\n");
        scanf(" %c", &opcao);


        system("cls");

        switch(opcao)
        {
            case '1':
            {
                printf(" Itens        Valor \n");
                printf("Diamond   - $3.619.000\n");
                printf("Gold      - $2.843.000\n");
                printf("Painting  - $2.585.000\n");
                printf("Cash      - $2.326.000\n");

                system("pause");
                system("cls");

                break;
            }
        }
    }
}

void cayo()
{
    char opcao = ' ';

    while(opcao != 's')
    {
        printf("Quais dados voce deseja visualizar:\n");
        printf("1- itens principais\n");
        printf("2- itens secundarios\n\n");
        printf("Digite \"s\" para sair\n\n");
        scanf(" %c", &opcao);


        system("cls");

        switch(opcao)
        {
            case '1':
            {
                printf("    Itens           Valor \n");
                printf("Black Panther - $1.900.000\n");
                printf("Pink Diamond  - $1.300.000\n");
                printf("Bearer Bonds  - $1.100.000\n");
                printf("Ruby Necklace - $1.000.000\n");
                printf("Tequilla      - $900.000\n\n");

                system("pause");
                system("cls");

                break;
            }
            case '2':
            {
                printf(" Itens      Valor \n");
                printf("Gold     - $332.184\n");
                printf("Cocaine  - $220.095\n");
                printf("Painting - $189.500\n");
                printf("Weed     - $147.870\n");
                printf("Cash     - $90.000\n\n");

                system("pause");
                system("cls");

                break;
            }
        }
    }
}
