#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese"); // PARA PODER USAR ACENTOS
    float tarifa=0 //TARIFA A SER ATIBU�DA
    ,pot // POT�NCIA
    ,AcConsumo=0 // ACUMULADOR DA QUANTIA DE CONSUMO
    ,total=0 // VALOR A SER PAGO ANTES DO AJUSTE DOS IMPOSTOS
    ,ValTotAjust=0 // VALOR A SER PAGO NO FINAL
    ,consumo=0 //CONSUMO DE WATTS POR APARELHO
    ,impostos = 0.3626;//VALOR DOS IMPOSTOS SOMADOS
    int qa=0 // QUANTIDADE DE APARELHOS
    ,qdm=0 // QUANTIDADE DE DIAS POR M�S
    ,qhd=0 // QUANTIDADE DE HORAS POR DIA
    ,setor=0 // VARI�VEL PARA CONTROLAR A ENTRADA DE UM NOVO SETOR
    ,aparelho=0;// SABER SE TEM O APARELHO OU N�O

    printf("\n____________________________________________________________________________________________");
    printf("\n|BEM VINDO AO SIMULADOR DE ENERGIA DO IFBA, INFORME A TARIFA DE ENERGIA E VAMOS CONTINUAR !  |\n");//IN�CIO DO PROGRAMA
    printf("RESPOSTA : ");
    scanf("%f",&tarifa);
    setor=1;//FOR�ANDO ENTRADA NO LOOP

    while(setor==1){
        system("cls");//LIMPAR TELA
        printf("TEM AR CONDICIONADO ? (DIGITE 1 PARA SIM, 0 PARA N�O)");
        scanf("%d",&aparelho);

        if(aparelho==1){
            printf("QUAL A QUANTIA ? ");
            scanf("%d", &qa);
            printf("QUAL A POT�NCIA ? ");
            scanf("%f",&pot);
            pot=pot/1000;
            printf("QUANTAS HORAS PASSA LIGADO POR DIA ? ");
            scanf("%d",&qhd);
            printf("QUANTOS DIAS NO M�S SE USA ? ");
            scanf("%d",&qdm);

            consumo=((qhd*qdm)*pot)*qa;
            AcConsumo=AcConsumo+consumo;
        }

        system("cls");//LIMPAR TELA
        printf("TEM GELADEIRA ? (DIGITE 1 PARA SIM, 0 PARA N�O)");
        scanf("%d",&aparelho);

        if(aparelho==1){
            printf("QUAL A QUANTIA ? ");
            scanf("%d", &qa);
            printf("QUAL A POT�NCIA ? ");
            scanf("%f",&pot);
            pot=pot/1000;
            printf("QUANTAS HORAS PASSA LIGADO POR DIA ? ");
            scanf("%d",&qhd);
            printf("QUANTOS DIAS NO M�S SE USA ? ");
            scanf("%d",&qdm);

            consumo=((qhd*qdm)*pot)*qa;
            AcConsumo=AcConsumo+consumo;
        }

        system("cls");//LIMPAR TELA
        printf("TEM LAMPADA ? (DIGITE 1 PARA SIM, 0 PARA N�O)");
        scanf("%d",&aparelho);

        if(aparelho==1){
            printf("QUAL A QUANTIA ? ");
            scanf("%d", &qa);
            printf("QUAL A POT�NCIA ? ");
            scanf("%f",&pot);
            pot=pot/1000;
            printf("QUANTAS HORAS PASSA LIGADO POR DIA ? ");
            scanf("%d", &qhd);
            printf("QUANTOS DIAS NO M�S SE USA ? ");
            scanf("%d",&qdm);

            consumo=((qhd*qdm)*pot)*qa;
            AcConsumo=AcConsumo+consumo;
        }

        system("cls");//LIMPAR TELA
        printf("TEM TV ? (DIGITE 1 PARA SIM, 0 PARA N�O)");
        scanf("%d",&aparelho);

        if(aparelho==1){
            printf("QUAL A QUANTIA ? ");
            scanf("%d", &qa);
            printf("QUAL A POT�NCIA ? ");
            scanf("%f",&pot);
            pot=pot/1000;
            printf("QUANTAS HORAS PASSA LIGADO POR DIA ? ");
            scanf("%d",&qhd);
            printf("QUANTOS DIAS NO M�S SE USA ? ");
            scanf("%d",&qdm);

            consumo=((qhd*qdm)*pot)*qa;
            AcConsumo=AcConsumo+consumo;
        }

        system("cls");//LIMPAR TELA
        printf("TEM COMPUTADOR ? (DIGITE 1 PARA SIM, 0 PARA N�O)");
        scanf("%d",&aparelho);

        if(aparelho==1){
            printf("QUAL A QUANTIA ? ");
            scanf("%d", &qa);
            printf("QUAL A POT�NCIA ? ");
            scanf("%f",&pot);
            pot=pot/1000;
            printf("QUANTAS HORAS PASSA LIGADO POR DIA ? ");
            scanf("%d",&qhd);
            printf("QUANTOS DIAS NO M�S SE USA ? ");
            scanf("%d",&qdm);

            consumo=((qhd*qdm)*pot)*qa;
            AcConsumo=AcConsumo+consumo;
        }

        system("cls");//LIMPAR TELA
        printf("DESEJA ADCIONAR UM NOVO SETOR ? (DIGITE 1 PARA SIM, 0 PARA N�O)");
        scanf("%d",&setor);
    }

    system("cls");//LIMPAR TELA
    total=tarifa*AcConsumo; //VALOR A SER PAGO ANTES DO AJUSTE DOS IMPOSTOS
    ValTotAjust=(total*impostos)+total;// VALOR A SER PAGO NO FINAL

    printf("\n------------------------------------------------------------");
    printf("\n|O TOTAL DE CONSUMO EM KWH � : %f",AcConsumo);
    printf("\n|O TOTAL EM REAIS CONSUMIDO � : %f",total);
    printf("\n|O TOTAL REAJUSTADO A SER PAGO FOI DE : %f", ValTotAjust);
    printf("\n------------------------------------------------------------");
}
