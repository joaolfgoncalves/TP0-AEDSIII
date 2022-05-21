#include<stdio.h>
#include<stdlib.h>
#include "complexos.h"


 

// Implementação das funções 
   /* algumas funções definadas aqui não serão utilizadas no programa, foram definidas 
       como funções basicas para o tipo  abstrato de dados  número complexo que podem 
        ser utilizadas  posteriormente 
*/ 
 
  num_complex Insere_valor(double x,double y){
    
     num_complex novo;
     novo.r = x;
     novo.i = y; 
     
      return novo ;
     }


  num_complex Mult(num_complex a ,num_complex b ){
       
      num_complex result;
      result.r = (a.r * b.r) - (a.i * b.i);
      result.i = (a.r * b.i) + (a.i * b.r); 

       return result;
      }


  num_complex Soma(num_complex a , num_complex b ){
       
       num_complex result ;
       result.r = a.r + b.r ; 
       result.i = a.i + b.i ;    
       
      return result;  
     }  


  num_complex Sub(num_complex a , num_complex b ){
      
      num_complex result ; 
      result.r = a.r - b.r ;
      result.i = a.i - b.i ;
       
       return result ;  
      } 

 num_complex  **Aloca_matriz_complex(int linha , int coluna ){

    num_complex **matriz; 
    int   i;    
         matriz = (num_complex **) malloc (linha*(sizeof(num_complex *)));
             if (matriz == NULL) {
                printf ("** Erro: Memoria Insuficiente **");
     			return (NULL);
     }
  for ( i = 0; i < linha; i++ ) {
      matriz[i] = (num_complex*) malloc ( coluna *(sizeof(num_complex)));
      }

  return (matriz); /* retorna o ponteiro para a matriz */
}



 num_complex **Liberar_matriz(int linha, int coluna, num_complex **matriz){
  int  i;  /* variavel auxiliar */
  if (matriz == NULL) return (NULL);
  if (linha < 1 || coluna  < 1) {  /* verifica parametros recebidos */
     printf ("** Erro: Parametros invalidos **\n");
     return (matriz);
     }
  for (i=0; i<linha; i++){
          free (matriz[i]); /* libera as linhas da matriz */
                           } 
  free (matriz);      /* libera a matriz */
  return (NULL); /* retorna um ponteiro nulo */
         }


 void imprime_matriz(int linhas , int colunas,num_complex **matriz){
   int i,j;

   printf("\n\n\n");
    for(i=0;i<linhas;i++){
      for(j=0;j<colunas;j++){
printf ("%.4g",matriz[i][j].r);
printf ("%+.4gi ",matriz[i][j].i);      

         } printf("\n");
    }

}
void mult_matriz(int linhas_matriz1,int colunas_matriz2, num_complex **mat1, num_complex **mat2, num_complex **result){
     int i,j,k;
     num_complex aux;
     for(i=0;i<linhas_matriz1;i++){
       for(j=0;j<colunas_matriz2;j++){
         for(k=0;k<linhas_matriz1;k++){
          aux = Mult( mat1[i][k],mat2[k][j] );
          result[i][j] = Soma( result[i][j] , aux );
          //printf("valor resultf[%d][%d]= %+g\n",i,j,result[i][j]);

         }
       }
     }

}

void zera_matriz_complex(int linhas ,int colunas , num_complex **matriz){
 
    int i,j;
   for(i=0;i<linhas;i++){
      for(j=0;j<colunas;j++){
          matriz[i][j].r = 0;
           matriz[i][j].i=0;
          }
       }
 
   }
