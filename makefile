
CXX = x86_64-w64-mingw32-g++

compilar: src/main.cpp
	$(CXX) src/main.cpp -o bin/Mascota -I include

ejecutar: bin/Mascota
	./bin/Mascota
br: compilar ejecutar

clean: bin/Mascota
	rm bin/Mascota