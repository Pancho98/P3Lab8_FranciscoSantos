make.out: Heroe.o Joven.o Adulto.o Item.o Bumeran.o Arco.o Bomba.o Monstruo.o Jefes.o SemiJefe.o Comun.o Main.o
	g++ Heroe.o Joven.o Adulto.o Item.o Bumeran.o Arco.o Bomba.o Monstruo.o Jefes.o SemiJefe.o Comun.o Main.o -o make.out

Heroe.o: Heroe.h Heroe.cpp Item.h Monstruo.h
	g++ -c Heroe.cpp

Joven.o: Joven.h Joven.cpp Heroe.o Item.o Monstruo.h
	g++ -c Joven.cpp

Adulto.o: Adulto.h Adulto.cpp Heroe.o Item.o Monstruo.h
	g++ -c Adulto.cpp

Item.o: Item.h Item.cpp
	g++ -c Item.cpp

Bumeran.o: Bumeran.h Bumeran.cpp Item.h
	g++ -c Bumeran.cpp

Arco.o: Arco.h Arco.cpp Item.h
	g++ -c Arco.cpp

Bomba.o: Bomba.h Bomba.cpp Item.h
	g++ -c Bomba.cpp

Monstruo.o: Monstruo.h Monstruo.cpp Item.h
	g++ -c Monstruo.cpp

Jefes.o: Jefes.h Jefes.cpp Monstruo.h Item.h
	g++ -c Jefes.cpp

SemiJefe.o: SemiJefe.h SemiJefe.cpp Monstruo.h Item.h
	g++ -c SemiJefe.cpp

Comun.o: Comun.h Comun.cpp Monstruo.h Item.h
	g++ -c Comun.cpp

Main.o: Main.cpp Heroe.h Joven.h Adulto.h Item.h Bumeran.h Arco.h Bomba.h Monstruo.h Jefes.h SemiJefe.h Comun.h
	g++ -c Main.cpp
