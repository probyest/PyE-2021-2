#include <iostream>
#include "header.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	Person P1("EMI","94","1");
	std::cout << P1 << "\n";
	std::cout << P1.nombre << ", " << P1.edad << ", " << P1.idNum << "\n";
	return 0;
}
