//ER2_LetíciaGrazielly_LuizGabriel_VivianPetrille.c//
#include <stdio.h>

int main()
{
    int num, i, alta=0, media=0, baixa=0;
    float P, MO, total_p_alta=0, total_p_media=0, total_p_baixa=0;
    float total_mo_alta=0, total_mo_media=0, total_mo_baixa=0;
    
    printf("----- Classificador de Fertilidade do Solo -----\n");
    printf("\nInsira a quantidade de amostras: ");
    scanf("%d", &num);
    
    for(i=0; i<num; i++)
    {
        printf("\n%d° amostra: ", i+1);
        printf("\nTeor de fósforo na amostra[mg/dm³]: ");
        scanf("%f", &P);
        if(P<0)
        {
            printf("\n-----VALOR INVÁLIDO!!-----");
            return 0;
        }
        printf("\nTeor de matéria orgânica na amostra[g/kg]: ");
        scanf("%f", &MO);
        if(MO<0)
        {
            printf("\n-----VALOR INVÁLIDO!!-----");
            return 0;
        }
        
        if(P>= 20 && MO>= 30)
        {
            printf("\n----- Alta fertilidade!! -----\n");
            alta ++;
            total_p_alta += P;
            total_mo_alta += MO;
        }
        else if((P>=10 && MO>=15) && (P<20 || MO<30))
        {
            printf("\n----- Média fertilidade!! -----\n");
            media++;
            total_p_media += P;
            total_mo_media += MO;
        }
        else if(P<10 || MO<15)
        {
            printf("\n----- Baixa fertilidade!! -----\n");
            baixa++;
            total_p_baixa += P;
            total_mo_baixa += MO;
        }
    }
    
    printf("\n\n----- Resultados: -----\n");
    printf("\nHá %d amostras de alta fertilidade.", alta);
    if(alta>0)
    {
        printf("\nMédia de fósforo de alta fertilidade = %.2f[mg/dm³].", total_p_alta/alta);
        printf("\nMédia de matéria orgânica de alta fertilidade = %.2f[g/kg].\n", total_mo_alta/alta);
    }else printf("\nNenhuma amostra!");
    
    printf("\nHá %d amostras de média fertilidade.", media);
    if(media>0)
    {
        printf("\nMédia de fósforo de média fertilidade = %.2f[mg/dm³].", total_p_media/media);
        printf("\nMédia de matéria orgânica de média fertilidade = %.2f[g/kg].\n", total_mo_media/media);
    }else printf("\nNenhuma amostra!");
    
    printf("\nHá %d amostras de baixa fertilidade.", baixa);
    if(baixa>0)
    {
        printf("\nMédia de fósforo de baixa fertilidade = %.2f[mg/dm³].", total_p_baixa/baixa);
        printf("\nMédia de matéria orgânica de baixa fertilidade = %.2f[g/kg].\n", total_mo_baixa/baixa);
    }else printf("\nNenhuma amostra!");
    
    return 0;
}