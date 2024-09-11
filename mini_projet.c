#include<stdio.h>
#include<String.h>
int main(){
    char nom[20] , prenom[20] ,nom_meilleur_note[20] , prenom_meilleur_note[20] , nom_pire_note[20] , prenom_pire_note[20];
    float note ,note_max = 0 ,note_min = 100 , som = 0  , moy , note_sup_moy1 ,note_sup_moy2 ;
    int nb_etudiants = 0 , Option  , etudiant_sup_moy;
    
    do{
        printf("============= Menu ============= \n");
        printf("Option  1 : Ajouter un etudiant \n");
        printf("Option  2 : Calcule et affiche la moyenne si des etudiants ont ete ajoutes \n");
        printf("Option 3 : Affiche l'etudiant avec la meilleure et la pire note.\n");
        printf("Option 4 : Permet de verifier combien d'etudiants ont une note superieure a la moyenne.\n");
        printf("Option 5 : Quitter le programme.\n");
        printf("================================= \n");

        scanf("%d",&Option);

        switch(Option){
            case 1 : 
                printf("Entrez le nom d'etudiant \n");
                scanf("%s",nom);
                printf("Entrez le prenom d'etudiant \n");
                scanf("%s",prenom);
                printf("Entrez la note d'etudiant \n");
                scanf("%f",&note);

                if (note >= note_max ){
                    note_max = note;
                    strcpy(nom_meilleur_note,nom);
                    strcpy(prenom_meilleur_note,prenom);

                }
                if (note <= note_min ){
                    note_min = note;
                    strcpy(nom_pire_note,nom);
                    strcpy(prenom_pire_note,prenom);
                }

                printf("La notes maximale est : %f\n",note_max);
                printf("La notes minimale est : %f\n",note_min);

                som = som + note;
                nb_etudiants++ ;
                break;
            case 2 :
                moy = som / nb_etudiants ;
                printf("La moyenne d'etudiants est : %f\n",moy);
                
                break ; 
            case 3 :
                printf("L'etudiant %s %s a le meilleur note \n", nom_meilleur_note, prenom_meilleur_note) ;
                printf("L'etudiant %s %s la pire note \n", nom_pire_note, prenom_pire_note) ;

                break ;
            case 4 :
                etudiant_sup_moy = 0 ;
                printf("Entrez la premier note : ");
                scanf("%f",&note_sup_moy1);
                printf("Entrez la deuxieme note : ");
                scanf("%f",&note_sup_moy2);
                if( note_sup_moy1 > moy ){
                    etudiant_sup_moy++ ;
                }
                if( note_sup_moy2 > moy ){
                    etudiant_sup_moy++ ;
                }
           
                printf("Le nombre des etudiants ont une note superieure a la moyenne est : %d\n",etudiant_sup_moy);
                break ;
            case 5 :
                break;
            default :
                printf("Choisi un Option entre 1 et 5");
        }
    
    }while( Option != 5 );
}

