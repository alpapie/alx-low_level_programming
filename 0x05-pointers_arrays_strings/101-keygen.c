# inclure  < stdio.h >
# inclure  < stdlib.h >
# inclure  < heure.h >

/* *
* main - programme qui génère des valides aléatoires
* mots de passe pour le programme 101-crackme
*
* Retour : Toujours 0 (Succès)
 */

int  principal ( vide )
{
	int je, somme, n ;
	int pass[ 100 ] ;

	somme = 0 ;

	srand ( heure ( NULL ));

	pour (i = 0 ; i < 100 ; i++)
	{
		passe[i] = rand () % 78 ;
		somme += (pass[i] + ' 0 ' );
		putchar (pass[i] + ' 0 ' );
		si (( 2772 - somme) - ' 0 ' < 78 )
		{
			n = 2772 - somme - ' 0 ' ;
			somme += n ;
			putchar (n + ' 0 ' );
			casser ;
		}
	}

	retour ( 0 );
}