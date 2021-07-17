/**ThemeSum.cpp*/
#include <string.h>
#include "ThemeSum.h"
uint Theme::count=0;
float ThemeSum::TotalTime=0;
float ThemeSum::TotalTimeP=0;
ThemeSum::ThemeSum(std::vector<Theme> thm_v):theme_vec(thm_v){}
ThemeSum::ThemeSum(const ThemeSum& copy_me)
:theme_vec(copy_me.theme_vec){}

std::ostream& operator<<(std::ostream& out,ThemeSum& rhs){
 float summe,sum=0,sumTP=0;
 Theme T;
 std::vector<float> theme_time;
 std::vector<float> theme_timeTP;

 for (uint i=0;i<rhs.theme_vec.size();i++){
   out<<"["<<++Theme::count<<"] ";
   out<<rhs.theme_vec[i]<<"\n";
   T=rhs.theme_vec[i];
   summe=atof(&T.Time[0]);
   theme_time.push_back(summe);
   summe=atof(&T.TimeP[0]);
   theme_timeTP.push_back(summe);
 }
 for (uint i=0;i<theme_time.size();i++){
   sum+=theme_time[i];
   sumTP+=theme_timeTP[i];
 }
 uint tmp=Theme::count;
 while(tmp/=10){out<<" ";}
 out<<"   "<<sum<<"   "<<sumTP<<"\n";
 ThemeSum::TotalTime+=sum;
 ThemeSum::TotalTimeP+=sumTP;
 return out;
}/*end operator<<()*/


