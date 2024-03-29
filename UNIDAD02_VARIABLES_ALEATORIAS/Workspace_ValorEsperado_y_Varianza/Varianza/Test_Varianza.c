#include <stdio.h>
#include <stdlib.h>
#include "../ArchivosComunes/ValorEsperadoYVarianza.h"
#ifndef VALORESPERADOYVARIANZA_H_INCLUDED
#define LENGTH(A)   (sizeof(A)/sizeof(A[0]))
void print_arr(float a[],size_t size);
float *AminusB(float a[],float b[],size_t size);
float *square(float a[],size_t size);
float media(float X[],float FdP[],size_t size);
float varianza(float X[],float FdP[],size_t size);
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
    printf("\nValores de la variable aleatoria X\n");
    print_arr(x,LENGTH(x));
    printf("\n\nDistribución de probabilidad de la variable X\n");
    print_arr(f,LENGTH(f));
    printf("\nVarianza de X\n");
    printf("\nVar(X) = %7.2f\n",varianza(x,f,LENGTH(x)));
    return 0;
}/*end main()*/
//#ifndef VALORESPERADOYVARIANZA_H_INCLUDED
/** print_ident_data(__FILE__,argv[0]); en la funci\'on
 * main imprime datos de identificaci\'on: del archivo
 * fuente que contiene la funci\'on main, y el nombre
 * del archivo ejecutable.
 */
void print_ident_data(const char *source,char *exe)
{
 printf("FUENTE: %s\n",source);
 printf("EJECUTABLE: %s\n",exe);
}

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

float *AminusB(float a[],float b[],size_t size){
 size_t i;
 float *r=(float *)malloc(size*sizeof(float));
 for (i=0;i<size;i++){
    *(r+i)=a[i]-b[i];
 }
 return r;
}

float *square(float a[],size_t size){
 size_t i;
 float *r=(float *)malloc(size*sizeof(float));
 for (i=0;i<size;i++){
   *(r+i)=a[i]*a[i];
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
 float *sum_d_vecs=mult(X,FdP,size);
 return sum(sum_d_vecs,size);
}

float varianza(float X[],float FdP[],size_t size){
 size_t i;
 float mu=media(X,FdP,size);
 float *vec_d_mus=(float *)malloc(size*sizeof(float));
 for (i=0;i<size;i++){
   vec_d_mus[i]=mu;
 }
 float *resta=AminusB(X,vec_d_mus,size);
 float *resta2=square(resta,size);
 float *resta2pond=mult(resta2,FdP,size);
 return sum(resta2pond,size);
}
//#endif //VALORESPERADOYVARIANZA_H_INCLUDED
