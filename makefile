
compilar: src/main.cpp
	g++ src/main.cpp -o bin/Mascota -I include

ejecutar: bin/Mascota
	./bin/Mascota
br: compilar ejecutar

clean: bin/Mascota
	rm bin/Mascota