DEST= ~/Informatique/S3/bin
INCLUDE= -I ~/Informatique/S3/include
OPTIONS= -Wall -ggdb3 -Werror -Wextra
TESTS= -DTESTS -DUSECOLORS

%.o : %.c
	gcc $(INCLUDE) $(OPTIONS) -c $*.c

$(DEST)/ %: %.c
	gcc $(INCLUDE) $(OPTIONS) -o $(DEST)/$* $(TESTS) $*.c

run/%: $(DEST)/%
	$(DEST)/$*
