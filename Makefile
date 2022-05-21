all: tp0

tp0: principal.o arquivo.o multiplica.o
	gcc -o tp0 principal.o arquivo.o multiplica.o

principal.o: principal.c complexos.h
	gcc -g -Wall -c principal.c

arquivo.o: arquivo.c complexos.h
	gcc -g -Wall -c arquivo.c

multiplicador.o: multiplica.c complexos.h
	gcc -g -Wall -c multiplica.c

clean:
	/bin/rm -f tp0 principal.o arquivo.o multiplica.o



