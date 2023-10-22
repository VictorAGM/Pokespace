
bin/Pokefight : src/Pokefight.cpp include/*
	c++ src/Pokefight.cpp -o bin/Pokefight -lcurses -I include

run : bin/Pokefight
	./bin/Pokefight