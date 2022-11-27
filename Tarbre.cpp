/**********************afficher_horizontal_Tarb************************/
/*	Entree:
			arb Arb: la structure contenant l'arbre qu'on veut afficher
			int ind: indice qui sert a indique quel elemnt on doit afficher
			int niveau: variable permettant de renseigner sur le 
			niveau de l'element courant.
	Sorties:
			int : entier permet de renseigner sur l'etat de la focntion
La focntion permet d'afficher l'arbre horizontalement ceci en parcourant 
la pratie droite de l'arbre et en l'affichant puis afficher la partie 
gauche
*/
int	afficher_horizontal_Tarb(arb Arb,int ind,int niveau)
{
	//Test si l'indice est egal a -1
	if(ind==-1)
		return (int)-5;
	//afficher le sous arbre droit	
	afficher_horizontal_Tarb(Arb,Arb.TAB[2][ind],++niveau);
	//ajouter auttant de tabulation que le niveau de l'element courant
	for(int i=0;i<niveau;i++)printf("\t");
	//afficher l'elemnt courant et retourner a la ligne
	printf("%d\n",Arb.TAB[0][ind]);
	//afficher le sous arbre gauche
	afficher_horizontal_Tarb(Arb,Arb.TAB[1][ind],niveau);
	
	return (int)0;	
}

/*******************************************************************/

