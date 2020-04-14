int main()
{
    Liste *maListe = initialisation();
    
    /*----------------------------*/
    int a,b,x,y;
    while(a!=10){
        printf("\n\n1- insertion.\n2- suppression.\n3- afficher Liste.\n4- Exo 1 :\n5- calcule_longueur\n6- recherche valeur\n10- exet:\n\n- votre chois =");
    scanf("%d",&a);
     switch(a){
     	case 1:{
     		system("cls");
     		printf("donne le nombre d'insertion");
     		scanf("%d",&b);
     		insertion(maListe, b);
			break;
		 }
		 case 2:{
		 	 system("cls");
		     suppression(maListe);
			break;
		 }
		 case 3:{
		 	system("cls");
		 	afficherListe(maListe);
			break;
		 }
		 case 4:{
		 	system("cls");
		 	int tab[5];
		 	tab[0]=1;
		 	tab[1]=5;
		 	tab[2]=18;
		 	tab[3]=-1;
		 	tab[4]=4;
		 	tab[5]=0;
	        remplis_liste( tab , 5, maListe);
			break;
		 }
		 case 5:{
		 	system("cls");
		     x=calcule_longueur(maListe);
		     printf("langour :%d",x);
		   break;	 
	     }
	     case 6:{
		 	system("cls");
		 	int v;
		 	printf("bonne la valeur que vous chercher");
		 	scanf("%d",&v);
		     y=recherche_valeur(maListe,v);
		     printf("indise de !%d! est :%d",v,y);
		   break;	 
	     }
	 }
 }
    /*----------------------------*/
  return 0;
}
