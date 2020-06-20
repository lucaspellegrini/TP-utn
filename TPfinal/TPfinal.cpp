#include <cstdlib>
#include <iostream>
using namespace std;
#include <cstdlib>
#include <ctime>
#include "TPfinal.h"
void tirardados (int vec[], int tam){
    int i;
    srand(time(NULL));

    for(i=0; i<tam; i++){
        vec[i]= rand()%6+1;
}
}
void mostrardados (int vec[], int tam){
    int i;
    for(i=0; i<tam; i++){
            cout << vec[i]<< endl;

    }
}
void jugadas(int js, int es,int fl, int pk, int gnr,int vec[],int vec3[], int n){
    vec3[0]=juegosimple(vec, n);
    vec3[1]=escalera(vec, n);
    vec3[2]=full(vec, n);
    vec3[3]=poker(vec, n);
    vec3[4]=generala(vec, n);

}

int juegosimple (int vec[], int tam){
    int i, n, y, vec2[6], mayor;

    for (y=0; y<6; y++){
        vec2[y]=0;
    }

    for (i=0; i<tam ;i++){
        for (n=0; n<6; n++){
            if (vec[i]==n+1){
            vec2[n]=vec2[n]+1;
            }
        }
        }

    for (y=0; y<6; y++){
           vec2[y]= vec2[y]*(y+1);
    }
    mayor=vec2[0];
    for (y=1; y<6; y++){
           if( vec2[y]>mayor){
            mayor=vec2[y];
           }
           }
        return mayor;
    }

int escalera(int vec[], int tam){
    int i, men,j , puntos=0, c=0;

    men=vec[0];
    for (i=1; i<tam; i++){
            if (vec[i]<men) men=vec[i];
    }

    for (j=0; j<tam; j++){

    for (i=0; i<tam; i++){
        if (vec[i]==men+1) {
        c++;
        men=vec[i];
    }

    }
    }
    if (c==tam-1){
        puntos=30;
    }
    else{
        puntos=0;
    }
    return puntos;
}
int full(int vec[], int tam){
    int i, q, x, y, cc=0 , puntos=0, c=0;
    x=vec[0];
    for (i=0; i<tam; i++){
        if (x==vec[i]){
            c++;
        }
        else {
        y=vec[i];

    }
    }
    for (q=0; q<tam; q++){
        if (y==vec[q]){
            cc++;
        }

    }
    if ((c==2 && cc==3) || (c==3 && cc==2) ) puntos = 30;


    return puntos;
}
int generala(int vec[], int tam){
    int i, puntos;
    bool bi=true;
    for(i=1; i<tam; i++){
        if (vec[0]!=vec[i]){
            bi=false;
        }
    }
    if (bi==true) puntos=50;
    else puntos =0;

    return puntos;
}



int puntos (int vec3[]){
    int mayor, i;
    mayor=vec3[0];
    for (i=1; i<5; i++){
        if (vec3[i]>mayor){
            mayor =vec3[i];
        }
    }
    return mayor;
}

int poker (int vec[], int tam){
    int i,j, puntos, c=0,ant;

    for (j=0; j<tam; j++){
        ant=vec[j];
    for (i=0; i<tam; i++){
        if (ant==vec[i]){
            c++;
        }
    }
    }
    if (c==17){
        puntos = 40;
    }
    else{
        puntos=0;
    }
   return puntos;
}


void otra_vuelta( int tam, int vec[], int vec1[]){
    int i, n;
  for (i=0; i<tam; i++){
       n=vec1[i];
       vec[n-1]=0;
  }
   }

void nuevo_tiro(int vec1[],int tam ){
    int i;
    srand(time(NULL));

    for(i=0; i<tam; i++){
        vec1[i]= rand()%6+1;
}
}

void nuevo_grupo(int vec[], int vec1[], int tam, int tam1){
    int j, c=0;

    for(j=0; j<tam; j++){
    if (vec[j]==0){
        vec[j]=vec1[c];
        c++;
    }
}
}

void mostrar_tabla (int pt, char nombre[], int ronda, int lanzamiento){
    cout << "Turno de: " << nombre << "  | ";
    cout << "Ronda N°: " << ronda << "  | ";
    cout << "Puntaje total: " << pt  << endl;
    cout << "------------------------------------------------------------";
    cout << endl << endl;
    cout << "Lanzamiento N°: " << lanzamiento << endl;
    cout << "------------------------------------------------------------" << endl;
}

void victoria_gral(int lanzamiento,int gnr){
    if (lanzamiento==1 && gnr == 50){
        cout << "GENERALA SERVIDA: Victoria de: ";
        cout << "FELICITACIONES!!!!";
    }
}

void victoria2_10 (int pt, int pt2, char nombre[], char nombre1[]){
    if (pt>pt2){
        cout << "El ganador es: " << nombre <<endl;
        cout << "Puntaje: " << pt << endl;
    }
    else{
        if (pt2>pt){
             cout << "El ganador es: " << nombre1 <<endl;
             cout << "Puntaje: " << pt2 << endl;
        }
        else{
            cout << "Empate" << endl;
        }
    }
}

/*int menu_jugada(int vec[], int vec4[], int vec5[],int  c){
    int jugada;
    cout << "¿Que jugada realizar? " << endl;
   if (c%2==0){
    if ((vec[0]!=0) && (vec4[0]==0)){
    cout << "1. Puntos por dados" << endl;
   }
   }
   else{
    if ((vec[0]!=0) && (vec5[0]==0)){
    cout << "1. Puntos por dados" << endl;
    }
   }
   if (c%2==0){
    if ((vec[1]!=0) && (vec4[1]==0)){
    cout << "2. Escalera " << endl;
   }
   }
   else{
     if ((vec[1]!=0) && (vec5[1]==0)){
   }
   cout << "2. Escalera " << endl;
   }

   if (c%2==0){
    if ((vec[2]!=0) && (vec4[2]==0)){
    cout << "3. Full " << endl;
   }
   }
   else{
     if ((vec[2]!=0) && (vec5[2]==0)){
    cout << "3. Full " << endl;
   }
   }

   if (c%2==0){
    if ((vec[3]!=0) && (vec4[3]==0)){
    cout << "4. Poker " << endl;
   }
   }
   else{
     if ((vec[3]!=0) && (vec5[3]==0)){
    cout << "4. Poker " << endl;
   }
   }

   if (c%2==0){
    if ((vec[4]!=0) && (vec4[4]==0)){
    cout << "4. Generala " << endl;
   }
   }
   else{
     if ((vec[4]!=0) && (vec5[4]==0)){
    cout << "4. Generala " << endl;
   }
   }


   cin >>  jugada;
   if (c%2==0)vec4[jugada-1]=1;
   else vec5[jugada-1]=1;

   return jugada;

}

int juego (int nj){
    int j;
    switch(nj){
        case '1':
            j=1;
        break;
        case '2':
            j=25;
        break;
        case '3':
            j=30;
        break;
        case '4':
            j=40;
        break;
        case '5':
             j=50;
        break;

    }
    return j;

}
*/
/*
void (int vec5[], int vec4[]){
    int i;
    for (i=0; i<5; i++){
        vec5[i]=0;
        vec4[i]=0;
    }
}
*/






