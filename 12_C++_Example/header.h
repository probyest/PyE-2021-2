#include <iostream>
struct Person{
	std::string nombre;
	std::string edad;
	std::string idNum;
friend std::ostream& operator<<(std::ostream& out,Person& rhs){
	out << rhs.nombre << "\n"
	    << rhs.edad << "\n"
	    << rhs.idNum << "\n";
	return out;
}
    Person(std::string Nombre,std::string Edad,std::string IdN)
    :nombre(Nombre),edad(Edad),idNum(IdN){}
};
