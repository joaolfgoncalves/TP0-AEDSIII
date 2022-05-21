#include<stdio.h>
#include<stdlib.h>
#include "complexos.h"

// Função que faz leitura do arquivo e armazena os valores em uma matriz  
 void insere_complex_matriz(int linhas , int colunas , FILE *Dados , num_complex ** matriz ){
  
     int i ,j ;
     char c ;
     num_complex aux;
    for(i=0;i<linhas;i++){
      for(j=0;j<colunas;j++){
        fscanf(Dados,"%lf",&aux.r);
         fscanf(Dados,"%lf",&aux.i); 
         fscanf(Dados,"%c",&c);
         matriz [i][j]=aux;  
			 }
                   }
   }
//FUnção que imprime os resultados da multiplicação em um arquivo de saida 
 void imprime_output(int linhas ,int colunas ,num_complex **matriz,FILE *arquivo){
   int i ,j;
     for(i=0;i<linhas;i++){
       for(j=0;j<colunas;j++){
           fprintf(arquivo,"%.2f",matriz[i][j].r);
            if(j==(colunas-1)) 
            fprintf(arquivo,"%+.2fi", matriz[i][j].i);
              else fprintf(arquivo,"%+.2fi ", matriz[i][j].i);                
               }
           fprintf(arquivo,"\n"); }       
 
  fprintf(arquivo,"\n\n");
  }



