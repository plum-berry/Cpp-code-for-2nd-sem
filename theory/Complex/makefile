cc=g++
LIB = -L.
LFLAGS = -lcomplex
IN = -I.
main: main.o
	$(cc) -o main main.o $(IN) $(LIB) $(LFLAGS)
main.o: main.cpp
	$(cc) -c main.cpp $(IN) $(LIB) $(LFLAGS)
library: Complex.o
	ar rcs libcomplex.a Complex.o
Complex.o: Complex.cpp
	$(cc) -c Complex.cpp

