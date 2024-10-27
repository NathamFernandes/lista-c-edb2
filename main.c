#include "handlers.h"
#include "utils.h"

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opcao;

    clrscr();

    do
    {
        printMenu();
        printf("Opcao: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            handleQuestao1e2(1);
            break;
        case 2:
            handleQuestao1e2(2);
            break;
        case 3:
            handleQuestao3();
            break;
        case 4:
            handleQuestao4();
            break;
        case 5:
            handleQuestao5();
            break;
        case 6:
            handleQuestao6();
            break;
        case 7:
            handleQuestao7();
            break;
        case 8:
            handleQuestao8();
            break;
        case 9:
            handleQuestao9();
            break;
        case 10:
            handleQuestao10();
            break;
        default:
            break;
        }

        printf("\n\n");
        system("pause");
        clrscr();
    } while (opcao != -1);

    return 0;
}