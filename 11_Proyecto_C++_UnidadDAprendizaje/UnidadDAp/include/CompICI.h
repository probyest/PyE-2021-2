#include <iostream>
#include <UnidadDAp.h>
#ifndef COMPICI_H_INCLUDED
#define COMPICI_H_INCLUDED
/** Comparaci\'on ICI */
class CompICI {
public:
 uint index;
 UnidadDAp UAdFormato;
 UnidadDAp UAdDiagrama;
 CompICI(uint id,UnidadDAp UAdF,UnidadDAp UAdD);
virtual ~CompICI();
friend std::ostream& operator<<(std::ostream& out,
                                CompICI& rhs);
protected:

private:
};/*end class CompICI*/
#endif // COMPICI_H_INCLUDED
