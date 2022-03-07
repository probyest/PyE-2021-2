#ifndef COMP_H
#define COMP_H
#include <iostream>
#include <UnidadDAp.h>

/** Comparaci\'on de UAs */
class Comp
{
public:
 uint index; /** Identificador de Comparaci\'on */
 UnidadDAp UAdFormato; /** UA de Formato */
 UnidadDAp UAdDiagrama;/** UA de Diagrama */
 Comp(uint id,UnidadDAp UAdF,UnidadDAp UAdD);
virtual ~Comp();
friend std::ostream& operator<<
                     (std::ostream& out,Comp& rhs);
protected:

private:
};/*end class Comp*/

#endif // COMP_H
