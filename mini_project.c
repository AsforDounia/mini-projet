#include<stdio.h>
int main(){
    char noms[100][20] , prenoms[100][20] ;
    float notes[100] ,note_max = 0 ,note_min = 100 , som  , moy ;
    int nb_etudiants = 0 , Option , indice_etudiant_max , indice_etudiant_min , etudiant_sup_moy;

    do{
        printf("============= Menu ============= \n");
        printf("Option  1 : Ajouter un etudiant \n");
        printf("Option  2 : Calcule et affiche la moyenne si des etudiants ont ete ajoutes \n");
        printf("Option 3 : Affiche l'etudiant avec la meilleure et la pire note.\n");
        printf("Option 4 : Permet de verifier combien d'etudiants ont une note superieure a la moyenne.\n");
        printf("Option 5 : Quitter le programme.\n");
        printf("=============================================================\n");

        scanf("%d",&Option);

        switch(Option){
            case 1 : 
                printf("Entrez le nom d'etudiant \n");
                scanf("%s",noms[nb_etudiants]);
                printf("Entrez le prenom d'etudiant \n");
                scanf("%s",prenoms[nb_etudiants]);
                printf("Entrez la note d'etudiant \n");
                scanf("%f",&notes[nb_etudiants]);
                if (notes[nb_etudiants] >= note_max ){
                    note_max = notes[nb_etudiants];
                    indice_etudiant_max = nb_etudiants ;
                }
                if (notes[nb_etudiants] <= note_min ){
                    note_min = notes[nb_etudiants];
                    indice_etudiant_min = nb_etudiants ;

                }
                printf("La notes maximale est : %f\n",note_max);
                printf("La notes minimale est : %f\n",note_min);

                nb_etudiants++ ;
                break;
            case 2 : 
                som = 0;
                for ( int i = 0 ; i < nb_etudiants ; i++ ){
                    som = som + notes[i] ;
                }
                moy = som / nb_etudiants ;
                printf("La moyenne d'etudiants est : %f\n",moy);
                break ; 
            case 3 :
                printf("L'etudiant avec la meilleure note est : %s %s\n", noms[indice_etudiant_max] , prenoms[indice_etudiant_max]) ;
                printf("L'etudiant avec la pire note est : %s %s\n", noms[indice_etudiant_min] , prenoms[indice_etudiant_min]) ;
                break ;
            case 4 :
                etudiant_sup_moy = 0 ;
                for( int i = 0 ; i < nb_etudiants ; i++ ){
                    if( notes[i] > moy ){
                        etudiant_sup_moy++ ;
                    }
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

