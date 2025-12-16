#include<stdio.h>
int main(){
float s[4][5],ts[4]={0},tp[5]={0},ms=0;
int i,j,mss=0;
printf("!Enter Product Price!\n");
for(i=0;i<4;i++){
for(j=0;j<5;j++){
printf("Salesman#%d ; Product#%d: ",i+1,j+1);
scanf("%f",&s[i][j]);
ts[i]+=s[i][j];
tp[j]+=s[i][j];
if(s[i][j]>ms){
ms=s[i][j];
mss=i;}}}
for(i=0;i<4;i++){
if(ts[i]>10000){
ts[i]*=1.1;}}
printf("\nTotal sales per salesman:\n");
for(i=0;i<4;i++){
printf("Salesman %d: Rs.%.2f\n",i+1,ts[i]);}
printf("\nTotal sales per product:\n");
for(j=0;j<5;j++){
printf("Product#%d: Rs.%.2f\n",j+1,tp[j]);}
printf("\nSalesman#%d sold the most expensive product:
Rs.%.2f\n",mss+1,ms);
return 0;}
