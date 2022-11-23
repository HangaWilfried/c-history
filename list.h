#ifndef __LIST__H__
#define __LIST__H__

typedef struct Etudiant
{
    char fullName[100];
    char filiere[20];
    char niveau[20];
    char matricule[8];
} Etudiant;

typedef struct controleur {
    Etudiant etudiant;
    struct controleur *suivant;
} controleur, *Liste;



Liste ajouter_etudiant(Liste liste, Etudiant etudiant);
Liste supprimer_en_tete(Liste liste); 
Liste vider_la_liste(Liste liste);

void afficher_les_etudiants(Liste liste);
void qui_est_a_la_tete_de_la_liste(Liste liste);
int nombre_d_etudiants(Liste liste);
#endif
