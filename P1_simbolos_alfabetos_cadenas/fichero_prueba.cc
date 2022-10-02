  std::cout << "-----SIMBOLOS----- " << std::endl;
  // constructor simbolo
  Simbolo simbolo_prueba{""};
  std::cout << simbolo_prueba << " " << simbolo_prueba.Longitud() << std::endl;

  // setter y getter simbolo
  simbolo_prueba.SetSimbolo("abc");

  // longitud
  std::cout << simbolo_prueba.GetSimbolo() << " " << simbolo_prueba.Longitud() <<std::endl;

  // concatenacion simbolos
  simbolo_prueba.Concatenar('d');
  std::cout << simbolo_prueba << std::endl;


  std::cout << "-----CADENAS----- " << std::endl;
  Cadena cadena_prueba{simbolo_prueba};
  std::cout << cadena_prueba << std::endl;
  cadena_prueba.ConcatenarDelante(simbolo_prueba);
  std::cout << cadena_prueba  << std::endl;

  // inversa cadenas
  Simbolo simbolo_ejercicio{"abbab"};
  Cadena cadena_ejercicio{simbolo_ejercicio};
  std::cout << cadena_ejercicio << "   longitud: " << cadena_ejercicio.Longitud() << std::endl;
  std::cout << cadena_ejercicio.Inversa() << std::endl;

  MostrarVectorCadenas(cadena_ejercicio.Prefijos());
  std::cout << std::endl;
  MostrarVectorCadenas(cadena_ejercicio.Sufijos());
  std::cout << std::endl;
   MostrarVectorCadenas(cadena_ejercicio.Subcadenas());
  std::cout << std::endl;


  // alfabetos
  std::cout << "-----ALFABETOS----- " << std::endl;
  Simbolo simbolo1{"a"};
  Simbolo simbolo2{"b"};
  Simbolo simbolo3{"cd"};

  Alfabeto alfabeto_prueba{simbolo1};
  std::cout << alfabeto_prueba << std::endl;
  alfabeto_prueba.AnadirAlfabeto(simbolo2);
  alfabeto_prueba.AnadirAlfabeto(simbolo3);
  std::cout << alfabeto_prueba << std::endl;
  std::cout << "Longitud: " << alfabeto_prueba.LongitudAlfabeto() << std::endl;
  std::cout << alfabeto_prueba << " el tercer simbolo del alfabeto es " << alfabeto_prueba.AtAlfabeto(2) <<std::endl;

  // setter
  Alfabeto alfabeto_prueba2{simbolo_ejercicio};
  alfabeto_prueba.SetAlfabeto(alfabeto_prueba2);
  alfabeto_prueba.AnadirAlfabeto(simbolo2);
  std::cout << alfabeto_prueba << std::endl;
  
  // Cadena pertenece a alfabeto
  std::cout << "-----CADENA PERTENECE A ALFABETO----- " << std::endl;
  Simbolo simbolo_z {""};
  Cadena cadena_z{simbolo_z};
  Simbolo simbolo_a{"c"};
  Simbolo simbolo_b{"ba"};
  Simbolo simbolo_c{"a"};
  Simbolo simbolo_d{"la"};
  Alfabeto alfabeto_z{simbolo_a};
  alfabeto_z.AnadirAlfabeto(simbolo_b);
  alfabeto_z.AnadirAlfabeto(simbolo_c);
  alfabeto_z.AnadirAlfabeto(simbolo_d);

  std::cout << cadena_z << "  " << alfabeto_z << std::endl;
  std::cout << alfabeto_z.CadenaPertenceAlfabeto(cadena_z) << std::endl;