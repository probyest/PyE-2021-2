
/** "Desarrollo de Software Orientado a Objetos" */
formato[0].add_ante("Programacion Orientada a Objetos");
formato[0].add_cons("Proyectos de Ingenieria de Software");
mapaICI[0].add_ante("Programacion Orientada a Objetos");
mapaICI[0].add_cons("Proyectos de Ingenieria de Software");

/** "Arquitectura de Computadoras I" */
formato[1].add_ante("Matematicas Basicas para Ingenieria");
formato[1].add_ante("Programacion");
formato[1].add_ante("Organizacion de Computadoras");
formato[1].add_cons("Arquitectura de Computadoras II");
formato[1].add_cons("Analisis de Algoritmos");
formato[1].add_cons("Teoria de la Computacion");
formato[1].add_cons(
           "Microprocesadores y Microcontroladores");
mapaICI[1].add_ante("Organizacion de Computadoras");
mapaICI[1].add_cons("Arquitectura de Computadoras II");

/** "Arquitectura de Computadoras II" */
formato[2].add_ante("Arquitectura de Computadoras I");
formato[2].add_cons(UINT_MAX);
mapaICI[2].add_ante("Arquitectura de Computadoras I");
mapaICI[2].add_cons("Teoria de la Computacion");
mapaICI[2].add_cons("Seniales y Sistemas");
mapaICI[2].add_cons("Bases de Datos");

/** "Inteligencia Artificial" */
formato[3].add_ante("Sistemas Expertos");
formato[3].add_cons("Redes Neuronales");
mapaICI[3].add_ante("Ingenieria de Redes I");
mapaICI[3].add_cons("Ingenieria de Redes III");
mapaICI[3].add_cons("Topicos Avanzados");

/** "Lenguajes de Programacion" */
formato[4].add_ante("Programacion Avanzada");
formato[4].add_ante("Estructura de Datos");
formato[4].add_cons(UINT_MAX);
mapaICI[4].add_ante("Estructura de Datos");
mapaICI[4].add_cons(UINT_MAX);

/** "Ingenieria de Sistemas de Informacion I" */
formato[5].add_ante("Bases de Datos");
formato[5].add_ante("Ingenieria de Redes I");
formato[5].add_cons(
           "Ingenieria de Sistemas de Informacion II");
mapaICI[5].add_ante(UINT_MAX);
mapaICI[5].add_cons(
           "Ingenieria de Sistemas de Informacion II");

/** "Sistemas Distribuidos" */
formato[6].add_ante("Programacion Avanzada");
formato[6].add_ante("Estructura de Datos");
formato[6].add_cons("Ingenieria de Redes I");
formato[6].add_cons("Seguridad Computacional");
mapaICI[6].add_ante("Analisis de Algoritmos");
mapaICI[6].add_cons("Programacion Orientada a Objetos");

/** "Base de Datos Avanzadas" */
formato[7].add_ante("Bases de Datos");
formato[7].add_ante("Algebra Superior");
formato[7].add_ante("Algebra Lineal");
formato[7].add_ante("Matematicas Computacionales");
formato[7].add_cons("Sistemas Distribuidos");
formato[7].add_cons(
           "Desarrollo de Software Orientado a Objetos");
mapaICI[7].add_ante("Bases de Datos");
mapaICI[7].add_cons("Ingenieria de Redes I");

/** "Organizacion de Computadoras" */
formato[8].add_ante("Programacion");
formato[8].add_cons("Arquitectura de Computadoras I");
mapaICI[8].add_ante(UINT_MAX);
mapaICI[8].add_cons("Arquitectura de Computadoras I");

/** "Tecnicas de Produccion de Sistemas" */
formato[9].add_ante(UINT_MAX);
formato[9].add_cons(UINT_MAX);
mapaICI[9].add_ante("Seniales y Sistemas");
mapaICI[9].add_cons(UINT_MAX);

/** "Tecnologias de Informacion Emergente" */
formato[10].add_ante("Bases de Datos");
formato[10].add_ante(
            "Ingenieria de Sistemas de Informacion I");
formato[10].add_cons(
            "Ingenieria de Sistemas de Informacion I");
mapaICI[10].add_ante(
            "Sistemas Computacionales en ambiente Multimedia");
mapaICI[10].add_ante("Sistemas Expertos");
mapaICI[10].add_cons("Legislacion Informatica");

/** "Disenio de Compiladores" */
formato[11].add_ante("Lenguajes de Programacion");
formato[11].add_ante("Teoria de Computacion");
formato[11].add_ante(
            "Ingenieria de Sistemas de Informacion II");
formato[11].add_cons(
            "Arquitecturas de Desarrollo de Software");
mapaICI[11].add_ante(
            "Ingenieria de Sistemas de Informacion II");
mapaICI[11].add_cons(
            "Arquitecturas de Desarrollo de Software");

/** "Ingenieria Economica" */
formato[12].add_ante("Costos Aplicados a la Ingenieria");
formato[12].add_cons(
"Introduccion a la Administracion y Gestion de Proyectos");
mapaICI[12].add_ante("Costos Aplicados a la Ingenieria");
mapaICI[12].add_cons(UINT_MAX);

/** "Matematicas Computacionales" */
formato[13].add_ante("Algebra Superior");
formato[13].add_ante("Probabilidad y Estadistica");
formato[13].add_cons("Arquitectura de Computadoras I");
formato[13].add_cons("Programacion");
mapaICI[13].add_ante(UINT_MAX);
mapaICI[13].add_cons("Analisis de Algoritmos");
mapaICI[13].add_cons("Teoria de la Computacion");

/** "Programacion Avanzada" */
formato[14].add_ante("Programacion");
formato[14].add_cons("Estructura de Datos");
formato[14].add_cons("Lenguajes de Programacion");
formato[14].add_cons("Analisis de Algoritmos");
formato[14].add_cons("Programacion Orientada a Objetos");
mapaICI[14].add_ante("Programacion");
mapaICI[14].add_cons("Estructura de Datos");

/** "Lenguaje Ensamblador" */
formato[15].add_ante("Arquitectura de Computadoras I");
formato[15].add_ante("Arquitectura de Computadoras II");
formato[15].add_cons(
            "Microprocesadores y Microcontroladores");
mapaICI[15].add_ante(UINT_MAX);
mapaICI[15].add_cons("Sistemas Operativos");

/** "Probabilidad y Estadistica" */
formato[16].add_ante("Matematicas Basicas para Ingenieria");
formato[16].add_cons(UINT_MAX);
mapaICI[16].add_ante("Programacion");
mapaICI[16].add_cons(UINT_MAX);

/** "Ingenieria de Redes I" */
formato[17].add_ante(UINT_MAX);
formato[17].add_cons(UINT_MAX);
mapaICI[17].add_ante("Base de Datos Avanzadas");
mapaICI[17].add_cons("Ingenieria de Redes II");
mapaICI[17].add_cons("Seguridad Computacional");
mapaICI[17].add_cons("Inteligencia Artificial");

/** "Ingenieria de Redes II" */
formato[18].add_ante(UINT_MAX);
formato[18].add_cons(UINT_MAX);
mapaICI[18].add_ante("Ingenieria de Redes I");
mapaICI[18].add_cons("Ingenieria de Redes III");
mapaICI[18].add_cons("Topicos Avanzados");


/** "Ingenieria de Redes III" */
formato[19].add_ante("Ingenieria de Redes I");
formato[19].add_ante("Ingenieria de Redes II");
formato[19].add_cons(UINT_MAX);
mapaICI[19].add_ante("Ingenieria de Redes I");
mapaICI[19].add_ante("Ingenieria de Redes II");
mapaICI[19].add_cons("Elaboracion de Tesis Profesional");

/** "Programacion" */
formato[20].add_ante("Matematicas Basicas para Ingenieria");
formato[20].add_cons("Programacion Avanzada");
formato[20].add_cons("Estructura de Datos");
formato[20].add_cons("Lenguaje Ensamblador");
formato[20].add_cons("Lenguajes de Programacion");
formato[20].add_cons("Matematicas Computacionales");
formato[20].add_cons("Analisis de Algoritmos");
formato[20].add_cons("Programacion Orientada a Objetos");
formato[20].add_cons(
            "Desarrollo de Software Orientado a Objetos");
formato[20].add_cons("Seguridad Computacional");
formato[20].add_cons(
            "Arquitecturas de Desarrollo de Software");
mapaICI[20].add_ante("Algebra Superior");
mapaICI[20].add_ante("Geometria Analitica");
mapaICI[20].add_ante("Matematicas Basicas para Ingenieria");
mapaICI[20].add_ante("Calculo Diferencial e Integral");
mapaICI[20].add_cons("Programacion Avanzada");
mapaICI[20].add_cons("Ecuaciones Diferenciales");
mapaICI[20].add_cons("Calculo Vectorial II");
mapaICI[20].add_cons("Organizacion de Computadoras");
mapaICI[20].add_cons("Probabilidad y Estadistica");

/** "Ecuaciones Diferenciales" */
formato[21].add_ante("Calculo Diferencial e Integral");
formato[21].add_ante("Matematicas Basicas para Ingenieria");
formato[21].add_ante("Geometria Analitica");
formato[21].add_cons("Matematicas Avanzadas");
formato[21].add_cons("Investigacion de Operaciones I");
formato[21].add_cons("Matematicas Computacionales");
mapaICI[21].add_ante("Algebra Lineal");
mapaICI[21].add_ante("Dibujo de Ingenieria");
mapaICI[21].add_ante("Calculo Vectorial I");
mapaICI[21].add_ante("Mecanica (Estatica)");
mapaICI[21].add_ante("Programacion");
mapaICI[21].add_cons("UINT_MAX");

/** "Teoria de la Computacion" */
formato[22].add_ante(UINT_MAX);
formato[22].add_cons("Analisis de Algoritmos");
formato[22].add_cons("Disenio de Compiladores");
formato[22].add_cons("Sistemas Operativos");
mapaICI[22].add_ante("Matematicas Computacionales");
mapaICI[22].add_ante("Arquitectura de Computadoras II");
mapaICI[22].add_cons("Sistemas Distribuidos");
mapaICI[22].add_cons("Tecnicas de Produccion de Sistemas");

/** "Topicos Avanzados" */
formato[23].add_ante("Inteligencia Artificial");
formato[23].add_cons(UINT_MAX);
mapaICI[23].add_ante("Seguridad Computacional");
mapaICI[23].add_ante("Ingenieria de Redes II");
mapaICI[23].add_ante("Inteligencia Artificial");
mapaICI[23].add_cons("Elaboracion de Tesis Profesional");

/** "Sistemas Expertos" */
formato[24].add_ante("Matematicas Computacionales");
formato[24].add_ante("Probabilidad y Estadistica");
formato[24].add_cons("Inteligencia Artificial");
mapaICI[24].add_ante(
            "Microprocesadores y Microcontroladores");
mapaICI[24].add_cons(
            "Tecnologias de Informacion Emergente");

/** "Programacion Orientada a Objetos" */
formato[25].add_ante("Programacion");
formato[25].add_ante("Programacion Avanzada");
formato[25].add_ante("Lenguajes de Programacion");
formato[25].add_cons(
            "Desarrollo de Software Orientado a Objetos");
mapaICI[25].add_ante("Sistemas Distribuidos");
mapaICI[25].add_cons(
            "Desarrollo de Software Orientado a Objetos");

/** "Laboratorio de Ingenieria de Redes" */
formato[26].add_ante("Ingenieria de Redes I");
formato[26].add_ante("Ingenieria de Redes II");
formato[26].add_cons("Ingenieria de Redes III");
mapaICI[26].add_ante("Auditoria y Consultoria Informatica");
mapaICI[26].add_cons("Elaboracion de Tesis Profesional");

/** "Simulacion de Sistemas" */
formato[27].add_ante("Probabilidad y Estadistica");
formato[27].add_ante("Matematicas Avanzadas");
formato[27].add_ante("Programacion");
formato[27].add_ante("Programacion Avanzada");
formato[27].add_cons("Investigacion de Operaciones I");
formato[27].add_cons("Investigacion de Operaciones II");
mapaICI[27].add_ante("Electricidad y Magnetismo");
mapaICI[27].add_cons("Investigacion de Operaciones I");

/** "Auditoria y Consultoria Informatica" */
formato[28].add_ante(
            "Arquitecturas de Desarrollo de Software");
formato[28].add_ante("Disenio de Compiladores");
formato[28].add_ante(
            "Ingenieria de Sistemas de Informacion I");
formato[28].add_ante(
            "Ingenieria de Sistemas de Informacion II");
formato[28].add_cons("Laboratorio de Ingenieria de Redes");
mapaICI[28].add_ante(
            "Arquitecturas de Desarrollo de Software");
mapaICI[28].add_cons("Redes Neuronales");
mapaICI[28].add_cons("Laboratorio de Ingenieria de Redes");

/** "Analisis de Algoritmos" */
formato[29].add_ante("Algebra Superior");
formato[29].add_ante("Algebra Lineal");
formato[29].add_ante("Matematicas Basicas para Ingenieria");
formato[29].add_ante("Programacion");
formato[29].add_ante("Estructura de Datos");
formato[29].add_ante("Matematicas Computacionales");
formato[29].add_cons("Sistemas Distribuidos");
formato[29].add_cons(
            "Arquitecturas de Desarrollo de Software");
mapaICI[29].add_ante("Matematicas Computacionales");
mapaICI[29].add_cons("Sistemas Distribuidos");

