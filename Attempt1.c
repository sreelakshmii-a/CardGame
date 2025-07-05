#include<stdio.h>
#include<stdlib.h>
#include <stdio.h>
#include <string.h>

char* A[50] = {
        "Ball", "Light", "Spoon", "Chair", "Laptop", "Bottle", "Book",
        "Phone", "Pillow", "Pen", "Backpack", "Headphones", "Table", "Mirror",
        "Blanket", "Plant", "Clock", "Fan", "Camera", "Cup", "Key"
    };

  void waitForUser() {
    printf("\nPress Enter to continue...");
    getchar(); // for the newline from previous input
    getchar(); // to wait for actual Enter
}


void arrangement(char* A[],char* P[],char* Q[],char* R[]) {
  int p=0,q=0,r=0;
  for(int i=0;i<21;i++){
    if(i%3==0)
      R[r++]=A[i];
    else if (i%3==1)
      Q[q++]=A[i];
    else
      P[p++]=A[i];
    
  }    

   printf("\nPile 1:\n");
    for (int i = 0; i < 7; i++) printf("%s\t", P[i]);
    printf("\nPile 2:\n");
    for (int i = 0; i < 7; i++) printf("%s\t", Q[i]);
    printf("\nPile 3:\n");
    for (int i = 0; i < 7; i++) printf("%s\t", R[i]);

  
}


char PileSelect(char* A[],char* P[],char* Q[],char* R[],int n){
 int index=0;
  if(n==1){
    for(int i=0;i<7;i++) A[index++]=Q[i];
    for (int i = 0; i < 7; i++) A[index++] = P[i];
    for (int i = 0; i < 7; i++) A[index++] = R[i];
    
  }
  else if(n==2){
     for (int i = 0; i < 7; i++) A[index++] = P[i];
    for (int i = 0; i < 7; i++) A[index++] = Q[i];
      for (int i = 0; i < 7; i++) A[index++] = R[i];
    
  }
  else if (n== 3){
     
    for (int i = 0; i < 7; i++) A[index++] = P[i];
    for (int i = 0; i < 7; i++) A[index++] = R[i];
    for (int i = 0; i < 7; i++) A[index++] = Q[i];
  }

  
}



void main(){
  int n;
  char* P[50], *Q[50], *R[50];
  
  printf("Remember anything from the following\n");
  for (int i = 0; i < 21; i++) {
        printf("%2d. %s\n", i + 1, A[i]);
    }

  waitForUser();
  for (int round = 0; round < 3; round++) {
        arrangement(A, P, Q, R);
        printf("\nIn which pile is your item? (1, 2, or 3): ");
        scanf("%d", &n);
        PileSelect(A, P, Q, R, n);
    }
  printf("\n\n");
  
  printf("%s!!!\n",A[10]);
  

}