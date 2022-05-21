 #include<stdio.h> // Para uso do tipo FILE
                      /* TAD: Números complexos  */
  
    // Representação de numeros complexos 
         typedef struct Numero_complex{
    double r; // parte real 
    double i; // parte imaginaria 
      }num_complex;
     
    // Cria um novo numeros complexo a partir dos valores reais e imaginarios 
        num_complex Novo(double x, double y ); 
    
    // Soma de dois numeros complexos
        num_complex Soma(num_complex a, num_complex b ); 
 
    // Subtração de dois numeros complexos
        num_complex Sub(num_complex a, num_complex b ); 
       
    // Multiplicação de dois numeros complexos
        num_complex Mult(num_complex a , num_complex b );  			
   
    // Aloca uma matriz de numeros complexos , linha por coluna e retorna um ponteiro para a primeira posição 
        num_complex ** Aloca_matriz_complex(int linha , int coluna );
      
    // Libera o espaço de memoria alocado para a matriz de números complexos  
        num_complex **Liberar_matriz(int linha, int coluna, num_complex **matriz);
   
    // Isere os números complexos lidos do arquivo de entrada na matriz de números complexos já alocada  
        void insere_complex_matriz(int linhas , int colunas , FILE *Dados , num_complex ** matriz ) ;
      
    // Imprime a matriz de números complexos na tela para o usuario   
        void imprime_matriz (int linhas , int colunas ,num_complex **matriz);
   
    // Zera todos os valores da matriz resultado antes dela ser usada para  receber o resultado das multiplicações 
        void zera_matriz_complex(int linhas ,int colunas , num_complex **matriz);  

    // Multiplica duas matrizes de números de complexos e salva em uma  matriz resultado 
        void mult_matriz(int linhas_matriz1,int colunas_matriz2, num_complex **mat1, num_complex **mat2, num_complex **result);
    
   //  Imprime a matriz resultado da multiplicação em um arquivo de saida   
        void imprime_output(int linhas ,int colunas ,num_complex **matriz,FILE *arquivo);    
   
