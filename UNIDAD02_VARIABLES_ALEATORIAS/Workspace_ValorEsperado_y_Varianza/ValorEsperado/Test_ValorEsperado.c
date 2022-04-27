#include <stdio.h>
#include <stdlib.h>
#include "../ArchivosComunes/ValorEsperadoYVarianza.h"
#ifndef VALORESPERADOYVARIANZA_H_INCLUDED
#define LENGTH(A)   (sizeof(A)/sizeof(A[0]))
void print_ident_data(const char *source,char *exe);
void print_arr(float a[],size_t size);
float sum(float a[],size_t size);
float *mult(float a[],float b[],size_t size);
float media(float X[],float FdP[],size_t size);
#endif // VALORESPERADOYVARIANZA_H_INCLUDED
#if 0
float x[] = {1,2,3,4};
float f[] = {0.1, 0.4, 0.3, 0.2};
#else
#include "../ArchivosComunes/datos.c"
#endif

int main(int argc,char *argv[])
{
    print_ident_data(__FILE__,argv[0]);
    printf("\nValor Esperado y Varianza\n\n");
    printf("Valores de la variable aleatoria X\n");
    print_arr(x,LENGTH(x));
    printf("\n\nDistribución de probabilidad de la variable X\n");
    print_arr(f,LENGTH(f));
    printf("\n\nMedia de X\n\n");
    printf("mu = %7.2f\n\n",media(x,f,LENGTH(x)));
    return 0;
}/*end main()*/
#ifndef VALORESPERADOYVARIANZA_H_INCLUDED
void print_arr(float a[],size_t size){
 size_t i;
 for (i=0;i<size;i++){
   printf("%7.2f",a[i]);
 }
}

float sum(float a[],size_t size){
 size_t i;
 float r=0;
 for (i=0;i<size;i++){
   r+=a[i];
 }
 return r;
}

float *mult(float a[],float b[],size_t size){
 size_t i;
 float *r=(float*)malloc(size*sizeof(float));
 for (i=0;i<size;i++){
   *(r+i)=a[i]*b[i];
 }
 return r;
}

float media(float X[],float FdP[],size_t size){
 float *mult_d_vecs=mult(X,FdP,size);
 return sum(mult_d_vecs,size);
}
#endif //VALORESPERADOYVARIANZA_H_INCLUDED
