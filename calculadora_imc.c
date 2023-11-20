#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#ifdef _WIN32
#define CLEAR "cls"
#else
#define CLEAR "clear"
#endif

void desenvolvedor(){
    printf("|------------------------------|\n");
    printf("|     Software feito por       |\n");
    printf("|------------------------------|\n");
    printf("|        Rômullo Moura         |\n");
    printf("|------------------------------|\n");

}
void limpar() {
  
  system(CLEAR); 
  
}
void menu(){

    printf("\n");
    printf("|------------------------------|\n");
    printf("|      Calculadora de IMC      |\n");
    printf("|------------------------------|\n");
    printf("|   Índice de Massa Corporal   |\n");
    printf("|------------------------------|\n");
    printf("|  Data de Criação 25/10/2023  |\n");
    printf("|------------------------------|\n");
    printf("|   ADS - Faculdade Senac PE   |\n");
    printf("|------------------------------|\n");
    printf("| Este software é usado para   |\n");
    printf("| calcular o IMC, medida usada |\n");
    printf("| para ver se a pessoa está    |\n");
    printf("| acima ou abaixo do seu peso  |\n");
    printf("|------------------------------|\n");

}

void classificacaoimc(){
  ;
    printf("\n");
    printf("|------------------------------------|\n");
    printf("|       IMC      |    Classificação  |\n");
    printf("|------------------------------------|\n");
    printf("|      <18,5     |   Abaixo do peso  |\n");
    printf("|------------------------------------|\n");
    printf("| 18,5<=IMC<24,9 |     Peso ideal    |\n");
    printf("|------------------------------------|\n");
    printf("| 25<= IMC <29,9 |  Excesso de peso  |\n");
    
    printf("|------------------------------------|\n");
    printf("| 30 < IMC <34,9 |  Obesidade Grau 1 |\n");
    printf("|------------------------------------|\n");
    printf("| 35<= IMC <39,9 |  Obesidade Grau 2 |\n");
    printf("|------------------------------------|\n");
    printf("|   IMC >= 40    | Obesidade Mórbida |\n");
    printf("|------------------------------------|\n");
}

int main(){

    char nome[30];
    int opcao, limpatela;
    double imc, peso, altura;
    desenvolvedor();
    menu();
    classificacaoimc();

    while (opcao != 2){
    printf("\n");
    printf("Digite o seu nome: ");
    scanf("%s", & nome);
    printf("\n");
    printf("Olá, %s, vamos calcular seu IMC, só preciso de algumas informações", nome);
    printf("\n");
    printf("\n");
    sleep(2);
    printf("Digite seu peso em kg");
    printf("\n");
    scanf("%lf", & peso);
    printf("Agora digite sua altura em metros");
    printf("\n");
    scanf("%lf", & altura);
      

    imc = peso/(altura*altura);

    sleep(2);

    if (imc<18.5){
        printf("\n");
        printf("\n");
        printf("O resultado do seu é IMC = %2.1lf", imc);
        printf("\n");
        printf("|------------------------------------|\n");
        printf("|       IMC      |    Classificação  |\n");
        printf("|------------------------------------|\n");
        printf("|      <18,5     |   Abaixo do peso  |\n");
        printf("|------------------------------------|\n");

    }else if(imc>= 18.5 && imc <25){
        
        printf("\n");
        printf("\n");
        printf("O resultado do seu é IMC = %2.1lf", imc);
        printf("\n");
        printf("|------------------------------------|\n");
        printf("|       IMC      |    Classificação  |\n");
        printf("|------------------------------------|\n");
        printf("| 18,5<=IMC<24,9 |     Peso ideal    |\n");
        printf("|------------------------------------|\n");

    }else if(imc>=25 && imc<30){
      
        printf("\n");
        printf("\n");
        printf("O resultado do seu é IMC = %2.1lf", imc);
        printf("\n");
        printf("|------------------------------------|\n");
        printf("|       IMC      |   Classificação   |\n");
        printf("|------------------------------------|\n");
        printf("|    25<=IMC<30  |  Excesso de peso  |\n");
        printf("|------------------------------------|\n");

    }else if(imc>=30 && imc<35){

        printf("\n");
        printf("\n");
        printf("O resultado do seu é IMC = %2.1lf", imc);
        printf("\n");
        printf("|------------------------------------|\n");
        printf("|       IMC      |   Classificação   |\n");
        printf("|------------------------------------|\n");
        printf("|    30<=IMC<35  |  Obesidade Grau 1 |\n");
        printf("|------------------------------------|\n");

    }else if(imc>=35 && imc<40){
          
        printf("\n");
        printf("\n");
        printf("O resultado do seu é IMC = %2.1lf", imc);
        printf("\n");
        printf("|------------------------------------|\n");
        printf("|       IMC      |   Classificação   |\n");
        printf("|------------------------------------|\n");
        printf("|    35<=IMC<40  |  Obesidade Grau 2 |\n");
        printf("|------------------------------------|\n");
    }else if(imc>=40){
      
        printf("\n");
        printf("\n");
        printf("O resultado do seu é IMC = %2.1lf", imc);
        printf("\n");
        printf("|------------------------------------|\n");
        printf("|       IMC      |   Classificação   |\n");
        printf("|------------------------------------|\n");
        printf("|    IMC >= 40   | Obesidade Mórbida |\n");
        printf("|------------------------------------|\n");
    }   
        printf("\n");
        printf("Deseja continuar ou sair? Digite 1 para continuar ou 2 para sair");
        printf("\n");
        scanf("%d", &opcao);

        if (opcao == 1){
          printf("\n");
          printf("Deseja limpar a tela? Digite 0");
          printf("\n");
          printf("Caso não, digite qualquer outro número");
          printf("\n");
          scanf("%d", &limpatela);
          if(limpatela==0){
            limpar();
            sleep(3);
            desenvolvedor();
            menu();
            classificacaoimc();
          }else{
            sleep(3);
            desenvolvedor();
            menu();
            classificacaoimc();
          }
        }else if(opcao == 2){
          printf("Até mais!!");
          opcao = 2;
          
        }          
}
}