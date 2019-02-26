#ifndef LISTE_H
#define LISTE_H

#include <gmp.h>

//LISTE

 /*! \struct elem listes.h
 *  \brief Structure elem qui va permettre de stocker un element dans une liste
 */
struct elem{
	int val;/*!< valeur de l'élément*/
	struct elem *suiv;/*!< élément suivant*/
};

typedef struct elem* liste;/*!< typedef de la structure */

liste creer_liste();//Fonction qui créer une liste 
int est_vide(liste l);//Fonction qui retourne si la liste est vide ou non
void affiche_liste(liste l);// Fonction qui affiche le contenu de la liste
liste libere_liste(liste l);// Fonction qui libere la liste
liste ajoute_elem_debut(liste l,int i);//Fonction qui ajoute un element au debut dans la liste
liste supprime_elem_debut(liste l);//Fonction qui supprime un element au debut dans la liste

//LISTE GMP

 /*! \struct elemgmp listegmp.h
 *  \brief Structure elemgmp qui va permettre de stocker un element dans une liste
 */
struct elemgmp{
	mpz_t val;/*!< valeur de l'élément*/
	int primalite;/*!< primalité de l'élément*/
	struct elemgmp *suiv;/*!< élément suivant*/
};

typedef struct elemgmp* listegmp;/*!< typedef de la structure */

listegmp creer_listegmp();//Fonction qui créer une liste gmp
listegmp ajoute_elem_debutgmp(listegmp l,mpz_t i,int p);//Fonction qui ajoute un element au debut dans la liste
int est_videgmp(listegmp l);//Fonction qui retourne si la liste est vide ou non
void affiche_listegmp(listegmp l);// Fonction qui affiche le contenu de la liste
listegmp libere_listegmp(listegmp l);// Fonction qui libere la liste

#endif