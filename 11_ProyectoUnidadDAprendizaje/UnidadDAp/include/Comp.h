#ifndef COMP_H
#define COMP_H
#include <iostream>
#include <UnidadDAp.h>

/** Comparaci\'on */
class Comp
{
public:
 uint index;
 UnidadDAp UAdFormato;
 UnidadDAp UAdDiagrama;
 Comp(uint id,UnidadDAp UAdF,UnidadDAp UAdD);
virtual ~Comp();
friend std::ostream& operator<<(std::ostream& out,Comp& rhs);
protected:

private:
};/*end class Comp*/

#endif // COMP_H
