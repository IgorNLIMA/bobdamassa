#include <stdio.h>

int main ()
{
    int n1, cont;
    char nome [61];
    cont=0;
    printf ("Bem Vindos ao Show do Milhão!!!\n");
    printf ("Digite seu Nome: \n");
    scanf ("%s", &nome);

    printf ("Primeira Pergunta:\n \n");
    printf ("Qual a Cor do cavalo Branco de Napolião?\n");
    printf ("1)Branco\n2)Azul\n3)Verde\n4)Marrom\n");
    scanf ("%d", &n1);

    if (n1 == 4)
    {
        printf ("Certa Resposta\n\n");
        cont = cont + 1;
    }
    else
    {
      printf ("Resposta Errada\n\n");
    }

    printf ("Segunda Pergunta:\n \n");
    printf ("Onde está localizado o Cristo Redentor?\n");
    printf ("1)Rio de Janeiro\n2)São Paulo\n3)Carpina\n4)Xande dos Conso\n");
    scanf ("%d", &n1);

    if (n1 == 1)
    {
      printf ("Certa Resposta\n\n");
      cont = cont + 1;
    }
    else
    {
      printf ("Resposta Errada\n\n");
    }
    printf("Terceira Pergunta:\n \n");
    printf("Qual Seleção Participou de todas as edições da Copa do Mundo?\n");
    printf ("1)EUA\n2)Brasil\n3)Argentina\n4)Alemanha\n");
    scanf ("%d", &n1);

    if (n1 == 2)
    {
      printf ("Certa Resposta\n\n");
      cont = cont + 1;
    }
    else
    {
      printf ("Resposta Errada\n\n");
    }
    printf ("Quarta Pergunta:\n \n");
    printf ("Quantos anos tem o curso de Ciências da Computação?");
    printf ("\n1)5 Anos\n2)2 Anos\n3)4 anos\n4)6 anos\n");
    scanf ("%d", &n1);

    if (n1 == 3)
    {
        printf ("Certa Resposta\n\n");
        cont = cont + 1;
    }
    else
        {
        printf ("Resposta Errada\n\n");
    }
    printf ("Quinta Pergunta:\n \n");
    printf ("Quantos dias tem um ano Bisiestos?\n");
    printf("1)365\n2)366\n3)361\n4)212\n");
    scanf("%d",&n1);
    
    if(n1==2){
        printf("Certa Resposta!!\n\n");
        cont = cont + 1;
    }
    else{
        printf("Resposta Errada!!\n\n");
    }
    printf("Parabens!!! %s \n",nome);
    printf("Você fez %d ",cont);
    printf("Pontos");
    return 0;
    
    
}

