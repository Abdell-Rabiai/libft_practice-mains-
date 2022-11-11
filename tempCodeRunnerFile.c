int main()
{
    char *s = " Hello world from the other side of earth ";
    char c = ' ';
    int count = ft_how_many_words(s,' ');
    printf("how many words : %d\n",count);
    printf("length of the first word : %d \n",ft_get_length_of_word(s,c));
    char ** strings = ft_split(s,c);
    while(*strings)
     {
           puts(*strings);
           strings++;
     }
}
