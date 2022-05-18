#include <stdio.h>
#define LENGTH(A)   (sizeof(A)/sizeof(A[0]))
void unaccent(char to[],char from[]);
extern char Discente[][64];
extern char Discente_accented[][64];
extern char Discente_unaccented[][64];
/**ArraysWD.c*/
float CalifDExam[] = {
/*00*/0.0,
/*01*/10.0,
/*02*/9.2,
/*03*/8.3,
/*04*/8.3,
/*05*/8.8,
/*06*/9.8,
/*07*/9.2,
/*08*/8.6,
/*09*/9.5,
/*10*/10.0,
/*11*/8.3,
/*12*/7.9,
/*13*/7.8,
/*14*/8.9,
/*15*/8.6,
/*16*/10.0,
/*17*/9.8,
/*18*/7.4,
/*19*/9.1,
/*20*/9.8,
/*21*/8.0,
/*22*/10.0
};


float PartEnCl[] = {
/*00*/0.0,
/*01*/10.0,
/*02*/10.0,
/*03*/10.0,
/*04*/10.0,
/*05*/10.0,
/*06*/6.0,
/*07*/10.0,
/*08*/10.0,
/*09*/10.0,
/*10*/10.0,
/*11*/10.0,
/*12*/10.0,
/*13*/10.0,
/*14*/10.0,
/*15*/10.0,
/*16*/10.0,
/*17*/10.0,
/*18*/10.0,
/*19*/10.0,
/*20*/10.0,
/*21*/10.0,
/*22*/10.0
};

float TrabExCl[] = {
/*00*/0.0,
/*01*/10.0,
/*02*/10.0,
/*03*/10.0,
/*04*/10.0,
/*05*/10.0,
/*06*/6.0,
/*07*/10.0,
/*08*/10.0,
/*09*/10.0,
/*10*/10.0,
/*11*/10.0,
/*12*/10.0,
/*13*/10.0,
/*14*/10.0,
/*15*/10.0,
/*16*/10.0,
/*17*/10.0,
/*18*/0.0,
/*19*/10.0,
/*20*/10.0,
/*21*/10.0,
/*22*/10.0
};

float ProyDInv[] = {
/*00*/0.0,
/*01*/10.0,
/*02*/10.0,
/*03*/10.0,
/*04*/10.0,
/*05*/10.0,
/*06*/10.0,
/*07*/10.0,
/*08*/10.0,
/*09*/10.0,
/*10*/10.0,
/*11*/10.0,
/*12*/10.0,
/*13*/10.0,
/*14*/10.0,
/*15*/10.0,
/*16*/10.0,
/*17*/10.0,
/*18*/10.0,
/*19*/10.0,
/*20*/10.0,
/*21*/10.0,
/*22*/10.0
};

void
show_TabPAExPar()
{
 short i;
// for(i=1;i<LENGTH(CalifDExam);i++){
//   unaccent(Discente,Discente_accented);
// }
 printf("%-40s%7s%7s%7s%9s%8s\n",
        "NOMBRE","Examen","Part","TrExC","ProyDInv","CalParc");
 for(i=1;i<LENGTH(CalifDExam);i++){
   printf("%-40s%7.1f%7.1f%7.1f%9.1f%8.1f\n",
          //Discente_accented[i],
          Discente_unaccented[i],
          0.65*CalifDExam[i],
          0.1*PartEnCl[i],
          0.1*TrabExCl[i],
          0.15*ProyDInv[i],
          0.65*CalifDExam[i]+0.1*PartEnCl[i]+0.1*TrabExCl[i]+0.15*ProyDInv[i]);
 }
}

