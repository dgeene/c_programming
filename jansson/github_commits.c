/*
 * A program that fetches the latest commits from a repository on github
 * https://jansson.readthedocs.org/en/2.7/tutorial.html#the-program
 *
 * Usage: github_commits <USER> <REPO>
 */

#include <string.h>
#include <jansson.h>

#define URL_FORMAT "https://api.github.com/repos/%s/%s/commits"
#define URL_SIZE   256



/*
 * Return the offset of the first newline in the text or the length
 * of text if there's no newline
 */
static int newline_offset(const char *text)
{
    const char *newline = strchr(text, '\n');
    if (! newline)
        return strlen(text)
    else
        return (int)(newline - text);
}
