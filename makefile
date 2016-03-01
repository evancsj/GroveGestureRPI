main:main.o paj7620.o
	g++ -o main main.o paj7620.o -l wiringPi
main.o:main.cpp paj7620.h
	g++ -c main.cpp
paj7620.o:paj7620.cpp paj7620.h
	g++ -c paj7620.cpp
clean:
	rm main main.o paj7620.o
