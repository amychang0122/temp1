main_pro2:main_pro2.o class_pro2.o 
	g++ -o main_pro2 main_pro2.o class_pro2.o
class_pro2.o:class_pro2.cpp class_pro2.h
	g++ -c class_pro2.cpp
main_pro2.o:main_pro2.cpp class_pro2.h
	g++ -c main_pro2.cpp
clean:
	rm main_pro2.o class_pro2.o
