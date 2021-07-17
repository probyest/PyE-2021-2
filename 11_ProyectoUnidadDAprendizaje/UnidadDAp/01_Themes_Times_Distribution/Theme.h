#ifndef THEME_H
#define THEME_H
#include <iostream>
#include <header.h>
#include <conio2.h>
class Theme {
public:
 std::string TemIndex;
 std::string Tema;
 std::string Time;
 std::string TimeP;   /**Tiempo Pr\'actica*/
static uint count;
 Theme(){}
 Theme(std::string TInd,std::string tema,
       std::string time,std::string timep);
 Theme(const Theme& copy_me);
friend
std::ostream& operator<<(std::ostream& out,Theme& rhs);
protected:

private:
};/*end class Theme*/

#endif // THEME_H
