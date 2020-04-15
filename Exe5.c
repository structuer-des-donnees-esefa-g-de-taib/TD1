 void fusionne_listes(Liste *liste1, Liste liste2){
 	  Element *actuel = liste1->premier;
 	  if(actuel==NULL){
 	  	  liste1->premier = liste2.premier;
	   }else{
	   	while(actuel->suivant != NULL){
		      actuel=actuel->suivant;
		   }
		actuel->suivant = liste2.premier;
	   }
 }
