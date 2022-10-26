#include<stdio.h>
#include <string.h>
#include <stdbool.h>

struct Produit {
    int code ;
    char nom[20];
    float prix ;
	int quantite;	
};

struct Produit1 {
    int code ;
    char nom[20];
    float prix ;
	int quantite;	
};
    // struct Produit P[1000]={	
    //     {1,"aspro",15,3},
    // 	{2,"dolipran",20,20},
	// };
	
	struct Produit T[100];

    int c,j,a,value,length_array,possition,totalqauntite=0,count;
 	char n[20]; 	    
    struct Produit P[1000];
    float somme =0,totalsomme=0;

void Afficher();     
int menu();
void menu1();

bool checkProdctCode(int a, struct Produit P[1000])
{
	int i;
	for (i = 0; i < length_array; i++)
	{
		if (a == P[i].code)
		return true;
	}
	return false;
}
void Ajouter(){

    int i,a;
    int b;
    
	printf("\n\n0 retour");
	printf("\n\n1)  Quelle quantité voulez-vous saisir ?\n\n ---> ");
	scanf("%d",&a);
 	
	if (a > 0)
	{
		for(i=0;i<a;i++)
		{
			printf("\n\n\nSaisissez le nom du produit N %d : ",i + 1);
			scanf("%s",P[length_array].nom);

			printf("\n\n\nSaisissez le code du produit N %d : ",i + 1);
			scanf("%d",&P[length_array].code);
			
			printf("\n\n\nSaisissez le prix du produit N %d : ",i + 1);
			scanf("%f",&P[length_array].prix);
			
			printf("\n\n\nsaisissez le quantité du produit N %d : ",i + 1);
			scanf("%d",&P[length_array].quantite);
			
			length_array++;
			printf("\n\n");
		}
	}
	else if (a == 0)
	{
		menu();
	}
	//menu();
}
 // fonction Rechercher pour rechercher des produit avec le code et le nom 
void Rechercher()
{
    printf("\n\n\n-----------------------------------------\n");
    printf("\n\n -> 1 : chercher avec le code de produit :\n");
    printf("\n\n -> 2 : chercher avec le quantite de produit  :\n");
	printf("\n\n -> 0 : retour");
    printf("\n\n-----------------------------------------\n\n");
		
	printf ("\n choisir un choix  :  ");
	scanf("%d",&a);
	Afficher();	
	printf("\n\nrecherche un produit \n\n\n");
	if (a > 0)
	{
		NO1:
		switch (a)
		{
			case 1 : 
			printf("donner le code de produit que vous rechercher : \n\n --> ");
			scanf ("%d",&c);

			for(j=0;j<length_array;j++)
			{
				if(P[j].code == c)
				{
					printf("     code       ||      nom       ||        prix         ||     quantite      ||\n");
					printf("______________________________________________________________________________________\n\n");
					printf(" %14d || %14s || %17.2fdh || %17d ||\n",P[j].code , P[j].nom , P[j].prix , P[j].quantite);
					break ;
				}
				else if (c == 0)
				{
					menu();
				}
				else
				{
					printf("\n\nDésolé, il n'y a pas de code, Réessayer Essayer\n\n");
					goto NO1;
				}
			}
				break ;
			case 2 :   
			printf("donner le quantite de produit que vous rechercher : \n\n --> ");
			scanf ("%d",&c);

			for(j=0;j<length_array;j++)
			{
				if(P[j].quantite == c)
				{
					printf("     code       ||      nom       ||        prix         ||     quantite      ||\n");
					printf("______________________________________________________________________________________\n\n");
					printf(" %14d || %14s || %17.2fdh || %17d ||\n",P[j].code , P[j].nom , P[j].prix , P[j].quantite);
					break ;
				}
				else if (c == 0)
				{
					menu();
				}
				else
				{
					printf("\n\nDésolé, il n'y a pas de code, Réessayer Essayer\n\n");
					goto NO1;
				}
			}
			default : printf("Attention Votre Choix doit Etre Compris Entre 1 et 2\n\n");
    	}
		printf("\n\n");
	}
	else if (a == 0)
	menu();
}
    
void modifier()
{
    printf("     code       ||      nom       ||        prix         ||     quantite      ||\n");
    printf("______________________________________________________________________________________\n\n");
    for (j=0;j<length_array;j++)
	{
		if(P[j].quantite<21)
		{       
			printf(" %14d || %14s || %17.2fdh || %17d ||\n",P[j].code , P[j].nom , P[j].prix , P[j].quantite);
		}
	}
	printf("entre le code de produit  que vous modifie :\n");
	scanf("%d",&c);

   	for(j=0;j<length_array;j++)
	{
		if(c ==P[j].code )
		{
 			//printf("%d",j);
    		printf("entre la quantite que vous ajouter :\n");
			scanf("%d",&a);
			P[j].quantite+=a;   
    	}
    }
	printf("\n\n");
	//menu();
} 
    // Supprimer est un fonction pour supprimer un produit avec le code ou le nom 
void Supprimer()
{
	Afficher();
	printf("supprimer un produit \n\n");
	printf("donner le code de produit que vous supprimer : \n\n");
	scanf ("%d",&c);  				     
	
	for(j=0;j<length_array;j++)
	{
		if(c ==P[j].code )
		{
			P[j]=P[j+1];
            length_array--;
			break;	
		}
	}
	printf("\n\n");
	//menu();    
}
    //Afficher est un fonction pour afficher tous les produit 	
void Afficher()
{
    	int i,a;

    	printf("     code       ||      nom       ||        prix         ||     quantite      ||\n");
    	printf("______________________________________________________________________________________\n\n");
	    for(i=0;i<length_array;i++)
		{
          printf(" %14d || %14s || %17.2fdh || %17d ||\n",P[i].code , P[i].nom , P[i].prix , P[i].quantite);
     	}
		printf("\n\n");
		//menu();
}
void Afficher1()
{
	int i,a;
		printf("\n\n");
    	printf("     code       ||      nom       ||        prix         ||     quantite      ||\n");
    	printf("______________________________________________________________________________________\n\n");
	    for(i=0;i<length_array;i++)
		{
			if (P[i].quantite < 3)
          	printf(" %14d || %14s || %17.2fdh || %17d ||\n",P[i].code , P[i].nom , P[i].prix , P[i].quantite);
     	}
		printf("\n\n");
		//menu();
}
void Acheter()
{
	int max = P[0].prix,min=P[0].prix;
   
    Afficher();
	
	printf("Entrez le code du produit que vous souhaitez acheter:\n\n --> ");
    scanf("%d",&c);
            
    for(j=0;j<length_array;j++)
	{
        if(c==P[j].code)
		{
                printf("Entrez le quantite du produit que vous souhaitez acheter:\n\n --> ");
                scanf("%d",&a);
            
            if(a> P[j].quantite)
			{
                printf("\n la quantite que vous voulez demander\n est superieur du quantite de stocke!!!\n");
            }
			else 
			{
                	P[j].quantite-=a;
                	
                	T[count].code=P[j].code;
                	strcpy(T[count].nom,P[j].nom);
                	T[count].prix= P[j].prix;
                	T[count].quantite= P[j].quantite;                	
                	count++;
                 	somme = a*(P[j].prix*1.15);
                 	printf(" LE PRIX DE PRODUIT(S) ACHETER EN TTC EST : %.2f DH\n\n\n",somme);

                 	totalqauntite+=a;
                 	totalsomme+=somme;
                 
			}
        }
    }
	//menu1();
}
    
      
void statistiques()
{
	float min, max;
	int i;
	Afficher();
	for(i=0;i<count;i++)
	{
		if (T[i+1].prix<min) min = T[i].prix;
	}
	max = P[count].prix;
	for(i=0;i<count;i++)
	{
		if (T[i+1].prix>max) max = T[i].prix;
	}
	printf("le prix des produits vendus aujourd'hui  : %.2f\n",totalsomme);
	printf("la quantite des produits vendus aujourd'hui  : %d\n",totalqauntite);
	printf("le max des prix des produits vendus aujourd'hui  : %f\n",max);
	printf("le min des prix des produits vendus aujourd'hui  : %f\n",min);

	//menu();
}	
	

void AfficherParPrixOuName()
{
    int i,j, a;
    float prix;
    char nom[50];
    	
    printf("-----------------------------------------\n");	
    printf(" -> 1 : affichie list ordre decroissant du prix           :\n");
    printf(" -> 2 : affichie list ordre alphabetique croissant du nom :\n");
	printf("-----------------------------------------");
    	
    printf ("\n choisir un choix  :  ");
 	scanf("%d",&a);
    	
    switch(a)
	{   		
		case 1 :	
				{
					printf("     code       ||      nom       ||        prix         ||     quantite      ||\n");
                    printf("______________________________________________________________________________________\n\n");
                    for(i=0;i<length_array;i++)
					{
                    	for(j=i+1;j<length_array;j++)
						{
                            if(P[i].prix<P[j].prix)
							{
								prix = P[j].prix;
								P[j].prix= P[i].prix;
								P[i].prix = prix;   
                            }
                        }	
          			printf(" %14d || %14s || %17.2fdh || %17d ||\n",P[i].code , P[i].nom , P[i].prix , P[i].quantite);
          			}
        			break ;
				}
    	   case 2 :
		   		{
         		   	printf("     code       ||      nom       ||        prix         ||     quantite      ||\n");
                   	printf("______________________________________________________________________________________\n\n");
                           	for(i=0;i<length_array;i++)
							{
								for(j=i+1;j<length_array;j++)
								{
                                	if(strcmp(P[i].nom,P[j].nom) >0)
									{
                                   		strcpy (nom , P[j].nom);
                                   		strcpy(P[j].nom , P[i].nom);
                                   		strcpy(P[i].nom , nom) ;   
                            		}
                        		}	
    		 				printf(" %14d || %14s || %17.2fdh || %17d ||\n",P[i].code , P[i].nom , P[i].prix , P[i].quantite);
	    					}  
					break ; 
        		}
    }
	//menu();
}

void menu1()
{
			printf("\e[1;1H\e[2J");
			printf("\t\t\t\t\n:::::::::::::::::::::::::: Menu Principale ::::::::::::::::::::::::::\n\n");
			printf("\t\t\t 1- Ajouter un produit  \n");
			printf("\t\t\t 2- Rechercher les produits \n");
			printf("\t\t\t 3- modifier un produit\n");
			printf("\t\t\t 4- Supprimer les produits \n");
			printf("\t\t\t 5- Afficher les produits\n");
			printf("\t\t\t 6- Afficher les produits entrer 0 est 2\n");
			printf("\t\t\t 7- Acheter produit \n");
			printf("\t\t\t 8- Afficher Par Prix Ou Name\n");
			printf("\t\t\t 9- statistiques\n");
}
int menu()
{
	int n;
		
			printf("\e[1;1H\e[2J");
			do
			{
			printf("\t\t\t\t\n:::::::::::::::::::::::::: Menu Principale ::::::::::::::::::::::::::\n\n");
			printf("\t\t\t 1- Ajouter un produit  \n");
			printf("\t\t\t 2- Rechercher les produits \n");
			printf("\t\t\t 3- modifier un produit\n");
			printf("\t\t\t 4- Supprimer les produits \n");
			printf("\t\t\t 5- Afficher les produits\n");
			printf("\t\t\t 6- Afficher les produits entrer 0 est 2\n");
			printf("\t\t\t 7- Acheter produit \n");
			printf("\t\t\t 8- Afficher Par Prix Ou Name\n");
			printf("\t\t\t 9- statistiques\n");

 	     	printf("Votre choix ? -> :  ");
 	     	scanf("%d",&n);
 	     	
 	     	switch(n){
 	     	
 	     	case 1 : Ajouter();
 	     	break;
 	     	
 	     	case 2 : Rechercher();
 	     	break ;
 	     	
 	     	case 3 : modifier();
 	     	break;
 	     	
 	     	case 4 : Supprimer();
 	     	break ;

			case 5 : Afficher();
 	     	break ;
  
            case 7 : Acheter();
 	     	break ;
 	     	
 	     	case 8 : AfficherParPrixOuName();
 	     	break ;
 	     	
			case 9 : statistiques();
			break;

			case 6 : Afficher1();
			break;

			case 0:
			{
			return 0;
			break;
			}
			default :  printf("Attention Votre Choix doit Etre Compris Entre 1 et 7\n\n");
	        }  
	        
		}while(n<=9 || n>0);
}

int main (int ac, char **av)
{
	if (ac == 1)
	{
		menu();
		return 0;
	}
	else
	printf("Eurer sur arg\n\n");
}
