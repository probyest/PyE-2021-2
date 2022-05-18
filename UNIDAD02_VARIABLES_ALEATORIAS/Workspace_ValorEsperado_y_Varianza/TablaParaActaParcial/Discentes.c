#define LENGTH(A)   (sizeof(A)/sizeof(A[0]))
char Discente_accented[][64] = {
/*00*/"2/o ICE",
/*01*/"Aguilar Guerrero Juan Pablo",
/*02*/"Antonio López Erick",
/*03*/"Arzate Guitérrez Leonardo",
/*04*/"Cerón Puente Carlos Alberto",
/*05*/"Cortés Anota Tomás",
/*06*/"Del Cid Serrano Ulises Alberto",
/*07*/"García Hernández Atziri",
/*08*/"González Gutiérrez Cristhian Israel",
/*09*/"González Silerio Manuel",
/*10*/"Guevara Casias David",
/*11*/"Hernández Patiño Jesús",
/*12*/"Llanos Collado Carlos",
/*13*/"López López Daniel",
/*14*/"Martínez Álvarez Irving del Ángel",
/*15*/"Masetto Pérez Giusseppe",
/*16*/"Olmedo Patiño Carlos Manuel",
/*17*/"Ramírez Alarcón Jonatan Jazael",
/*18*/"Rivera Pérez Erick Roberto",
/*19*/"Saldaña Rosas Emmanuel",
/*20*/"Sánchez H. Luz Daniel Alejandro",
/*21*/"Santos Rojas Ana Belén",
/*22*/"Vázquez Arenas Carlos Alberto"
};
char Discente_unaccented[][64] = {
/*00*/"2/o ICE",
/*01*/"Aguilar Guerrero Juan Pablo",
/*02*/"Antonio Lopez Erick",
/*03*/"Arzate Guiterrez Leonardo",
/*04*/"Ceron Puente Carlos Alberto",
/*05*/"Cortes Anota Tomas",
/*06*/"Del Cid Serrano Ulises Alberto",
/*07*/"Garcia Hernandez Atziri",
/*08*/"Gonzalez Gutierrez Cristhian Israel",
/*09*/"Gonzalez Silerio Manuel",
/*10*/"Guevara Casias David",
/*11*/"Hernandez Patino Jesus",
/*12*/"Llanos Collado Carlos",
/*13*/"Lopez Lopez Daniel",
/*14*/"Martinez Alvarez Irving del Angel",
/*15*/"Masetto Perez Giusseppe",
/*16*/"Olmedo Patino Carlos Manuel",
/*17*/"Ramirez Alarcon Jonatan Jazael",
/*18*/"Rivera Perez Erick Roberto",
/*19*/"Saldana Rosas Emmanuel",
/*20*/"Sanchez H. Luz Daniel Alejandro",
/*21*/"Santos Rojas Ana Belen",
/*22*/"Vazquez Arenas Carlos Alberto"
};
char Discente[][64] = {
/*00*/"",
/*01*/"",
/*02*/"",
/*03*/"",
/*04*/"",
/*05*/"",
/*06*/"",
/*07*/"",
/*08*/"",
/*09*/"",
/*10*/"",
/*11*/"",
/*12*/"",
/*13*/"",
/*14*/"",
/*15*/"",
/*17*/"",
/*18*/"",
/*19*/"",
/*20*/"",
/*21*/"",
/*22*/""
};

char accented_to_unaccented(char c)
{
 switch(c){
// case 'a':return 'a';
// case 'b':return 'b';
// case 'c':return 'c';
// case 'd':return 'd';
// case 'e':return 'e';
// case 'f':return 'f';
// case 'g':return 'g';
// case 'h':return 'h';
// case 'i':return 'i';
// case 'j':return 'j';
// case 'k':return 'k';
// case 'l':return 'l';
// case 'm':return 'm';
// case 'n':return 'n';
// case 'o':return 'o';
// case 'p':return 'p';
// case 'q':return 'q';
// case 'r':return 'r';
// case 's':return 's';
// case 't':return 't';
// case 'u':return 'u';
// case 'v':return 'v';
// case 'w':return 'w';
// case 'x':return 'x';
// case 'y':return 'y';
// case 'z':return 'z';
// case 'A':return 'A';
// case 'B':return 'B';
// case 'C':return 'C';
// case 'D':return 'D';
// case 'E':return 'E';
// case 'F':return 'F';
// case 'G':return 'G';
// case 'H':return 'H';
// case 'I':return 'I';
// case 'J':return 'J';
// case 'K':return 'K';
// case 'L':return 'L';
// case 'M':return 'M';
// case 'N':return 'N';
// case 'O':return 'O';
// case 'P':return 'P';
// case 'Q':return 'Q';
// case 'R':return 'R';
// case 'S':return 'S';
// case 'T':return 'T';
// case 'U':return 'U';
// case 'V':return 'V';
// case 'W':return 'W';
// case 'X':return 'X';
// case 'Y':return 'Y';
// case 'Z':return 'Z';
 case 'á':return 'a';
 case 'é':return 'e';
 case 'í':return 'i';
 case 'ó':return 'o';
 case 'ú':return 'u';
 case 'ñ':return 'n';
 case 'Á':return 'A';
 case 'É':return 'E';
 case 'Í':return 'I';
 case 'Ó':return 'O';
 case 'Ú':return 'U';
 case 'Ñ':return 'N';
 default:return c;
 }
}

void unaccent(char to[],char from[])
{
 short i=0;
 while(from[i]!='\0'){
    to[i]=accented_to_unaccented(from[i]);
 }
}
