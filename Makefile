
CC = gcc#declaro o compilador, no caso o gnu c compiler (coletania de copiladores do gnu)
CFLAGS = -Wall -Wextra -pedantic -std=c2x #declaração das flags para o compilador

TARGET = MyWC #declaração do nome do app
OBJ = main.o \
	  myWcUtils.o #declaração dos objectos que serão linkados para criar o programa

#Compilação dos diferentes objectos antes de se tornar o executavel
$(TARGET): $(OBJ)
	$(CC) $(OBJ) -o $(TARGET)

main.o: main.c myWcUtils.h
	$(CC) $(CFLAGS) -c main.c

myWcUtils.o: myWcUtils.c myWcUtils.h
	$(CC) $(CFLAGS) -c myWcUtils.c


#função de limpesa dos objectos e executaveis criados
clean: 
	rm -f $(OBJ) $(TARGET)
