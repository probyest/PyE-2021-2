#include "Theme.h"

Theme::Theme(std::string TInd,
             std::string tema,
             std::string time,
             std::string timep)
:TemIndex(TInd),Tema(tema),Time(time),TimeP(timep){}
Theme::Theme(const Theme& copy_me)
:TemIndex(copy_me.TemIndex),Tema(copy_me.Tema),
Time(copy_me.Time),TimeP(copy_me.TimeP){}
std::ostream& operator<<(std::ostream& out,Theme& rhs){
 out<<rhs.Time<<" "<<rhs.TimeP<<" "<<rhs.TemIndex<<". "
    <<rhs.Tema;
 return out;
}
