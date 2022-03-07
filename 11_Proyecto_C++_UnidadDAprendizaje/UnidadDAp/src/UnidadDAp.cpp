#include <climits>
#include "UnidadDAp.h"
extern UnidadDAp uda[];
/** N contiene el tamanio del arreglo de Unidades de
 * Aprendizaje. (Se utiliza en la funci\'on
 * get_UA_id() ). Para el objetivo 02_Ante-Cons_ICE
 * se define en el archivo uda_ICE.cpp. Para el
 * objetivo 03_Ante-Cons_ICI se define en el archivo
 * uda_ICI.cpp.
 */
extern uint N;

UnidadDAp::UnidadDAp()
{
    //ctor
}

UnidadDAp::UnidadDAp(uint nid,std::string namedUA):
id(nid),UAname(namedUA){
 //antecedente.push_back(UINT_MAX);
 //consecuente.push_back(UINT_MAX);
}

//UnidadDAp::UnidadDAp( UnidadDAp& other):
UnidadDAp::UnidadDAp(const UnidadDAp& other):
id(other.id),UAname(other.UAname),
antecedente(other.antecedente),
consecuente(other.consecuente){}

UnidadDAp::~UnidadDAp()
{
    //dtor
}

bool UnidadDAp::esta_en_antecedente(uint oid){
 for(uint i=0;i<antecedente.size();i++){
   if(antecedente[i]==oid)
    return true;
 }
 return false;
}

bool UnidadDAp::esta_en_consecuente(uint oid){
 for(uint i=0;i<consecuente.size();i++){
   if(consecuente[i]==oid)
    return true;
 }
 return false;
}

void UnidadDAp::add_ante(uint na){
 antecedente.push_back(na);
}

void UnidadDAp::add_cons(uint nc){
 consecuente.push_back(nc);
}

std::string UnidadDAp::get_UA_name(){
 return UAname;
}

uint UnidadDAp::get_id(){
 return id;
}

uint get_UA_id(std::string UA_Name,UnidadDAp uda[]){
 for (uint i=0;i<N;i++) {
   if (UA_Name == uda[i].UAname){
    return i;
   }
 }
 return UINT_MAX;
}

void UnidadDAp::add_ante(std::string ua){
 uint UdA_id = get_UA_id(ua,uda);
 add_ante(UdA_id);
}

void UnidadDAp::add_cons(std::string ua){
 uint UdA_id = get_UA_id(ua,uda);
 add_cons(UdA_id);
}
