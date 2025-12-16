#include<stdio.h>
int main(){
int d[3][3],k[3][3],e[3][3],i,j,mi=0,mj=0,mv;
printf("Enter Data matrix:\n");
for(i=0;i<3;i++){
for(j=0;j<3;j++){
printf("Data[%d][%d]:",i+1,j+1);
scanf("%d",&d[i][j]);}}
printf("Enter Key matrix:\n");
for(i=0;i<3;i++){
for(j=0;j<3;j++){
printf("Key[%d][%d]:",i+1,j+1);
scanf("%d",&k[i][j]);}}
mv=(d[0][0]*k[0][0]);
e[0][0]=mv;
for(i=0;i<3;i++){
for(j=0;j<3;j++){
e[i][j]=(d[i][j]*k[i][j])+(i+j);
if(e[i][j]>mv){mv=e[i][j];mi=i;mj=j;}}}
printf("\nEncrypted matrix:\n");
for(i=0;i<3;i++){
for(j=0;j<3;j++){
printf("|%d |",e[i][j]);} printf("\n");}
printf("Maximum encrypted value: %d at cell
(%d,%d)\n",mv,mi+1,mj+1);
return 0;}
