CC = gcc
CFLAGS = -Wall
LDFLAGS = -lm

#Règle pour la cible "prog_c"
prog_c: main.o function.o
	$(CC) $(CFLAGS) -o prog_c main.o function.o $(LDFLAGS)

# Rgle pour la cible "main.o"
main.o: main.c
	$(CC) $(CFLAGS) -c main.c

# Règle pour la cible "function.o"
function.o: function.c
	$(CC) $(CFLAGS) -c function.c

# Règle pour nettoyer les fichiers objets et l'exécutable
clean:
		rm -f prog_c *.o