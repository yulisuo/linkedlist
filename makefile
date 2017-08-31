SRC=main.c
HEAD=head.h


out:$(SRC) $(HEAD)
	gcc $(SRC) $(HEAD) -o out
