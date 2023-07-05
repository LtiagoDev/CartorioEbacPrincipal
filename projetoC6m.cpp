#include <stdio.h> //biblioteca comunicação com o usuario 
#include <stdlib.h> //biblioteca alocação espaço em memoria
#include <locale.h> //biblioteca alocação de texto por região
#include <string.h> //biblioteca responsavel por cuidar das strings


int registro()
{
	char arquivo[40];
    char cpf[40];
    char nome[40];
    char sobrenome[40];
    char cargo[40];
    
   printf("digite o CPF a ser cadastrado"); 
   scanf("%s", cpf);
   
   strcpy(arquivo, cpf); //copia os valores das strings
   
   FILE *file; //cria o arquivo
   file = fopen(arquivo, "w"); //cria o arquivo
   fprintf (file,cpf); //salva o valor da variavel
   fclose(file); //fecha o arquivo
    
    file = fopen(arquivo, "a");
    fprintf(file,",");
    fclose(file);
    
    printf("digite o nome a ser cadastrado:");
    scanf("%s", nome);
    
    file = fopen(arquivo, "a");
    fprintf(file,nome);
    fclose(file);
    
    file = fopen(arquivo, "a");
    fprintf(file,",");
    fclose(file);
    
    printf("digite o sobrenome a ser cadastrado: ");
    scanf("%s",sobrenome);
    
    file = fopen(arquivo, "a");
    fprintf(file, sobrenome);
    fclose(file);
    
    file = fopen(arquivo, "a");
    fprintf(file,",");
    fclose(file);
    
    printf("digite o cargo a ser cadastrado: ");
    scanf("%s",cargo);
    
    file = fopen(arquivo, "a");
    fprintf(file, cargo);
    fclose(file);
    
    system("pause");
    
	}
    
int consulta()
{
	setlocale(LC_ALL, "portuguese"); //define a linguagem
	
    char cpf[40];
    char conteudo[200];
    
    printf("Digite o CPF a ser consultado; ");
    scanf("%s",cpf);
    
    FILE *file;
    file = fopen(cpf,"r");
    
    if(file == NULL)
    {
    	printf("Não foi possivel abrir o arquivo, não localizado!.\n");
    	
    	
	}

	while(fgets(conteudo, 200, file) != NULL)
	{
		printf("\nEssas são as informações do usuario: ");
		printf("%s", conteudo);
		printf("\n\n");
	}
	
	system("pause");


}

int deletar()
{
	printf("Você escolheu deletar nomes!\n");
	system("pause");
}


int main() 
{
	int opcao=0;//Definindo variaveis
	int laco=1;
	
    for(laco=1;laco=1;)
	{
		
	    system("cls");
	
	   setlocale(LC_ALL, "portuguese"); //define a linguagem
	
	   printf("### carório da EBAC ###\n\n");
	   printf("escolha a opção desejada do menu:\n\n");
	   printf("\t1 - Registrar nomes\n");
	   printf("\t2 - Consultar nomes\n");
	   printf("\t3 - Deletar nomes\n\n");
	   printf("Opção: ");//fim do menu
	
	
	
	    scanf("%d" , &opcao);//armazenamento escolha do usuario
	
	    system("cls");
	    
	   switch(opcao)
	   {
	   	case 1:
	   	registro();
		break;   	
		 
	    
	    case 2:
	    consulta();
		break;
		
		case 3:	    
	     deletar();
		break;
	     
	     
	     default:
	    	printf("Essa opção não esta disponivel!\n");
		system("pause");
		break;
		}
		}
		
		}
	    
	    
	    
	    
	    
	    
	    
	    
	    
	    
	    
	    
	    
	    
	    
	    
	    
	    
	
