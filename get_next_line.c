char	*get_next_line(int fd)
{
    /* Prendre retour a la ligne
    le read garde pointeur meme endroit
    stocker qq part a chaque lecture
    renvoie qd newline AVEC la newline
    du coup => le stock doit etre static
    puis nettoyer par la suite*/



