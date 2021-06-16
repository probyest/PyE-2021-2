#include <climits>
#include "UnidadDAp.h"

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
