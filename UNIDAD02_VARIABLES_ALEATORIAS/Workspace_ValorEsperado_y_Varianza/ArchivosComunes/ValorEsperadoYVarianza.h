#ifndef VALORESPERADOYVARIANZA_H_INCLUDED
#define VALORESPERADOYVARIANZA_H_INCLUDED
#define LENGTH(A)   (sizeof(A)/sizeof(A[0]))
/** print_ident_data(__FILE__,argv[0]); en la funci\'on
 * main imprime datos de identificaci\'on: del archivo
 * fuente que contiene la funci\'on main, y el nombre
 * del archivo ejecutable.
 */
void print_ident_data(const char *,char *);

void print_arr(float a[],size_t size);
float sum(float a[],size_t size);
float *mult(float a[],float b[],size_t size);
float media(float X[],float FdP[],size_t size);
float varianza(float X[],float FdP[],size_t size);
#endif // VALORESPERADOYVARIANZA_H_INCLUDED
