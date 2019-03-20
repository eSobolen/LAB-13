#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int random(int N){
    return rand()%N;
}
int main(){
    int i,j,A[90],B[90],C[90],X,flag=0,n=-1,min,c,Z,k,count=0;
    printf("enter Z");
    scanf("%d",&Z);  
    for(i=0;i<Z;i++){
        
        B[i]=A[i]=random(450);
        printf("%7d",A[i]);
    }
   printf("Enter X:");
    scanf("%d",&X);
    for(i=0;i<Z;i++){
    if(A[i]==X) n=i;}
        
        
   if(n>0)    
         printf("i= %5d\n",n+1);
    else  printf("error");
    
    
    
      
      for(i=0;i<Z;i++){ 
      if(i<n) B[i]=0;
      C[i]=B[i];
     }
      
      printf("\n");
    
    for(i=0;i<Z;i++){ 
      if(i>=n&&A[i]!=0){ 
      printf(" %d  ",A[i]);
	  
	  
	  
	  }}
	  
        
     
        
        

    
    for(i=0;i<Z-1;i++){
   int  min=i;
    for(int j=i+1;i<Z;j++)
      if(C[j]<C[min])
	  
        min=j;
       if(min!=i){
        c=C[i];C[i]=C[min];C[min]=c;        
            }     
    
    for(i=0;i<Z;i++){
        if(C[i]!=0){
    printf("  %d  ",C[i]);}}}}

