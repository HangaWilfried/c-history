#include <stdio.h>
#include <stdlib.h>
#include "list.h"


Liste ajouter_etudiant(Liste liste, Etudiant etudiant) {
    controleur *nouvelleListe = malloc(sizeof(*nouvelleListe));

    if(nouvelleListe == NULL) {
        printf("probleme d'allocation\n");
        exit(EXIT_FAILURE);
    }

    nouvelleListe->etudiant = etudiant;
    nouvelleListe->suivant = liste;

    return nouvelleListe;
}

void afficher_les_etudiants(Liste liste) {
    if(liste == NULL) {
        printf("probleme d'allocation: essaie d'afficher quelque chose qui n'existe pas ou qui n'existe plus.\n");
        exit(EXIT_FAILURE);
    }
    printf("mise a jour de la liste...\n");
    while(liste != NULL) {
        printf("%s %s (%s - %s)", liste->etudiant.matricule, liste->etudiant.fullName, liste->etudiant.niveau, liste->etudiant.filiere);
        printf("\n");
        liste = liste->suivant;
    }
}

Liste supprimer_en_tete(Liste liste) {
    printf("\nsuppression en cours...\n");

    controleur *nouvelleListe = malloc(sizeof(*nouvelleListe));
    
    if(nouvelleListe == NULL) {
        printf("probleme d'allocation\n");
        exit(EXIT_FAILURE);
    }

    nouvelleListe = liste->suivant;
    free(liste);

    printf("fin de suppression.\n\n");
    return nouvelleListe;
}

void qui_est_a_la_tete_de_la_liste(Liste liste) {
    if(liste == NULL) {
        printf("probleme d'allocation\n");
        exit(EXIT_FAILURE);
    }

    printf("\nTete de la liste:\n");
    printf("[ %s %s (%s - %s) ]\n\n", liste->etudiant.matricule, liste->etudiant.fullName, liste->etudiant.niveau, liste->etudiant.filiere);
}

int nombre_d_etudiants(Liste liste) {
    if(liste == NULL) {
        printf("probleme d'allocation\n");
        exit(EXIT_FAILURE);
    }

    int nombre = 0;
     while(liste != NULL) {
        nombre += 1;
        liste = liste->suivant;
    }

    return nombre;
}

Liste vider_la_liste(Liste liste) {
    printf("\nsuppression en profondeur en cours...\n");

    controleur *nouvelleListe = malloc(sizeof(*nouvelleListe));


    if(nouvelleListe == NULL) {
        printf("probleme d'allocation\n");
        exit(EXIT_FAILURE);
    }

    while (liste != NULL)
    {
        nouvelleListe = liste;
        liste = liste->suivant;
        free(nouvelleListe);
    }

    printf("fin de suppression.\n\n");
    return liste;
}
