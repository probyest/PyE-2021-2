#include <UnidadDAp.h>
#include <Comp.h>
#include <climits>
//using namespace std;
std::vector<UnidadDAp> formato;
std::vector<UnidadDAp> diagrama;
extern UnidadDAp uda[];
extern uint N;
int main()
{
 std::cout << "UNIDADES DE APRENDIZAJE" << std::endl;
//#include "uda.cpp" /** Instanciar objetos UnidadDAp */
 for(uint i=0;i<N;i++){
   formato.push_back(UnidadDAp(uda[i]));
   diagrama.push_back(UnidadDAp(uda[i]));
 }
#include "setayc.cpp" /** set antecedentes y consecuentes */
 //std::cout << "N = " << N << "\n";
 for(uint i = 0;i < 19;i++){
//std::cout<<"[I="<<i<<"]";
  Comp c(i,formato[i],diagrama[i]);
  std::cout << c << "\n\n";
 }
 return 0;
}/*end main()*/
