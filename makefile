main: main.cpp
	g++ -g main.cpp -o fileIO

run: main
	./fileIO

clean: 
	rm fileIO
