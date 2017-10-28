#include<stdio.h>
#include<string.h>
int main()
{
int i,l;
char s[100000];
while(gets(s))
{
l=strlen(s);
for(i=0;i<l;i++)
    switch(s[i])
        {
        case ' ':    printf(" "); break;
        case 'a':
        case 'A':     printf("["); break;
        case 's':
        case 'S':     printf("]"); break;
        case 'z':
        case 'Z':     printf("'"); break;
        case 'x':
        case 'X':     printf("\\"); break;
        case 'e':
        case 'E':     printf("q"); break;
        case 'r':
        case 'R':     printf("w"); break;
        case 't':
        case 'T':     printf("e"); break;
        case 'y':
        case 'Y':     printf("r"); break;
        case 'u':
        case 'U':     printf("t"); break;
        case 'i':
        case 'I':     printf("y"); break;
        case 'o':
        case 'O':     printf("u"); break;
        case 'p':
        case 'P':     printf("i"); break;
        case '[':     printf("o"); break;
        case ']':     printf("p"); break;
        case 'd':
        case 'D':     printf("a"); break;
        case 'f':
        case 'F':     printf("s"); break;
        case 'g':
        case 'G':     printf("d"); break;
        case 'h':
        case 'H':     printf("f"); break;
        case 'j':
        case 'J':     printf("g"); break;
        case 'k':
        case 'K':     printf("h"); break;
        case 'l':
        case 'L':     printf("j"); break;
        case ';':     printf("k"); break;
        case '\\':      printf(";"); break;
        case 'c':
        case 'C':     printf("z"); break;
        case 'v':
        case 'V':     printf("x"); break;
        case 'b':
        case 'B':     printf("c"); break;
        case 'n':
        case 'N':     printf("v"); break;
        case 'm':
        case 'M':     printf("b"); break;
        case ',':     printf("n"); break;
        case '.':     printf("m"); break;
        case '/':     printf(","); break;
        case 'q':
        case 'Q':
        case 'w':
        case 'W':
        case '{':
        case '}':
        case ':':
        case '"':
        case '|':
        case '<':
        case '>':
        case '?':    break;
        default :
        printf("l");
        break;
        }
printf("\n");
}
return 0;
}
