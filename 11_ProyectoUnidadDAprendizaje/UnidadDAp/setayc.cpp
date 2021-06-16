/** "Sistemas de Comunicaciones" */
formato[0].add_ante(19);
formato[0].add_ante(20);
formato[0].add_cons(10);
formato[0].add_cons(21);

/** "Seniales y Sistemas I" */
formato[1].add_ante(8);
formato[1].add_cons(20);

/** "Laboratorio de Ingenieria de Control" */
formato[2].add_ante(22);
formato[2].add_ante(23);
/** No consecuentes */
formato[2].add_cons(UINT_MAX);

/** "Comunicaciones por Microondas" */
formato[3].add_ante(24);
formato[3].add_cons(25);

/** "Sistemas Digitales I" */
formato[4].add_ante(26);
formato[4].add_cons(27);

/** "Conversion de la Energia II" */
formato[5].add_ante(4);
/** No consecuentes */
formato[5].add_cons(UINT_MAX);

/** "Telefonia" */
formato[6].add_ante(29);
formato[6].add_ante(10);
formato[6].add_ante(0);
formato[6].add_ante(30);
formato[6].add_cons(31);

/** "Organizacion de Computadoras" */
/** Como antecedentes se indica:
 * Las UA b\'asicas en general que se
 * dan en los primeros semestres.
 */
formato[7].add_ante(UINT_MAX);
formato[7].add_cons(32);
formato[7].add_cons(33);

/** "Campos y Ondas Electromagneticas" */
formato[8].add_ante(34);
formato[8].add_ante(35);
formato[8].add_cons(36);
formato[8].add_cons(37);

/** "Electronica II" */
formato[9].add_ante(38);
formato[9].add_cons(22);

/** "Redes de Telecomunicaciones" */
formato[10].add_ante(6);
formato[10].add_ante(39);
formato[10].add_ante(40);
formato[10].add_ante(41);
formato[10].add_cons(42);

/** "Conversion de la Energia I" */
formato[11].add_ante(14);
formato[11].add_ante(36);
formato[11].add_ante(43);
//formato[11].add_cons(44);
formato[11].add_cons(5);
formato[11].add_cons(2);
formato[11].add_cons(12);

/** "Laboratorio de Instrumentacion Virtual" */
formato[12].add_ante(45);
formato[12].add_cons(42);

/** "Sistemas de Radiocomunicaciones I" */
formato[13].add_ante(37);
formato[13].add_cons(0);

/** "Laboratorio de Circuitos y Mediciones" */
formato[14].add_ante(4);
formato[14].add_ante(46);
formato[14].add_cons(47);

/** "Laboratorio de Disenio Electronico" */
formato[15].add_ante(36);
formato[15].add_ante(37);
formato[15].add_ante(38);
formato[15].add_ante(4);
formato[15].add_ante(9);
formato[15].add_ante(27);
formato[15].add_ante(22);
formato[15].add_ante(47);
formato[15].add_ante(23);
formato[15].add_cons(42);

/** "Amplificacion de Seniales" */
formato[16].add_ante(48);
formato[16].add_ante(36);
formato[16].add_ante(37);
formato[16].add_ante(49);
formato[16].add_cons(50);
formato[16].add_cons(51);
formato[16].add_cons(42);

/** "Ingenieria Acustica" */
/** Como antecedentes se indica:
 * Las UA b\'asicas en general que se
 * dan en los primeros semestres.
 */
formato[17].add_ante(UINT_MAX);
formato[17].add_cons(52);

/** Microprocesadores y Perifericos" */
formato[18].add_ante(4);
formato[18].add_ante(27);
formato[18].add_ante(47);
formato[18].add_cons(2);
formato[18].add_cons(53);

/*(*************************************************)*/
/** "Sistemas de Comunicaciones" */
//formato[0].add_ante(19);
//formato[0].add_ante(20);
//formato[0].add_cons(10);
//formato[0].add_cons(21);
diagrama[0].add_ante(19);
diagrama[0].add_cons(54);

/** "Seniales y Sistemas I" */
//formato[1].add_ante(8);
//formato[1].add_cons(20);
diagrama[1].add_ante(UINT_MAX);
diagrama[1].add_cons(20);


/** "Laboratorio de Ingenieria de Control" */
//formato[2].add_ante(22);
//formato[2].add_ante(23);
/** No consecuentes */
diagrama[2].add_ante(23);
diagrama[2].add_ante(18);
diagrama[2].add_ante(11);
/** En el diagrama tampoco hay consecuentes */
diagrama[2].add_cons(UINT_MAX);

/** "Comunicaciones por Microondas" */
//formato[3].add_ante(24);
//formato[3].add_cons(25);
/**En el diagrama no hay antecedentes ni consecuentes */
diagrama[3].add_ante(UINT_MAX);
diagrama[3].add_cons(UINT_MAX);

/** "Sistemas Digitales I" */
//formato[4].add_ante(26);
//formato[4].add_cons(27);
/**En el diagrama no hay antecedentes*/
diagrama[4].add_ante(UINT_MAX);
diagrama[4].add_cons(27);
diagrama[4].add_cons(23);
diagrama[4].add_cons(18);
diagrama[4].add_cons(15);
diagrama[4].add_cons(14);

/** "Conversion de la Energia II" */
//formato[5].add_ante(4);
/** No consecuentes */
diagrama[5].add_ante(11);
/**En el diagrama tampoco hay consecuentes*/
diagrama[5].add_cons(UINT_MAX);

/** "Telefonia" */
//formato[6].add_ante(29);
//formato[6].add_ante(10);
//formato[6].add_ante(0);
//formato[6].add_ante(30);
//formato[6].add_cons(31);
/**No antecedentes en diagrama*/
diagrama[6].add_ante(UINT_MAX);
diagrama[6].add_cons(10);

/** "Organizacion de Computadoras" */
/** Como antecedentes se indica:
 * Las UA b\'asicas en general que se
 * dan en los primeros semestres.
 */
//formato[7].add_cons(32);
//formato[7].add_cons(33);
/**Organizacion de Computadoras no aparece en diagrama*/
diagrama[7].add_ante(UINT_MAX);
diagrama[7].add_cons(UINT_MAX);

/** "Campos y Ondas Electromagneticas" */
//formato[8].add_ante(34);
//formato[8].add_ante(35);
//formato[8].add_cons(36);
//formato[8].add_cons(37);
diagrama[8].add_ante(35);
diagrama[8].add_ante(55);
diagrama[8].add_cons(36);

/** "Electronica II" */
//formato[9].add_ante(38);
//formato[9].add_cons(22);
diagrama[9].add_ante(38);
diagrama[9].add_cons(15);
diagrama[9].add_cons(22);

/** "Redes de Telecomunicaciones" */
//formato[10].add_ante(6);
//formato[10].add_ante(39);
//formato[10].add_ante(40);
//formato[10].add_ante(41);
//formato[10].add_cons(42);
diagrama[10].add_ante(20);
diagrama[10].add_ante(41);
diagrama[10].add_cons(42);

/** "Conversion de la Energia I" */
//formato[11].add_ante(14);
//formato[11].add_ante(36);
//formato[11].add_ante(43);
//formato[11].add_cons(5);
//formato[11].add_cons(2);
//formato[11].add_cons(12);
diagrama[11].add_ante(36);
diagrama[11].add_ante(43);
diagrama[11].add_ante(14);
//std::cout<<"diagrama11antecedenteSize="<<diagrama[11].antecedente.size()<<"\n";
//std::cout<<diagrama[11].antecedente[0]<<" "
//<<diagrama[11].antecedente[1]<<" "
//<<diagrama[11].antecedente[2]<<" \n";
diagrama[11].add_cons(2);
diagrama[11].add_cons(5);
diagrama[11].add_cons(12);

/** "Laboratorio de Instrumentacion Virtual" */
//formato[12].add_ante(45);
//formato[12].add_cons(42);
diagrama[12].add_ante(45);
diagrama[12].add_ante(11);
diagrama[12].add_cons(42);

/** "Sistemas de Radiocomunicaciones I" */
//formato[13].add_ante(37);
//formato[13].add_cons(0);
/**En diagrama no tiene antecedentes ni consecuentes*/
diagrama[13].add_ante(UINT_MAX);
diagrama[13].add_cons(UINT_MAX);

/** "Laboratorio de Circuitos y Mediciones" */
//formato[14].add_ante(4);
//formato[14].add_ante(46);
//formato[14].add_cons(47);
diagrama[14].add_ante(46);
diagrama[14].add_ante(4);
diagrama[14].add_cons(47);
diagrama[14].add_cons(11);

/** "Laboratorio de Disenio Electronico" */
//formato[15].add_ante(36);
//formato[15].add_ante(37);
//formato[15].add_ante(38);
//formato[15].add_ante(4);
//formato[15].add_ante(9);
//formato[15].add_ante(27);
//formato[15].add_ante(22);
//formato[15].add_ante(47);
//formato[15].add_ante(23);
//formato[15].add_cons(42);
diagrama[15].add_ante(47);
diagrama[15].add_ante(27);
diagrama[15].add_ante(4);
diagrama[15].add_ante(36);
diagrama[15].add_ante(37);
diagrama[15].add_ante(38);
diagrama[15].add_ante(9);
diagrama[15].add_ante(22);
diagrama[15].add_ante(23);
/**En diagrama no tiene consecuentes*/
diagrama[15].add_cons(UINT_MAX);

/** "Amplificacion de Seniales" */
//formato[16].add_ante(48);
//formato[16].add_ante(36);
//formato[16].add_ante(37);
//formato[16].add_ante(49);
//formato[16].add_cons(50);
//formato[16].add_cons(51);
//formato[16].add_cons(42);
/** Amplificacion de Seniales no aparece en el diagrama */
diagrama[16].add_ante(UINT_MAX);
diagrama[16].add_cons(UINT_MAX);

/** "Ingenieria Acustica" */
/** Como antecedentes se indica:
 * Las UA b\'asicas en general que se
 * dan en los primeros semestres.
 */
//formato[17].add_cons(52);
/** Ingenieria Acustica no tiene antecedentes ni consecuentes
 *  en el diagrama.
 */
diagrama[17].add_ante(UINT_MAX);
diagrama[17].add_cons(UINT_MAX);

/** Microprocesadores y Perifericos" */
//formato[18].add_ante(4);
//formato[18].add_ante(27);
//formato[18].add_ante(47);
//formato[18].add_cons(2);
//formato[18].add_cons(53);
diagrama[18].add_ante(47);
diagrama[18].add_ante(27);
diagrama[18].add_ante(4);
diagrama[18].add_cons(23);
diagrama[18].add_cons(53);
diagrama[18].add_cons(2);
