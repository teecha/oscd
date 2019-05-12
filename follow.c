#include<stdio.h>
#include<ctype.h>
void FIRST(char );
void FOLLOW(char);
int count,n=0,m=0;
char prodn[10][10], first[10],flw[10];
main()
{
int i, choice;
char c,ch;
printf("How many productions ? :");
scanf("%d",&count);
printf("Enter %d productions epsilon= $ :\n\n",count);
for(i=0;i<count;i++)
scanf("%s%c",prodn[i],&ch);
do
{
n=0;
printf("Element :");
scanf("%c",&c);
FOLLOW(c);
for(i=0;i<n;i++)
flw[m++]=first[i];
printf("\n first(%c)—{",c);
for(i=0;i<m;i++)
printf("%c",flw[i]);
printf("}\n");
printf("press1 to continue");
scanf("%d%c",choice,&ch);
}
while(choice==1);
}
void FIRST(char c)
{
int j;
if(!(isupper(c)))
first[n++]=c;
for(j=0;j<count;j++)
{
if(prodn[j][0]==c)
{
if(prodn[j][2]=='$')
first[n++]='$';
else if(islower(prodn[j][2]))
first[n++]=prodn[j][2];
else FIRST(prodn[j][2]);
} } }
void FOLLOW(char c)
{
int j=0,i=0;
if(prodn[0][0]==c)
flw[m++]='$';
for(i=0;i<count;i++)
{
for(j=2;j<5;j++)
{
if(prodn[i][j]==c)
{
if(islower(prodn[i][j+1]))
{
flw[m++]=prodn[i][j+1];
}
else if(isupper(prodn[i][j+1]))
FIRST(prodn[i][j+1]);
else if(prodn[i][j+1]=='\0')
{
FOLLOW(prodn[i][0]);
}
else
flw[m++]=prodn[i][j+1];
}
}
}
}