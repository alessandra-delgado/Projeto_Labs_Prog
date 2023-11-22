# a seguinte linha define a variável compiler como tendo a string cc
compiler = gcc
SOURCEFILES = $(wildcard *.c) 
LIB=-lgmp -lm

.PHONY	:	all clean

all	:	main.exe

main.exe	:	main_team_3.o functions_team_3.o
	$(compiler) -o $@ main_team_3.o functions_team_3.o $(LIB)
    
%.o	:	%.c
	$(compiler) -c $<

# o phony target seguinte limpa todos os ficheiros auxiliares (*.o)
clean :
	rm *.o
	@echo "Ficheiros removidos."