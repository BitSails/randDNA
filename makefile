CPPFLAGS=-std=c++14 -Wall 

all:
	@g++ $(CPPFLAGS) -o bin/rdna.out src/main.cpp  
	

run:
	@bin/rdna.out 

tests:  bin/tests.o 
	@printf "\033[33mCompiling Tests...\n\033[0m"	
	g++ $(CPPFLAGS) -o bin/tests.out bin/tests.o tests/tests.cpp && bin/tests.out --success

bin/tests.o: tests/tests.cpp tests/tests_main.cpp 
	@printf "\033[36mCompiling Test Driver...(please be patient)\n\033[0m"	
	g++ $(CPPFLAGS)  -c tests/tests_main.cpp -o bin/tests.o

tests2:  bin/tests2.o 
	@printf "\033[33mCompiling EXTRA Tests...\n\033[0m"	
	g++ $(CPPFLAGS) -o bin/tests2.out bin/tests2.o tests/tests2.cpp && bin/tests2.out --success

bin/tests2.o: tests/tests2.cpp tests/tests_main.cpp 
	@printf "\033[36mCompiling EXTRA Test Driver...(please be patient)\n\033[0m"	
	g++ $(CPPFLAGS)  -c tests/tests_main.cpp -o bin/tests2.o


clean:
	@printf "\033[31mRemoving objects (and temporary files)\033[0m\n"
	@rm -rf bin/*.o*

