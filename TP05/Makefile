DEST= ~/Informatique/S3/bin
INCLUDE= -I ~/Informatique/S3/include
OPTIONS= -Wall -ggdb3 -Werror -Wextra
TESTS= -DTESTS -DUSECOLORS
MODULES= nouvelle_fraction.o numdem.o # fractioncmp.o

%.o : %.c
	gcc $(INCLUDE) $(OPTIONS) -c $*.c

$(DEST)/%: %.c $(MODULES)
	gcc $(INCLUDE) $(OPTIONS) -o $(DEST)/$* $(TESTS) $*.c $(MODULES)

run/%: $(DEST)/%
	$(DEST)/$*
