/**ThemeSum.h*/
#ifndef THEMESUM_H_INCLUDED
#define THEMESUM_H_INCLUDED
#include <iostream>
#include <vector>
#include "Theme.h"
class ThemeSum {
public:
 ThemeSum(std::vector<Theme> thm_v);
 ThemeSum(const ThemeSum& copy_me);
 std::vector<Theme> theme_vec;
static float TotalTime;
static float TotalTimeP;
friend
std::ostream& operator<<(std::ostream& out,ThemeSum& rhs);
};/*end class ThemeSum*/
#endif // THEMESUM_H_INCLUDED
