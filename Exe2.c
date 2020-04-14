int calcule_longueur(Liste *liste){
	int a,x;
	x=0;
	if (liste == NULL)
    {
        exit(EXIT_FAILURE);
    }
    Element *actuel = liste->premier;
    while(actuel != NULL){
    	x++;
    	actuel = actuel->suivant;
	}
	return x;
}
