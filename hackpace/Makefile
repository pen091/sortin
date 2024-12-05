
all :  ascending_sort.o decending_sort.o menu.o object sortin
	gcc ./src/sortin.c -o ./bin/sortin ./lib/penlib.so

ascending_sort.o : 
	gcc -fPIC -c ./src/ascending_sort.c 

decending_sort.o : 
	gcc -fPIC -c ./src/decending_sort.c  

menu.o : 
	gcc -fPIC -c ./src/menu.c

object :
	mv ./*.o ./obj

sortin :
	gcc -shared ./obj/*.o -o ./lib/penlib.so

run :
	./bin/sortin

clean :
	rm -rf ./obj/*.o
	rm rf ./bin/sortin
	rm rf ./lib/penlib.so
