#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(){

  FILE *asfanT;
  FILE *asfanV;
  FILE *gramaT;
  FILE *gramaV;

  asfanT = fopen("asfanT.txt","w");
  asfanV = fopen("asfanV.txt","w");
  gramaT = fopen("gramaT.txt","w");
  gramaV = fopen("gramaV.txt","w");

  int A[25],B[25],X[50];
  int i,j,H;
  int x,y,aux,W;




    srand((unsigned) time(NULL));

for(W=1;W<=2;W++){

         for(i=0;i<50;i++){
            do{
                X[i]=(rand()%50)+1;
                H=0;

                for(j=0;j<i;j++){
                    if(X[i]==X[j]){
                        H=1;
                        break;
                    }
                }
            }while(H);
         }


            for(j=0;j<25;j++){
                A[j]=X[j];
            }

            int k=25;
            for(j=0;j<25;j++){
                    if(k==50){
                        break;
                    }else{
                        B[j]=X[k];
                    }
            k++;
            }

            /////////////// PRINTAR SABAGÇA ////////////////////
            printf("\n====================================\n");
            printf("Geral A+B\n");
            for(j=0;j<50;j++){
                printf("%d ",X[j]);
            }
             printf("\n====================================\n");

              printf("\n====================================\n");


            printf("Vetor A\n");
            for(j=0;j<25;j++){
                printf("%d ",A[j]);
            }
             printf("\n====================================\n");


             printf("Vetor B\n");
            for(j=0;j<25;j++){
                printf("%d ",B[j]);
            }
             printf("\n====================================\n");

             if(W==1){
                    for(i=0;i<25;i++){
                        if(A[i]<10){
                             fprintf(asfanT,"asphalt_0%d.txt\n",A[i]);
                        }else{
                            fprintf(asfanT,"asphalt_%d.txt\n",A[i]);
                        }
                    }
                    for(i=0;i<25;i++){
                        if(B[i]<10){
                            fprintf(asfanV,"asphalt_0%d.txt\n",B[i]);
                        }else{
                            fprintf(asfanV,"asphalt_%d.txt\n",B[i]);
                        }
                    }
                    fclose(asfanT);
                    fclose(asfanV);
            //////////////////////////////////// GRAMA /////////////
             }else if(W==2){
                    for(i=0;i<25;i++){
                        if(A[i]<10){
                            fprintf(gramaT,"grass_0%d.txt\n",A[i]);
                        }else{
                            fprintf(gramaT,"grass_%d.txt\n",A[i]);
                        }
                    }

                    for(i=0;i<25;i++){
                         if(B[i]<10){
                            fprintf(gramaV,"grass_0%d.txt\n",B[i]);
                         }else{
                            fprintf(gramaV,"grass_%d.txt\n",B[i]);
                         }
                    }
                    fclose(gramaT);
                    fclose(gramaV);
             }

    }

    return 0;
}
