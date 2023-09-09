#include <stdio.h>
extern int yyparse();

int main() {
    printf("-------------------- Parsing Line  --------------------\n\n");
    yyparse();
    return 0;
}