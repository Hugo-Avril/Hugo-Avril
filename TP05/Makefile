DEST= ~/Informatique/S3/bin
INCLUDE= -I ~/Informatique/S3/include
OPTIONS= -Wall -ggdb3 -Werror -Wextra
TESTS= -DTESTS -DUSECOLORS
MODULES= nouvelle_fraction.o numdem.o fractioncmp.o
LIB= -L ~/Informatique/S3/lib -lm -lfraction
LFRAC= ~/Informatique/S3/lib/libfraction.a
PROGRAMME=

~/Informatique/S3/bin/%: %.c $(MODULES)
	gcc -I ~/Informatique/S3/include $(OPTIONS) $(TESTS) $*.c $(MODULES) -o ~/Informatique/S3/bin/$*

run/%: ~/Informatique/S3/bin/%
	~/Informatique/S3/bin/$*




~/Informatique/S3/lib/libfraction.a : $(MODULES)
	ar rcs ~/Informatique/S3/lib/libfraction.a $(MODULES)

%.o : %.c
	gcc $(INCLUDE) $(OPTIONS) -c $*.c

$(DEST)/%: %.c ~/Informatique/S3/lib/libfraction.a
	gcc $(INCLUDE) $(OPTIONS) $(TESTS) -o $(DEST)/$* $*.c  $(LIB)

run/%: $(DEST)/%
	$(DEST)/$*

$(PROGRAMME): $(PROGRAMME).c $(LFRAC)
	gcc $(OPTIONS) $(INCLUDE) -o $(PROGRAMME) $(PROGRAMME).c $(LIB)
