#include <stdio.h>
#include <stdlib.h>
int k;
float *B;
float *PAdBi;
void leer_kfloats(float*);
void Bayes(int r,float *PB,float *PAdB,float *result);

int main()
{
 int index;
 float PBrdA;
 printf("Cantidad de eventos que particionan ");
 printf("el espacio muestral k = ");
 scanf("%d",&k);
 B=(float*)malloc(k*sizeof(float));
 PAdBi=(float*)malloc(k*sizeof(float));
 printf("\nProbabilidades de los eventos de la partici\\'on\n");
 leer_kfloats(B);
 printf("\nProbabilidades condicionales P(A|Bi)\n");
 leer_kfloats(PAdBi);
 printf("\nSe calcular\\'a P(Br|A)\n");
 printf("\n\\'Indice del evento de partici\\'on r = ");
 scanf("%i",&index);
 Bayes(index-1,B,PAdBi,&PBrdA);
 printf("\nP(Br|A) = %f\n",PBrdA);
 free(B);
 free(PAdBi);
 return 0;
}

void leer_kfloats(float *p)
{
 int i;
 printf("\n");
 for (i=0;i<k;i++) {
  printf("%i: ",i+1);
  scanf("%f",p+i);
  printf("\n");
 }
}

void Bayes(int r,float *PB,float *PAdB,float *result)
{
 float n,d=0.0f;
 int i;
 n=PB[r]*PAdB[r];
 for (i=0;i<k;i++){
  d+=PB[i]*PAdB[i];
 }
 *result=n/d;
}
