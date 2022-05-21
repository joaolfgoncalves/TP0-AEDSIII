#include<stdio.h>
#include<stdlib.h>
#include "complexos.h"
int main (int argc, char *argv[]){ 
int num_instancias,i,linhas1,colunas1,linhas2,colunas2;
num_complex **matriz1;
num_complex **matriz2;
num_complex **result;

FILE* Dados;
Dados=fopen(argv[1], "r");
	if(Dados==NULL){
		printf("******ERRO ao abri o arquivo ********");}
FILE* output;
output=fopen(argv[2],"w");
	if(Dados==NULL){
		printf("******ERRO ao abri o arquivo ********");
      }

  fscanf(Dados,"%i",&num_instancias);
      for(i=0;i<num_instancias;i++){  

     fscanf(Dados,"%i",&linhas1);
     fscanf(Dados,"%i",&colunas1);            
     matriz1 = Aloca_matriz_complex(linhas1,colunas1);
     insere_complex_matriz(linhas1,colunas1,Dados,matriz1);
  
  // Recebe Dados da Segunda Matriz    
     fscanf(Dados,"%i",&linhas2);
     fscanf(Dados,"%i",&colunas2);            
     matriz2 = Aloca_matriz_complex(linhas2,colunas2);
    insere_complex_matriz(linhas2,colunas2,Dados,matriz2);
  
   // Multipilcação das matrizes 
     // Zerando a matriz resultado 
     result=Aloca_matriz_complex(linhas1,colunas2); 
     zera_matriz_complex(linhas1,colunas2,result);
     mult_matriz(linhas1,colunas2,matriz1,matriz2,result);
  
   // Imprimindo a matriz resultado no arquivo de saida 
     imprime_output(linhas1,colunas2,result,output);      
     
   // LIbera o espaço de memoria alocado para uso durante a execução do programa 
      matriz1 = Liberar_matriz(linhas1,colunas1,matriz1);
     matriz2 = Liberar_matriz(linhas2,colunas2,matriz2);
     result  = Liberar_matriz(linhas1,colunas2,result);     
    }
   
return 0 ;
      }  
