 int recherche_valeur(Liste *liste, int v){
 	int a=0,b=2,c=0;
 	if (liste == NULL)
    {
        exit(EXIT_FAILURE);
    }
    Element *actuel = liste->premier;
 	while(actuel != NULL && c!=1){
 		if(actuel->nombre == v){
 			b=a;
			c++;
		 }else{
		 	b=-1;
		 }
		 a++;
	  actuel = actuel->suivant;
	 }
	 return b;
 }
