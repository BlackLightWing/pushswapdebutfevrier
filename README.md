# Push_Swap

Vendredi avant piscine:
	deplacement de tous les fichiers de push swap dans ce dossier.
	Je bosse sur le probleme de boucle infinie de "ft_put_in_tab()"
	ALGO3 fully done et verifie
	Je vais essayer de changer le type de ra et rra et de leur faire renvoyer un int
		pour savoir si le min du tableau est bien en haut de la pile. Je vais comparer
		l'element du haut de la pile avec le min touve dans le tableau. L'idee est de
		boucler tant que le min n'est pas tout en haut.
		J'abandonne l'idee, je vais plutot faire une fonction speciale pour algo_5

# ALGO_3 OK

# ALGO_5 Probleme avec argc


Je suis en train de regarder pk le tableau est trop grand. Check avec printf
Il faut essayer d'enlever la derniere case du tableau qui est au pif

Je modifie les lignes ou je set stack_a.tab et stack_a.len

malloc modifie, sizeof(int) mis en commentaire pour tous mes malloc
	du coup verifier si ca fonctionne 
	l'idee etait de voir si ce n'est pas le sizeof qui cause un tableau trop grand
	peut etre voir avec la len aussi

modifier l'algo put_x_mins on b pour qu'il regarde d'abord
	le nombre de coups necessaires pour passer sur b le plus
	petit et le 2eme plus petit et qu'il commence d'abord par celui qui prends le moins de coups

Pour 100 et pour 500 je pense qu'il faut faire pareil avec des chunks beaucoup plus grands
	je pense qu'il faut d'abord regarder pour (dans le cas de 100) les 20 premiers et comparer le nombre de coups
	nécessaires a chacun et agir de meme.
Le probleme c'est que du coup il faut aussi trier la table b 

Commencer par check if la table b fonctionne deja bien avec l'allocation du malloc initiale
