#include <stdio.h>
#define LIN 14
#define COL 10

void showOptions();
void createSeats(int *poltronas, char *poltronasOcupadas);
void showSeats(int *poltronas);
void showFillSeats(char *poltronasOcupadas);
int buyTicket(int poltronas[LIN][COL], char poltronasOcupadas[LIN][COL]);
void fillSeat(int poltronasOcupadas[LIN][COL], int escolhaPoltrona);

int main(){
    int poltronas[LIN][COL];
    char poltronasOcupadas[LIN][COL];
    int opcao;

    createSeats(&poltronas, &poltronasOcupadas); // preecnhe as tabelas
    
    do {
        showOptions();
        scanf(" %d", &opcao);

        switch(opcao){
            case 0: 
                printf("Fechando o programa....");
                exit(0);
            case 1:
                printf("\n--- Poltronas Disponiveis ---\n");
                buyTicket(&poltronas, &poltronasOcupadas);
                break;
            case 2:
                showSeats(poltronas);
                break;
            case 3:
                showFillSeats(poltronasOcupadas);
                break;
            default:
                printf("Opção inexistente!!");
                break;
        }
    } while (opcao != 0);
    return 0;
};

void showOptions(){
    printf("\n--- Cinema 'Ciber' ---\n");
    printf("0 - Sair\n1 - Vender Ingresso\n2 - Mostrar Plateia\n3 - Mostrar Ocupacao\n\nQual sua opcao? ");
};

void createSeats(int *poltronas, char *poltronasOcupadas){
    for (int i = 1; i <= 140; i++){
        *poltronas = i;
        poltronas++;
    }

    for (int i = 0; i < 140; i++){
        *poltronasOcupadas = '-';
        poltronasOcupadas++;
    }
};

void showSeats(int *poltronas){
    for (int i = 0; i < 140; i++){
        if(*poltronas == 0)
            printf("\t");
        else printf("\t%d ", *poltronas);
        if ((i + 1) % 10 == 0)
            printf("\n");
        poltronas++;
    }
};

void showFillSeats(char *poltronasOcupadas){
    for (int i = 0; i < 140; i++){
        if(*poltronasOcupadas == 'i')
            printf("\t\033[1;31m%c\033[0m", *poltronasOcupadas);
        else if(*poltronasOcupadas == 'm')
            printf("\t\033[1;34m%c\033[0m", *poltronasOcupadas);
        else printf("\t%c", *poltronasOcupadas);
        
        if ((i + 1) % 10 == 0)
            printf("\n");
        poltronasOcupadas++;
    }
    printf("m - meia\ni - inteira");
};

int buyTicket(int poltronas[LIN][COL], char poltronasOcupadas[LIN][COL]){
    int escolhaPoltrona;
    int *ptr = poltronas;  

    showSeats(poltronas);  
    printf("Escolha uma poltrona <1..144>: ");
    scanf("%d", &escolhaPoltrona);

    if ((escolhaPoltrona > 140) || (escolhaPoltrona < 1)){
        printf("Poltrona inexistente!\n");
        return 0;
    }

    if (*(ptr + escolhaPoltrona - 1) == 0){
        printf("A poltrona escolhida %d nao esta mais a venda, selecione outra poltrona por favor! \n ", escolhaPoltrona);
        return 0;
    }
    else {
        *(ptr + escolhaPoltrona - 1) = 0;
    }

    fillSeat(poltronasOcupadas, escolhaPoltrona);
    return 0;
};

void fillSeat(int poltronasOcupadas[LIN][COL], int escolhaPoltrona){
    char tipo;
    char *ptrO = poltronasOcupadas;

    printf("Qual o tipo do ingresso, sendo Meia('m') e Inteira('i'): ");
    scanf (" %c", &tipo);
    if(tipo == 'i')
        *(ptrO + escolhaPoltrona - 1) = tipo;
    else if(tipo == 'm')
        *(ptrO + escolhaPoltrona - 1) = tipo;    
    else printf("Tipo invalido!\n");
}