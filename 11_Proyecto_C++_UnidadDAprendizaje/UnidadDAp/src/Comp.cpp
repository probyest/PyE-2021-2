#include <climits>
#include "Comp.h"
extern UnidadDAp uda[];
extern uint N;

Comp::Comp(uint id,UnidadDAp UAdF,UnidadDAp UAdD):
index(id),UAdFormato(UAdF),UAdDiagrama(UAdD){}

Comp::~Comp()
{
    //dtor
}

std::ostream& operator<<(std::ostream& out,Comp& rhs){
 out << "UA " << rhs.UAdFormato.get_id() << ": "
     << rhs.UAdFormato.get_UA_name() << "\n";
 out << "Antecedente solo en formato: |";
 for(uint i = 0; i < rhs.UAdFormato.antecedente.size();i++){
   if (!(rhs.UAdDiagrama.esta_en_antecedente(
       rhs.UAdFormato.antecedente[i]))){
     if (rhs.UAdFormato.antecedente[i] != UINT_MAX){
       out << uda[rhs.UAdFormato.antecedente[i]].get_UA_name()
           << "|";
     }
   }
 }
//out<< "rhs.UAdDiagrama.antecedente.size():"
//<<rhs.UAdDiagrama.antecedente.size()<<"\n";
 out << "\nAntecedente solo en diagrama: |";
 for(uint i = 0; i < rhs.UAdDiagrama.antecedente.size();i++){
//out<<"i="<<i<<"--"<<rhs.UAdDiagrama.get_UA_name()<<"\n";
   if (!(rhs.UAdFormato.esta_en_antecedente(
       rhs.UAdDiagrama.antecedente[i]))){
     if (rhs.UAdDiagrama.antecedente[i] != UINT_MAX){
//out<<"(i="<<i<<", "<<rhs.UAdDiagrama.antecedente[i]<<")";
       out << uda[rhs.UAdDiagrama.antecedente[i]].get_UA_name()
           << "|";
     }
   }
 }
 out << "\nConsecuente solo en formato: |";
 for(uint i = 0; i < rhs.UAdFormato.consecuente.size();i++){
   if (!(rhs.UAdDiagrama.esta_en_consecuente(
       rhs.UAdFormato.consecuente[i]))){
     if (rhs.UAdFormato.consecuente[i] != UINT_MAX){
       out << uda[rhs.UAdFormato.consecuente[i]].get_UA_name()
          << "|";
     }
   }
 }
 out << "\nConsecuente solo en diagrama: |";
 for(uint i = 0; i < rhs.UAdDiagrama.consecuente.size();i++){
   if (!(rhs.UAdFormato.esta_en_consecuente(
       rhs.UAdDiagrama.consecuente[i]))){
     if (rhs.UAdDiagrama.consecuente[i] != UINT_MAX){
       out << uda[rhs.UAdDiagrama.consecuente[i]].get_UA_name()
           << "|";
     }
   }
 }
 return out;
}/*end operator<<()*/
