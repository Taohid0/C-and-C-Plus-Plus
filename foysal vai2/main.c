#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char words[][15]={"about","back","cat","doll","egg","flag","green","hello","ice","journal","know","law","moon","noon",
                    "operation","paddle","quote","red","start","table","ultra","violet","worse","xenon","yellow","zoom"};

    char startCharacter,myword[20],pcLastChar;
    int score1=0,score2=0,i,wordLentgh;

    scanf("%c",&startCharacter);

    for(i=0;i<27;i++)
    {
        if(words[i][0]==startCharacter)
        {
            printf("PC = %s\n",words[i]);
            score1=score1+strlen(words[i]);
            pcLastChar=words[i][strlen(words[i])-1];

            break;
        }

    }
    printf("Me = ");
    scanf("%s",myword);
    if(myword[0]!=pcLastChar)
    {

        printf("Your input is wrong\n");
        return 0;
    }
    wordLentgh=strlen(myword);
    score2=score2+wordLentgh;

    for( i=0;i<27;i++)
    {
        if(words[i][0]==myword[wordLentgh-1])
        {
            score1=score1+strlen(words[i]);
            printf("PC = %s\n",words[i]);
            pcLastChar=words[i][strlen(words[i])-1];
            break;
        }
    }
    printf("Me = ");
    scanf("%s",myword);

    if(myword[0]!=pcLastChar)
    {
        printf("Your input is wrong\n");
        return 0;
    }
    wordLentgh=strlen(myword);
    score2=score2+wordLentgh;

    if(score1<score2)
    {
        printf("PC Won\n");
    }
    else if(score1>score2)
    {
        printf("You won\n");
    }
    else
        printf("Match drawn\n");

    printf("Your score = %d\nPC\'s score = %d\n",score2,score1);

    return 0;
}
