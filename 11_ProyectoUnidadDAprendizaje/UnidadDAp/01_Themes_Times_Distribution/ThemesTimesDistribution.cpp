/**ThemesTimesDistribution.cpp*/
#include <iostream>
#include <conio2.h>
#include "ThemeSum.h"
#define VERS    1
int main(){
 Theme theme1("A","EXPERIMENTO DETERMINISTA","0.5","0.5");
 Theme theme2("B","EXPERIMENTO ALEATORIO O ESTOCASTICO",
              "0.5","0.5");
 Theme theme3("C","CONCEPTO DE ESPACIO MUESTRAL","0.5","0.5");
 Theme theme4("D","CONCEPTO DE EVENTO","0.25","0.5");
 Theme theme5("E","CONCEPTO BASICO DE PROBABILIDAD","0.25",
              "0.5");
 Theme theme6(
"F","ESPACIOS MUESTRALES SOBRE LOS QUE SE DEFINE UNA FUNCION \
QUE TOMA VALORES EN UN CONJUNTO FINITO (O A LO MAS INFINITO \
NUMERABLE)","0.25","0.5");
 Theme theme7(
"G","CALCULO DE LA PROBABILIDAD DE EVENTOS DEFINIDOS COMO \
PREIMAGENES DE SUBCONJUNTOS FINITOS (O A LO MAS INFINITO \
NUMERABLES)","0.5","0.5");
 Theme theme8(
"H","ESPACIOS MUESTRALES SOBRE LOS QUE SE DEFINE UNA FUNCION \
QUE TOMA VALORES EN UN SUBCONJUNTO CONEXO DE LOS NUMEROS \
REALES","0.25","0.5");
 Theme theme9(
"I","CALCULO DE LA PROBABILIDAD DE EVENTOS DEFINIDOS COMO \
PREIMAGENES DE SUBCONJUNTOS CONEXOS DE LOS NUMEROS REALES",
"0.5","0.5");
 Theme theme10(
"J","APLICACION DE LA TEORIA DE PROBABILIDAD","0.5","0.5");
 Theme theme11(
"A","TEOREMA DE LA PROBABILIDAD TOTAL","0.5","0.5");
 Theme theme12(
"B","TEOREMA DE BAYES","0.5","0.5");
 Theme theme13(
"C","APLICACION DEL TEOREMA DE LA PROBABILIDAD TOTAL Y DEL \
TEOREMA DE BAYES","1.0","0.5");
 std::vector<Theme> T_v;
 T_v.push_back(theme1);
 T_v.push_back(theme2);
 T_v.push_back(theme3);
 T_v.push_back(theme4);
 T_v.push_back(theme5);
 T_v.push_back(theme6);
 T_v.push_back(theme7);
 T_v.push_back(theme8);
 T_v.push_back(theme9);
 T_v.push_back(theme10);
 T_v.push_back(theme11);
 T_v.push_back(theme12);
 T_v.push_back(theme13);
 ThemeSum SdT_p1(T_v);
 std::cout<<SdT_p1<<"\n";
#if VERS == 0
 getch();
 clrscr();
#endif // VERS
/******************************************************/
 T_v.clear();
 Theme theme14("A","TIPOS DE VARIABLES ALEATORIAS (CONTINUA, \
DISCRETA, CUANTITATIVA, CUALITATIVA, ORDINAL Y NOMINAL)",
"1.0","0.25");
 Theme theme15("B","RECOLECCION DE DATOS, COMO MEDIDAS DE \
LOS DIFERENTES TIPOS DE VARIABLES","1.0","0.25");
 Theme theme16("C","ORDENAMIENTO Y TABULACION DE DATOS, SOBRE \
LAS DIFERENTES VARIABLES","1.0","0.25");
 Theme theme17("D","DETERMINACION DE LAS MEDIDAS DE TENDENCIA CENTRAL DE \
LOS DIFERENTES TIPOS DE VARIABLES","1.0","0.25");
 Theme theme18("E","DETERMINACION DE LAS MEDIDAS DE DISPERSION \
DE LOS DIFERENTES TIPOS DE VARIABLES","1.0","0.25");
 Theme theme19("F","INTERPRETACION DE RESULTADOS DEL CALCULO \
DE LAS MEDIDAS DE TENDENCIA CENTRAL Y DE LAS MEDIDAS DE \
DISPERSION","1.0","0.5");
 Theme theme20("G","FUNCION DE DENSIDAD DE PROBABILIDAD",
               "0.5","1.25");
 Theme theme21("H","ESPERANZA MATEMATICA","0.5","2.0");
 Theme theme22("A","DISTRIBUCION NORMAL","1.0","1.0");
 Theme theme23("B","DISTRIBUCION BINOMIAL","2.0","1.5");
 Theme theme24("C","DISTRIBUCION DE POISSON","2.0","1.0");
 Theme theme25("D","DISTRIBUCION GEOMETRICA","2.0","1.0");
 T_v.push_back(theme14);
 T_v.push_back(theme15);
 T_v.push_back(theme16);
 T_v.push_back(theme17);
 T_v.push_back(theme18);
 T_v.push_back(theme19);
 T_v.push_back(theme20);
 T_v.push_back(theme21);
 T_v.push_back(theme22);
 T_v.push_back(theme23);
 T_v.push_back(theme24);
 T_v.push_back(theme25);
 ThemeSum SdT_p2(T_v);
 std::cout<<SdT_p2<<"\n";
#if VERS == 0
 getch();
 clrscr();
#endif // VERS
/******************************************************/
 T_v.clear();
 Theme theme26("A","MUESTREO ALEATORIO SIMPLE","0.5","0.5");
 Theme theme27("B","MUESTREO ALEATORIO ESTRATIFICADO",
               "0.5","0.5");
 Theme theme28("C","MUESTREO ALEATORIO DE CONGLOMERADOS",
               "0.5","1.5");
 Theme theme29("D","MUESTREO SISTEMATICO","0.5","0.5");
 Theme theme30("E","MUESTREO INTENCIONAL O DE CONVENIENCIA",
               "1.0","1.0");
 Theme theme31("A","INFERENCIA POR ESTIMACION DE PARAMETRO PUNTUAL",
               "1.0","1.0");
 Theme theme32("B","INFERENCIA POR ESTIMACION DE INTERVALO",
               "1.0","0.5");
 Theme theme33("A","FORMULACION DE HIPOTESIS","1.0","0.5");
 Theme theme34("B","HIPOTESIS UNILATERALES Y BILATERALES",
               "1.0","1.0");
 Theme theme35("C","PRUEBAS DE HIPOTESIS SOBRE LA MEDIA CON \
VARIANZA CONOCIDA","1.0","1.0");
 Theme theme36("D","ELECCION DE TAMANIO DE LA MUESTRA",
               "1.0","1.0");
 Theme theme37("E","PRUEBA DE HIPOTESIS SOBRE LA MEDIA CON \
VARIANZA DESCONOCIDA","1.0","1.0");
 T_v.push_back(theme26);
 T_v.push_back(theme27);
 T_v.push_back(theme28);
 T_v.push_back(theme29);
 T_v.push_back(theme30);
 T_v.push_back(theme31);
 T_v.push_back(theme32);
 T_v.push_back(theme33);
 T_v.push_back(theme34);
 T_v.push_back(theme35);
 T_v.push_back(theme36);
 T_v.push_back(theme37);
 ThemeSum SdT_p3(T_v);
 std::cout<<SdT_p3<<"\n";
#if VERS == 0
 getch();
 clrscr();
#endif // VERS
 std::cout<<"  "<<ThemeSum::TotalTime
          <<"  "<<ThemeSum::TotalTimeP<<"\n";
 return 0;
}/*end main()*/


