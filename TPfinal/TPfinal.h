#ifndef TPFINAL_H_INCLUDED
#define TPFINAL_H_INCLUDED


void tirardados (int vec[], int tam);
void mostrardados (int vec[], int tam);
int juegosimple (int vec[], int tam);
/*calcula puntos obtenidospor juegos*/
int escalera(int vec[],int tam);
/*5 dados en orden creciente*/
int generala (int vec[], int tam);
/*5 dados iguales*/
int full (int vec[], int tam);
/* Triada y pareja de dados iguales*/
void jugadas(int js, int es,int fl, int pk, int gnr,int vec[],int vec3[], int n);
/*Calcula los puntos de la partida*/
int puntos ( int vec3[]);
/*Devuelve el mayor puntaje posible*/
int poker (int vec[], int tam);
void otra_vuelta (int tam, int vec[], int vec1[]);
/*Se eliminan los dados elegidos para ser tirados otra vez*/
void nuevo_tiro  (int vec1[],int tam );
/*Se dan nuevos valores a los dados seleccionados;*/
void nuevo_grupo (int vec[], int vec1[], int tam, int tam1);
/*Los nuevos dados son asignados al vector de la partida*/
void mostrar_tabla (int pt, char nombre[], int ronda, int lanzamiento);
/*Muestra jugador, numero de ronda, puntaje totaly numero delanzamiento*/
void jugadas(int js, int es, int full,int pk, int gnr,int vec[],int vec3[], int n);
/*Devuelve el mayor puntaje posible*/
void jugadas_cero (int vec5[], int vec4[]);
/*int menu_jugada(int vec[], int vec4[], int vec5[],int c);*/
/*Muestra las jugadas posibles y permite elegir una*/
int juego (int nj);
void victoria_gral(int lanzamiento,int gnr);
/*Declara ganador al jugador que saca generala servida*/
void victoria2_10 (int pt, int pt2, char nombre[], char nombre1[]);
/*Una vez psadas 10 rondas declara ganador al jugador con mayor puntaje*/





#endif // TPFINAL_H_INCLUDED
