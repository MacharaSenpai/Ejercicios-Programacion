#include<stdio.h>
#include<math.h>

int main(){
    
    int size_f,size_c,size,f,c,i,c1=0,c2=0,V1[10];
    int M[10][10],V1_1[10],V1_2[1],V2[10],V2_1[10],V2_2[10];
    
    //--------------------------Carga matriz--------------------------------
    printf ("\nIngrese la cantidad de filas y columas de la matriz.\n");
    scanf ("%d%d",&size_f,&size_c);

    size=size_f*size_c;
    printf ("\nLa cantidad de valores que tendrá la matriz será de %d.\n",size);

    printf ("\nIngrese los valores de la matriz.\n");
    for (f=1;f<=size_f;f++){
        for (c=1;c<=size_c;c++){
            printf ("M[%d,%d] = ",f,c);
            scanf ("%d",&M[f][c]);
        }
    }
    //----------------------------Division entre respuestas.----------------------------------
    printf ("\n-------------------------------------------------------------------------------------------\n");
    //-----------------------------Procesos en la matriz---------------------------------
    for (f=1;f<=size_f;f++){
        for (c=1;c<=size_c;c++){
            if (M[f][c]%3==0 && M[f][c]%2==0 && f%2==0){
                c1=c1+1; //Cuantos.
                V1[c1]=M[f][c]; //Cuáles.
                V1_1[c1]=f; //Filas.
                V1_2[c1]=c; //Columnas.
            }

            if (M[f][c]%3==0 && M[f][c]%2==0 && f%2==1){
                c2=c2+1; //Cuantos.
                V2[c2]=M[f][c]; //Cuáles.
                V2_1[c2]=f; //Filas.
                V2_2[c2]=c; //Columnas.
            }
        }
    }

    if (c1>c2){
        printf ("\nEn la matriz hay más valores pares múltiplos de tres en filas pares. En total hay %d. Estos son en estas posiciones:\n",c1);
        for (i=1;i<=c1;i++){
        printf ("\n%d --> [%d,%d]\n",V1[i],V1_1[i],V1_2[i]);}

    }
    
    if (c2>c1){
        printf ("\nEn la matriz hay más valores pares múltiplos de tres en filas impares. En total hay %d. Estos son en estas posiciones:\n",c2);
        for (i=1;i<=c2;i++){
        printf ("\n%d --> [%d,%d]\n",V2[i],V2_1[i],V2_2[i]);}
    }
    //-----------------------------Final---------------------------------
    
    printf ("\nEjecución finalizada.\n");
    printf ("\n");
} //Main