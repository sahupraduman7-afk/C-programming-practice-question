#include  <stdio.h>
#include<string.h>
int main()
{
  char tictac[3][3]={{'X','O','O'},
                      {'X','O','X'},
                      {'X','X','O'}};
printf("\n%c|%c|%c",tictac[0][0],tictac[0][1],tictac[0][2]);
printf("\n------");
printf("\n%c|%c|%c",tictac[1][0],tictac[1][1],tictac[1][2]);
printf("\n------");
printf("\n%c|%c|%c",tictac[2][0],tictac[2][1],tictac[2][2]);
printf("\n------");
   return 0;                 
}