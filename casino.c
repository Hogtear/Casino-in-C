#include "stdio.h"

int rules();

int round1();

int main()
{
    rules();

    printf("\n\n");

    round1();

    return 0;
}

int round1()
{
    char name[50];
    printf("Digite seu nome: ");
    scanf("%s", name);

    printf("\n\n");

    int deposit1;
    printf("Digite o valor do seu depósito para as apostas: ");
    scanf("%d", &deposit1);

    printf("\n\n");

    printf("Seu saldo atual é de: %d\n", deposit1);

    printf("\n\n");

    int bet1;
    printf("Digite o valor da aposta: $ ", name);
    scanf("%d", &bet1);

    printf("\n\n");

    if(bet1>deposit1)
    {
        printf("Você não tem dinheiro suficiente para fazer essa aposta!\n");
        printf("Seu saldo atual é de: %d\n", deposit1);
        printf("Insira novamente: $");
        scanf("%d", &bet1);
    }

    printf("\n\n");

    int computer1;
    computer1 = rand() % 10;

    int guess1;
    printf("adivinhe o número de 1 a 10: ");
    scanf("%d", &guess1);

    printf("\n\n");

    if(guess1>10)
    {
        printf("Você não tem dinheiro suficiente para fazer essa advinhação!\n");
        printf("Insira novamente: ");
        scanf("%d", &guess1);
    }

    printf("\n\n");

    if(guess1==computer1)
    {
        printf("Você ganhou $%d", bet1);
        printf("\n\n");

        int bet2;
        bet2 = bet1 *10;

        int new_won;
        if(bet1==deposit1)
        {
            new_won = bet2 + 0;
        }
        else
        {
            new_won = bet2 + deposit1;
        }
        printf("Seu saldo atual é de: %d\n", new_won);
    }
    else if(guess1!=computer1)
    {
        printf("Você perdeu $%d", bet1);
        printf("\n\n");

        printf("O número sorteado foi: %d\n", computer1);
        printf("\n\n");

        int new_los;
        new_los = deposit1 - bet1;

        printf("Agora seu saldo atual é de: %d\n", new_los);

        printf("\n\n");

        if(new_los==0)
        {
            printf("Você perdeu todo o seu dinheiro!\n");
            printf("Você não tem mais saldo para jogar!\n");
            printf("Game Over!\n");
        }
        else
        {
            int decision;
            printf("Pressione 1 pra 'Sim'\n");
            printf("Pressione 2 pra 'Não'\n\n");

            printf("Deseja continuar jogando? :\n");
            scanf("%d", &decision);
            printf("\n\n");

            if(decision==1)
            {
                rules();

                printf("\n\n");

                printf("Agora seu saldo atual é de: %d\n", new_los);

                printf("\n\n");

                int bet3;
                printf("Digite o valor da aposta: $ ", name);
                scanf("%d", &bet3);
                printf("\n\n");

                if(bet3>new_los)
                {
                    printf("Você não tem dinheiro suficiente para fazer essa aposta!\n");
                    printf("Seu saldo atual é de: %d\n", new_los);
                    printf("Insira novamente: $");
                    scanf("%d", &bet3);
                }

                int guess2;
                printf("adivinhe o número de 1 a 10: ");
                scanf("%d", &guess2);
                printf("\n\n");

                int computer2;
                computer2 = 9;

                if(guess2>10)
                {
                    printf("Você não tem dinheiro suficiente para fazer essa advinhação!\n");
                    printf("Insira novamente: ");
                    scanf("%d", &guess2);
                    printf("\n\n");
                }

                if(guess2==computer2)
                {
                    printf("Você ganhou $%d", bet3);
                    printf("\n\n");

                    int b;
                    b = bet3 *10;

                    int b1;
                    if(bet3==new_los)
                    {
                        b1 = b + 0;
                    }
                    else
                    {
                        b1 = b + new_los;
                    }

                    printf("Seu saldo atual é de: %d\n", b1);
                }
                else if(guess2!=computer2)
                {
                    printf("Você perdeu $%d", bet3);
                    printf("\n\n");

                    int b2;
                    b2 = new_los - bet3;

                    printf("Agora seu saldo atual é de: %d\n", b2);

                    printf("\n\n");

                    if(b2==0)
                    {
                        printf("Você perdeu todo o seu dinheiro!\n");
                        printf("Você não tem mais saldo para jogar!\n");
                        printf("Game Over!\n");
                    }
                }
            }
            else if(decision==2)
            {
                printf("Game Over!\n");
            }
        }
    }
}

int rules()
{
    printf("-----------------------------------------------\n");

    printf("REGRAS\n");

    printf("-----------------------------------------------\n");

    printf(" 1. Escolha qualquer número entre 1 a 10\n");

    printf(" 2. Se você ganhar, receberá o valor que apostou, multiplicado em 10x\n");

    printf(" 3. Se você apostar em um número errado, você perderá o montante da aposta. \n");
}