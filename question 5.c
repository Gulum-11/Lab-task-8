#include<stdio.h>
int main(){
int n[2][3][3],sum[2][3]={0},ct[2],ot;
int i,j,k,ts;
printf("Enter Marks for students out of 100:\n");
for(k=0;k<2;k++){
for(i=0;i<3;i++){
for(j=0;j<3;j++){
printf("Class#%d;Student#%d;Subject#%d: ",k+1,i+1,j+1);
scanf("%d",&n[k][i][j]);
sum[k][i]+=n[k][i][j];}}}
for(k=0;k<2;k++){
ot=sum[k][0];
ts=0;
for(i=0;i<3;i++){
if(sum[k][i]>ot){
ot=sum[k][i];
ts=i;}}
printf("Top Performer of Class %d: Student %d with %d
marks/300\n",k+1,ts+1,ot);}
return 0;}
