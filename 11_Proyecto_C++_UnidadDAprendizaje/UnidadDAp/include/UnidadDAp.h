#ifndef UNIDADDAP_H
#define UNIDADDAP_H
#include <iostream>
#include <vector>
#include <header.h>

class UnidadDAp {
public:
 uint id;
 std::string UAname;
 std::vector<uint> antecedente;
 std::vector<uint> consecuente;
 UnidadDAp();
 UnidadDAp(uint nid,std::string namedUA);
 UnidadDAp(const UnidadDAp& other);
 //UnidadDAp( UnidadDAp& other);
 virtual ~UnidadDAp();
 bool esta_en_antecedente(uint oid);
 bool esta_en_consecuente(uint oid);
 void add_ante(uint na);
 void add_ante(std::string ua);
 void add_cons(uint nc);
 void add_cons(std::string ua);
 std::string get_UA_name();
 uint get_id();
protected:

private:
};/*end class UnidadDAp*/

#endif // UNIDADDAP_H
