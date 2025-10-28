%{
#include <stdio.h>
#include <stdlib.h>
#include "gvlogo.tab.h"

extern void yyerror(const char* s);
%}

%%


penup	{ return PENUP; }
pendown	{ return PENDOWN; }
print	{ return PRINT; }
save	{ return SAVE; }
change_color	{ return CHANGE_COLOR; }
color	{ return COLOR; }
clear	{ return CLEAR; }
turn	{ return TURN; }
loop	{ return LOOP; }
move	{ return MOVE; }
number	{ return NUMBER; }
gotohere	{ return GOTO; }
where	{ return WHERE; }
[0-9]+	{ yylval.num = atof(yytext); return NUMBER; }
end		{ return END; }
=		{ return EQUALS; }
\+		{ return PLUS; }
-		{ return SUB; }
\*		{ return MULT; }
\/		{ return DIV; }
;		{ return SEP; }
\$[A-Z]	{ yylval.var = yytext[1] - 65; return VARIABLE; }

[ \t\r\n]			;
.			{ yyerror("Lexing Syntax error.\n"); } 

%%

int yywrap(void){
	return 1;
}
