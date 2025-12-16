#include<stdio.h>
int main(){
int s[10][4],i,j,c,co[10];
printf("!Enter 1 if reserved and 0 if available!\n");
for(i=0;i<10;i++){
for(j=0;j<4;j++){
printf("Row#%d ; Seat#%d: ",i+1,j+1);
scanf("%d",&s[i][j]);}}
for(i=0;i<10;i++){
c=0;
for(j=0;j<4;j++){
if(s[i][j]==1) c++;}
if(c==4) co[i]=1;
else co[i]=0;}
printf("\n\t`SEAT MAP~\t");
printf("\n(A for available and R for reserved)\n");
for(i=0;i<10;i++){
printf("R%d:",i+1);
for(j=0;j<4;j++){
if(s[i][j]==0) printf("\tA");
else if(s[i][j]==1) printf("\tR");
else printf("\tInvalid");}
printf("\n");}
printf("Full rows:");
for(i=0;i<10;i++){
if(co[i]==1)
printf("R#%d, ",i+1);}
return 0;
}
