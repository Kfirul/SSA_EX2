#include<stdio.h>
#include<math.h>
#define SIZE 10;
int mat[SIZE][SIZE];

void makeMat(){
    int i,j;
    for(i=0;i<SIZE;i++){
        for(j=0;j<SIZE;j++){
            scanf("%d ",&mat[i][j]);
}  
  }

}

void isConnect(){
    int i,j;
    scanf("%d %d",&i,&j);
    if(mat[i][j]==0) printf("False\n");
    else printf("True\n");
}

void shortestPath(); 


