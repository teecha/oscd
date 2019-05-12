%{
#include<stdio.h>
#include<stdlib.h>
%}
%token ID
%left ‘+’
%left ‘*’
%%
expr  : expr ’+’ expr
         | expr ‘*’ expr
         | ‘(‘ expr ‘)’
         | ID
         ;
%%
int main()
{
printf(“\n enter the expression”);
yyparse();
printf(“\n valid”);
return 0;
}
yyerror()
{
printf(“\n invalid”);
exit(0);
}


