#include <iostream>
#include <cstdlib>
#include "TPfinal.h"
using namespace std;

int main()
{


    int n=5, vec[n],vec3[5], i,cj ,pt=0, nj, cd, ronda=1,lanzamiento=1,c=0, vec5[5], vec4[4],ptmax=0;
    int  js,full, gnr, pk, es;
    int  pt2=0,pr=0;
    char respuesta, respuesta2, nombre[10], nombre1[10];

    for (i=0; i<5; i++){
        vec5[i]=0;
        vec4[i]=0;
    }
    cout << "1- Un jugador. " << endl;
    cout << "2- Dos jugadores." << endl;
    cin >> cj;
    system("cls");

    cout << "Ingrese nombre de jugador 1: ";
    cin >> nombre;

    if (cj==2){
        cout << "Ingrse nombre de jugador 2: ";
        cin >> nombre1;
    }
    cout << endl;

    system("pause");
    system("cls");

    while(ronda<=2){


    tirardados(vec,n);
    jugadas(js, es,full, pk, gnr,vec,vec3, n);

    pr=puntos ( vec3);

    if (cj==1 ||( cj==2 && c%2==0)){
        mostrar_tabla(pt, nombre, ronda, lanzamiento);
        }
        else{
        mostrar_tabla(pt2, nombre1, ronda, lanzamiento);
        }

    mostrardados(vec,n);

    cout << "¿Continuar lanzando? (s/n) ";
    cin >> respuesta;
    switch (respuesta){

    case 's':{
        lanzamiento++;
        cout << "¿Cuantos dados volves a tirar? ";
        cin >> cd;
        int vec1[cd];
        if (cd==1) {
        cout << "¿Cual?: ";
        cin >> vec1[0];
        }
        else {
        cout << "¿Cuales?"<< endl;
        for ( i=0; i<cd; i++){
            cin >> vec1[i];
        }
        }
        system("cls");

        otra_vuelta(cd, vec, vec1 );
        nuevo_tiro(vec1, cd);
        nuevo_grupo(vec, vec1, n, cd);
        jugadas(js, es,full, pk, gnr,vec,vec3, n);
        pr=puntos ( vec3);


        if (cj==1 ||( cj==2 && c%2==0)){
        mostrar_tabla(pt, nombre, ronda, lanzamiento);
        }
        else{
        mostrar_tabla(pt2, nombre1, ronda, lanzamiento);
        }
        mostrardados(vec,n);

        cout << endl;


    cout << "¿Continuar lanzando? (s/n) ";
    cin >> respuesta2;
    switch (respuesta2)
    case 's':{
        lanzamiento++;
        cout << "¿Cuantos dados volves a tirar? ";
        cin >> cd;
        int vec1[cd];
        if (cd==1) {
        cout << "¿Cual?: ";
        cin >> vec1[0];
        }
        else {
        cout << "¿Cuales?"<< endl;
        for ( i=0; i<cd; i++){
            cin >> vec1[i];
        }
        }


        otra_vuelta(cd, vec, vec1 );
        nuevo_tiro(vec1, cd);
        nuevo_grupo(vec, vec1, n, cd);
        jugadas(js, es,full, pk, gnr,vec,vec3, n);
        pr=puntos ( vec3);
        system ("cls");

        if (cj==1 ||( cj==2 && c%2==0)){
        mostrar_tabla(pt, nombre, ronda, lanzamiento);
        }
        else{
        mostrar_tabla(pt2, nombre1, ronda, lanzamiento);
        }
        mostrardados(vec,n);
        system ("pause");
        break;

    }

    break;

    }
    case 'n':
        break;

    }

    system("cls");

    if (cj==1 ||( cj==2 && c%2==0)){
        pt+=pr;

        }
        else{
        pt2+=pr;
        }

    system("cls");


    lanzamiento=1;
    if (cj==2 && c%2!=0){
    ronda++;
    }
    if (cj==1) ronda++;
    if (cj==2){
        c++;
    }
    }
    cout << "Juego terminado" << endl;
    if (cj==1){
    if (pt>ptmax){
        cout << "Nuevo record: "<< pt << " puntos" << endl;
        cout << "Felicitaciones!!!"<< endl;}
    }
    if (cj==2){
    victoria2_10(pt, pt2, nombre, nombre1);
    }





    return 0;
}
