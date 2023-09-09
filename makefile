asgn4_roll_out.txt: parser asgn4_roll_test.c
	./parser < asgn4_roll_test.c > asgn4_roll_out.txt

parser: lex.yy.o y.tab.o asgn4_roll.o
	gcc lex.yy.o y.tab.o asgn4_roll.o -lfl -o parser

asgn4_roll.o: asgn4_roll.c
	gcc -c asgn4_roll.c

lex.yy.o: lex.yy.c
	gcc -c lex.yy.c

y.tab.o: y.tab.c
	gcc -c y.tab.c

lex.yy.c: asgn4_roll.l y.tab.h
	flex asgn4_roll.l

y.tab.c y.tab.h: asgn4_roll.y
	bison -dty --report=all asgn4_roll.y

clean:
	rm parser asgn4_roll.o asgn4_roll_out.txt lex.yy.c lex.yy.o y.tab.c y.tab.o y.tab.h y.output
