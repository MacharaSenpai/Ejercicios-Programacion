#include<stdio.h>
#include<math.h>

int main(){
    
    int size_f,size_c,size,f,c,i,M[10][10],c1=0;
    int V1[10],V1_1[10],V1_2[10];
    char op='Y';
    
    while (op=='Y'){
    //--------------------------Carga matriz--------------------------------
    printf ("\nIngrese la cantidad de filas y columas de la matriz.\n");
    scanf ("%d%d",&size_f,&size_c);
    
    if (size_f==size_c){
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
            if (M[f][c]%2==0 && M[f][c]>0 && f==c){
                c1=c1+1;
                V1[c1]=M[f][c]; //Cuáles.
                V1_1[c1]=f; //Filas.
                V1_2[c1]=c; //Columnas.
            }
        }
    }

    printf ("\nEn la matriz hay %d valores pares positivos en su diagonal principal. Estos son en estas posiciones:\n",c1);
    for (i=1;i<=c1;i++){
        printf ("\n%d --> [%d,%d]\n",V1[i],V1_1[i],V1_2[i]);
    }
    }
    
    else{
        printf ("\nLa matriz no es cuadrada.\n");
    } 
    //-----------------------------Final---------------------------------
    printf ("\n¿Deseas continuar? [Y/n]\n");
    scanf ("%s",&op);

    if (op!='Y'){
    printf ("\nEjecución finalizada.\n");
    printf ("\n");
    }

  c1=0;

 } //While
} //Main