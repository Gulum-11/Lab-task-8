#include<stdio.h>
int main(){
float t[3][3][3],a[3]={0},mt=-1000;
int i,j,k,h=0,mi,mj,mk;
printf("Enter temperatures for 3x3x3 cube:\n");
for(k=0;k<3;k++){
for(i=0;i<3;i++){
for(j=0;j<3;j++){
printf("Layer#%d;Row#%d;Col#%d: ",k+1,i+1,j+1);
scanf("%f",&t[k][i][j]);
a[k]+=t[k][i][j];
if(t[k][i][j]>mt){
mt=t[k][i][j];
mi=i;mj=j;mk=k;}}}}
for(k=0;k<3;k++) a[k]/=9;
for(k=0;k<3;k++) if(a[k]>a[h]) h=k;
printf("\nAverage temperatures per layer:\n");
for(k=0;k<3;k++) printf("Layer#%d: %.2f\n",k+1,a[k]);
printf("\nHottest layer: Layer#%d\n",h+1);
printf("Max temperature: %.2f at coordinates (Layer %d, Row
%d, Col %d)\n",mt,mk+1,mi+1,mj+1);
return 0;}
