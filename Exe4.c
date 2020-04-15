 void melange_liste(Liste *liste){
 	int b=0;
    int a=calcule_longueur(liste)/2;
    Element *actuel1 = liste->premier;
    //etape1 :
      while(a != b){
         actuel1 = actuel1->suivant;
		 b++;	
	  }
	  Element *actuel2 = actuel1->suivant;
	  actuel1->suivant=NULL;
	//etape2 :
	actuel1=actuel2;
	while(actuel1->suivant!= NULL){
		actuel1=actuel1->suivant;
	}
	actuel1->suivant=liste->premier;
	liste->premier=actuel2;
}
