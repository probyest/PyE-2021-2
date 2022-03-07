#include <UnidadDAp.h>
#include <Comp.h>
#include <climits>
//using namespace std;
std::vector<UnidadDAp> formato;
std::vector<UnidadDAp> diagrama;
/** \'Indice de Unidades de Aprendizaje: contiene solo los */
/** nombres de UA, el \'indice del nombre de las UAs en el  */
/** arreglo uda se usa como identificador (atributo id ) de */
/** de las instancias (objetos) de la clase UnidadDAp que se */
/** agregan --usando el constructor de copia-- a los vectores */
extern UnidadDAp uda[];/** formato y diagrama. */
extern uint N;/**Contiene el tamanio del arreglo uda*/
/** Nombre de la carrera o programa acad\'emico */
extern std::string carrera;
int main()
{
// uint NumDFormts = N;
 uint NumDFormts = 19;
 std::cout << "UNIDADES DE APRENDIZAJE DE "
           << carrera << std::endl;
//#include "uda.cpp" /** Instanciar objetos UnidadDAp */
 for(uint i=0;i<N;i++){
   formato.push_back(UnidadDAp(uda[i]));
   diagrama.push_back(UnidadDAp(uda[i]));
 }
#include "setayc_ICE.cpp" /** set antecedentes y consecuentes */
 //std::cout << "N = " << N << "\n";
 for(uint i = 0;i < NumDFormts;i++){
//std::cout<<"[I="<<i<<"]";
  Comp c(i,formato[i],diagrama[i]);
  std::cout << c << "\n\n";
 }
 Comp c53(53,formato[53],diagrama[53]);
 std::cout << c53 << "\n\n";
 Comp c57(57,formato[57],diagrama[57]);
 std::cout << c57 << "\n\n";
 return 0;
}/*end main()*/


