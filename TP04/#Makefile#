
~/Informatique/S3/bin/CreerMatrice: CreerMatrice.c AfficheMatrice.o
	gcc -I ~/Informatique/S3/include  -Wall -Werror -Wextra -DTESTS -ggdb3 CreerMatrice.c AfficheMatrice.o -o ~/Informatique/S3/bin/CreerMatrice

run/CreerMatrice: ~/Informatique/S3/bin/CreerMatrice
	~/Informatique/S3/bin/CreerMatrice

CreerMatrice.o: CreerMatrice.c
	gcc -I ~/Informatique/S3/include -Wall -Werror -Wextra  -ggdb3 -c CreerMatrice.c


~/Informatique/S3/bin/AfficheMatrice: AfficheMatrice.c CreerMatrice.o
	gcc -I ~/Informatique/S3/include -Wall -Werror -Wextra -DTESTS -ggdb3 AfficheMatrice.c CreerMatrice.o -o ~/Informatique/S3/bin/AfficheMatrice

run/AfficheMatrice: ~/Informatique/S3/bin/AfficheMatrice
	~/Informatique/S3/bin/AfficheMatrice


AfficheMatrice.o: AfficheMatrice.c
	gcc -I ~/Informatique/S3/include  -Wall -Werror -Wextra  -ggdb3 -c AfficheMatrice.c
