#include<stdio.h>
#include<stdlib.h>

void arrangement(char A[]) {
    char P[8], Q[8], R[8]; 

    for (int i = 0; i < 7; i++) {
        P[i] = A[i];
        Q[i] = A[i + 1];
        R[i] = A[i + 2];
    }

    P[7] = '\0';
    Q[7] = '\0';
    R[7] = '\0';

    printf("Pile 1\n %s", P);
    printf("Pile 2\n %s", Q);
    printf("Pile 3\n %s", R);
}




void main(){
  printf("Ball, Light, Spoon, Chair, Laptop, Bottle, Book,\n Phone, Pillow, Pen, Backpack, Headphones, Table, Mirror,\n Blanket, Plant, Clock, Fan, Camera, Cup, Key\n");
  printf("Select something from the above collection and keep it a secret!\n");
  for(int i=0;i<3;i++){

  }

}