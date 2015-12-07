#include <stdio.h>
// sec 1.9 arrays
// enter text and press enter. to exit: Ctrl-d

#define MAXLINE 1000

int get_line(char line[], int maxline);
void copy(char to[], char from[]);

//print longest input line
int main()
{
    int len;               // curr line length
    int max;               // max len seen so far
    char line[MAXLINE];    // cur input line
    char longest[MAXLINE]; // longest line saved

    max = 0;
    while ((len = get_line(line, MAXLINE)) > 0)
        if (len > max)
        {
            max = len;
            copy(longest, line);
        }
    if (max > 0) // there was a line
        printf("%s", longest);

    return 0;
}

// read a line into s, return length
int get_line(char s[], int lim)
{
    int c, i;

    for(i=0; i<lim-1 && ( c=getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;
    if (c == '\n')
    {
        s[i] = c;
        ++i;
    }
    s[i] = '\0'; // add zero termination to array

    return i;
}


// copy from into 'to'. assume its big enough
void copy(char to[], char from[])
{
    int i;

    i = 0;
    while ((to[i] = from[i]) != '\0')
        ++i;
}
