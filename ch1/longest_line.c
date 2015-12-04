#include <stdio.h>
// sec 1.9 arrays

#define MAXLINE 1000

int getline(char line[], int maxline);
void copy(char to[], char from[]);

//print longest input line
int main()
{
    int len;               // curr line length
    int max;               // max len seen so far
    char line[MAXLINE];    // cur input line
    char longest[MAXLINE]; // longest line saved

    max = 0;
    while ((len = getline(line, MAXLINE)) > 0)
        if (len > max)
        {
            max = len;
            copy(longest, line);
        }
}
