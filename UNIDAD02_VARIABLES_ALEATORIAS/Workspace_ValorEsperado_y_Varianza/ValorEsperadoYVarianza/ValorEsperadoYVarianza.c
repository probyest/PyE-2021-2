#include <stdio.h>
#include <stdlib.h>
//
// Obviously, you 'll have to write yourself the super-duper
// functions to include in the resulting library...
// Also, it's not necessary to write every function in this file.
// Feel free to add more files in this project. They will be
// included in the resulting library.

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



