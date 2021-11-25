#commande de compilation 

CC=gcc 

#options de compilation 

CFLAGS=  -Wextra -Wall -pedantic 

#options d'édition de liens : librairies utilisées 

LDFLAGS=  -lm -lentrees 

#emplacement des .a (librairies) du TP 

LIB= ../../lib 

# emplacement des .h du TP 

INC= ../../include 

# permet d'exécuter en mode debug (génère les informations nécessaires au debugger) 

ifeq ($(DEBUG),yes) 

    CFLAGS += -g 

endif 

EXEC= libentrees.a 

SRC=entrees.c  

OBJ= $(SRC:.c=.o) 

all : $(EXEC) 

# Permet d'afficher le mode d'éxécution 

ifeq ($(DEBUG),yes) 

    @echo "debug" 

else 

    @echo "sans debug" 

endif 

libentrees.a : entrees.c $(INC)/entrees.h  # indique la dépendance de fichiers pour produire la lib (commenter si pb) 

	$(CC) -o $(OBJ) -c $(SRC) $(CFLAGS) 

	ar rcs $(LIB)/libentrees.a $(OBJ)   # les deux commandes suivantes créent la librairie  

	ranlib $(LIB)/libentrees.a          # dans le répertoire donné par LIB 

 

%.o: %.c %.h 
	@$(CC) -o $@ -c $< $(CFLAGS) 

clean: 

	rm $(LIB)/libentrees.a  *.o          # permet d'automatiser le "nettoyage" 
