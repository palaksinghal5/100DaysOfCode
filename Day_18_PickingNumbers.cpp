#include<stdio.h>
#include<stdlib.h>
int main(){
    int i,j,n,a[1000000],p=0,temp,x=0;
scanf("%d",&n);
for(i=0;i<n;i++){
    scanf("%d ",&a[i]);
}
for (i = 0; i < n; i++) {          
       for (j = i+1; j < n; j++)  {
        if(a[i]>a[j]){
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
}}
for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        
        if(((a[j]-a[i])==1)||((a[j]-a[i]==0))){p++;}
    }if(i==0){x=p;}
    if(p>x){x=p;p=0;}else{p=0;}
   
}
printf("%d",x);
    return 0;

}
