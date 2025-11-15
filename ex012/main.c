
    //leitura do mês
    printf("Digite o numero que corresde ao mes:");
    scanf("%d", &mesNum);

    //imprimindo resultados
    printf("--------------------------------------- \n");
    printf("Analizando...\n");
    printf("--------------------------------------- \n");

    switch( mesNum ){
        case 1:
            printf("O numero digitado corresponde ao mes de JANEIRO");
            break;
        case 2:
            printf("O numero digitado corresponde ao mes de FEVEREIRO");
            break;
        case 3:
            printf("O numero digitado corresponde ao mes de MARCO");
            break;
        case 4:
            printf("O numero digitado corresponde ao mes de ABRIL");
            break;
        case 5:
            printf("O numero digitado corresponde ao mes de MAIO");
            break;
        case 6:
            printf("O numero digitado corresponde ao mes de JUNHO");
            break;
        case 7:
            printf("O numero digitado corresponde ao mes de JULHO");
            break;
        case 8:
            printf("O numero digitado corresponde ao mes de AGOSTO");
            break;
        case 9:
            printf("O numero digitado corresponde ao mes de SETEMBRO");
            break;
        case 10:
            printf("O numero digitado corresponde ao mes de OUTUBRO");
            break;
        case 11:
            printf("O numero digitado corresponde ao mes de NOVEMBRO");
            break;
        case 12:
            printf("O numero digitado corresponde ao mes de DEZEMBRO");
            break;
        default:
            printf("Mes Invalido");
    }
    return 0;
}