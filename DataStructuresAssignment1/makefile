hepsi:derle calistir

derle:Kova.o Top.o KovaKontrol.o Test.o
	g++   ./lib/Kova.o ./lib/KovaKontrol.o ./lib/Top.o ./lib/Test.o -o ./bin/Test
Kova.o:
	g++ -I "./include/"  -c ./src/Kova.cpp -o ./lib/Kova.o
Top.o:
	g++ -I "./include/" -c ./src/Top.cpp -o ./lib/Top.o
KovaKontrol.o:
	g++ -I "./include/" -c ./src/KovaKontrol.cpp -o ./lib/KovaKontrol.o
Test.o:
	g++ -I "./include/" -c ./src/Test.cpp -o ./lib/Test.o
calistir:
	./bin/Test

