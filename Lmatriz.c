#include <stdio.h>
#include <stdlib.h>

int main(){

    FILE *LER;

    LER = fopen("asphalt_02.txt","r");
    int **p;
    int i,j,N=1025;



    p=(int **) malloc(N * sizeof(int *));
    for(i=0;i<N;i++){
        p[i]=(int*) malloc(N* sizeof(int));
        for(j=0;j<N;j++){

            fscanf(LER," %d ;",&p[i][j]);


        }
      }

    fclose(LER);



    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            printf("%d ",p[i][j]);
        }
        printf("\n");
        printf("\n");
        printf("Linha %d",i);
        printf("\tElementos: %d",j);
        printf("\n");
        printf("\n");

    }

    for(i=0;i<N;i++){
        free(p[i]);
    }
    free(p);
    /////-----> Liberar memoria matriz!!

    return 0;
}
