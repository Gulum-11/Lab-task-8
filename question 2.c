#include<stdio.h>
int main(){
int s[3][3],i,j,x,c,v=1;
printf("!Enter the Sudoku grid numbers!\n");
for(i=0;i<3;i++){
for(j=0;j<3;j++){
scanf("%d",&s[i][j]);
if(s[i][j]<1||s[i][j]>9){
printf("Invalid input");
break;}}}
for(c=1;c<=9;c++){ x=0;
for(i=0;i<3;i++){
for(j=0;j<3;j++){
if(s[i][j]==c) x++;}}
if(x!=1){v=0;break;}}
if(v) { printf("Valid Sudoku grid\n");
for(i=0;i<3;i++){
for(j=0;j<3;j++){
printf("| %d |",s[i][j]);}
printf("\n");}}
else printf("Invalid Sudoku grid");
return 0;}
