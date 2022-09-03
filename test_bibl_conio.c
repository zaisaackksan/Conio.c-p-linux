/* Ficha de Aluno */
#include <stdio.h>
#include <conio.h>
int main(void)
{
/*Criando a struct */
struct ficha_de_aluno
{
char nome[20];
char disciplina[7];
float nota_prova1;
float nota_prova2;;
};
/*Criando a variavel aluno que ser do
tipo struct ficha_de_aluno */
struct ficha_de_aluno aluno;

printf("\n---------- Cadastro de aluno -----------\n\n\n");
printf("Nome do aluno ......:");
fflush(stdin);
fgets(aluno.nome, 40, stdin);
printf("Disciplina ......: ");
fflush(stdin);
fgets(aluno.disciplina, 40, stdin);
printf("Informe a 1a. nota ..: ");
scanf("%f", &aluno.nota_prova1);
printf("Informe a 2a. nota ..: ");
scanf("%f", &aluno.nota_prova2);
printf("\n\n --------- Lendo os dados da struct ---------\n\n");
printf("Nome ...........: %s", aluno.nome);
printf("Disciplina .....: %s", aluno.disciplina);
printf("Nota da Prova 1 ...: %.2f" , aluno.nota_prova1);
printf("\nNota da Prova 2 ...: %.2f\n" , aluno.nota_prova2);
getch();
return(0);
};
