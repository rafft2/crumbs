#ifndef BASICS_C
#define BASICS_C

void WordCount()
{
    int c;
    int nc = 0; int nl = 0; int nw = 0;
    int in_word = 0;
    while((c = getchar()) != EOF)
    {
        nc++;
        if(c == '\n') { nl++; }
        if(c == '\n' || c == ' ' || c == '\t')
        {
            if(in_word = 1)
            {
                nw++;
            }
            in_word = 0;
        }

    }
    printf("characters: %d, words: %d, lines: %d\n", nc, nw, nl);
}

void EchoInput()
{
    int c;
    int nc = 0;
    while((c = getchar()) != EOF)
    {
        if(c == ' ')
        {
            nc++;
            if(nc <= 1) { putchar(' '); }
        }
        else
        {
            nc = 0;
            if(c == '\t') { putchar('\\'); putchar('t'); }
            else if(c == '\\') { putchar('\\'); putchar('\\'); }
            else { putchar(c); }
        }
    }
}

#endif