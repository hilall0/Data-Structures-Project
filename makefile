tum: derleme calistirma

derleme:
	g++ -I ./include/ -o ./lib/Sekil.o -c ./src/Sekil.cpp
	g++ -I ./include/ -o ./lib/Ucgen.o -c ./src/Ucgen.cpp
	g++ -I ./include/ -o ./lib/Dikdortgen.o -c ./src/Dikdortgen.cpp
	g++ -I ./include/ -o ./lib/Yildiz.o -c ./src/Yildiz.cpp
	g++ -I ./include/ -o ./lib/TekYonluBagliListe.o -c ./src/TekYonluBagliListe.cpp
	g++ -I ./include/ -o ./lib/IkiYonluBagliListe.o -c ./src/IkiYonluBagliListe.cpp
	g++ -I ./include/ -o ./lib/main.o -c ./src/main.cpp

calistirma:
	g++ ./lib/Sekil.o ./lib/Ucgen.o ./lib/Dikdortgen.o ./lib/Yildiz.o ./lib/TekYonluBagliListe.o ./lib/IkiYonluBagliListe.o ./lib/main.o -o ./bin/Program
	./bin/Program