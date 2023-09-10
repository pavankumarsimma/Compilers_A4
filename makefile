asgn4_21CS10020_21CS10060_out.txt: parser asgn4_21CS10020_21CS10060_test.c
	./parser < asgn4_21CS10020_21CS10060_test.c > asgn4_21CS10020_21CS10060_out.txt

parser: lex.yy.o y.tab.o asgn4_21CS10020_21CS10060.o
	gcc lex.yy.o y.tab.o asgn4_21CS10020_21CS10060.o -lfl -o parser

asgn4_21CS10020_21CS10060.o: asgn4_21CS10020_21CS10060.c
	gcc -c asgn4_21CS10020_21CS10060.c

lex.yy.o: lex.yy.c
	gcc -c lex.yy.c

y.tab.o: y.tab.c
	gcc -c y.tab.c

lex.yy.c: asgn4_21CS10020_21CS10060.l y.tab.h
	flex asgn4_21CS10020_21CS10060.l

y.tab.c y.tab.h: asgn4_21CS10020_21CS10060.y
	bison -dty --report=all asgn4_21CS10020_21CS10060.y

clean:
	rm parser asgn4_21CS10020_21CS10060.o asgn4_21CS10020_21CS10060_out.txt lex.yy.c lex.yy.o y.tab.c y.tab.o y.tab.h y.output
