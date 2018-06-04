#ifndef __GRAPH_H__
#define __GRAPH_H__

#include"Grille.h"
#include"ListeDC.h"
#include"Lcircuit.h"

typedef struct sommet Sommet;

typedef struct arete {
  struct sommet *succ;
  struct arete *suiv;
} Arc;

struct sommet{
  int i,j;
  Arc *Lsucc;
  int visit;
};


typedef struct{
  int n,m;
  Sommet *** Tsom;
} Graphe;


void Graphe_init(Graphe *H, int m, int n);

void Graphe_ajout_arc(Graphe *H, int i1, int j1, int i2, int j2);

void Graphe_creation(Grille *G, Graphe *H);

void Graphe_affiche(Graphe *H);

Lcircuit *Rech_Circuit(Graphe *H);

int detect_circuits (Sommet *s,int i,int j,LDC* ldc);

Sommet *plus_proche(Sommet *s);

void algo_general_graph(Grille *G,Solution *s);

void parcour_ldc(Grille *G,LDC *ldc,Solution *S);
#endif
