int est_prefixe(Liste liste1, Liste liste2 ){
     Element *actuel1 = liste1.premier;
	 Element *actuel2 = liste2.premier;
	 Liste Nouvliste1;
	 Liste Nouvliste2;
	 int retur;
	   if(actuel2 == NULL){
	   	retur=1;
	   }else{
	   	  if(actuel1->nombre== actuel2->nombre){
	   	  	    Nouvliste1.premier=actuel1->suivant;
	   	  	    Nouvliste2.premier=actuel2->suivant;
	   	  	    retur= est_prefixe(Nouvliste1,Nouvliste2);
			 }else{
			 	retur=0;
			 }
	   }
	   return retur;
}
