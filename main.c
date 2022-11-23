#include <stdio.h>
#include <stdlib.h>
#include "list.c"

int main () {
    Liste etudiants = NULL;

    Etudiant numero_un = {"Alexandre coyatte", "Informatique", "licence 1", "22S07508"};
    Etudiant numero_deux = {"Plus Haut La Brume", "Biologie", "master 1", "19S07508"};
    Etudiant numero_trois = {"Lucie Down", "Droit", "Licence 3", "13S07508"};
    Etudiant numero_quatre = {"eumeister de mon-ter", "Comptabilite", "Licence 1", "12S07508"};

    etudiants = ajouter_etudiant(etudiants, numero_un);
    etudiants = ajouter_etudiant(etudiants, numero_deux);
    etudiants = ajouter_etudiant(etudiants, numero_trois);
    etudiants = ajouter_etudiant(etudiants, numero_quatre);

    afficher_les_etudiants(etudiants);

    etudiants = supprimer_en_tete(etudiants);
    
    qui_est_a_la_tete_de_la_liste(etudiants);

    afficher_les_etudiants(etudiants);

    printf("il y'a exactement %d etudiant(s) dans la liste\n", nombre_d_etudiants(etudiants));

    etudiants = vider_la_liste(etudiants);
    afficher_les_etudiants(etudiants);
    return 0;
}