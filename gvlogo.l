%{
#include <stdio.h>
#include <stdlib.h>
#include "gvlogo.tab.h"

extern void yyerror(const char* s);
%}

/*created Tokens to be consumed upon call except for ignoring whitespace token*/

%%


penup	{ return PENUP; }
pendown	{ return PENDOWN; }
print	{ return PRINT; }
save	{ return SAVE; }
change_color	{ return CHANGE_COLOR; }
color	{ return COLOR; }
clear	{ return CLEAR; }
turn	{ return TURN; }
move	{ return MOVE; }
gotohere	{ return GOTO; }
where	{ return WHERE; }
[0-9]+(\.[0-9]+)?	{ yylval.f = atof(yytext); return NUMBER; }
end		{ return END; }
=		{ return EQUALS; }
\+		{ return PLUS; }
-		{ return SUB; }
\*		{ return MULT; }
\/		{ return DIV; }
;		{ return SEP; }
\[A-Z]	{ yylval.v = yytext[1] - 65; return VARIABLE; }
\".+\"	{ yylval.s = yytext; return QSTRING; }

[ \t\r\n]			;
.			{ yyerror("Lexing Syntax error.\n"); } 

%%

int yywrap(void){
	return 1;
}
