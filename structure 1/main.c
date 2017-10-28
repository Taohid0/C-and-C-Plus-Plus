#include <stdio.h>
#include <stdlib.h>

int main()
{   struct student {
            char name[15];
            char department[10];
            int id;
            float cgpa;
};
    struct student s[3];
    int i;
    FILE *fp;

    fp = fopen("d:/data/structure.txt","w");

    if(fp ==NULL){
        printf("target file cannot open");
        exit(1);
    }
    printf("Enter 3 students name,department name,id and cgpa\n");

    for(i=0;i<3;i++){
    gets(s[i].name);
    gets(s[i].department);
    scanf("%d%f",&s[i].id,&s[i].cgpa);
    fflush(stdin);
    }

    fprintf(fp,"name           department           id            cgpa\n");
    fprintf(fp,"---------------------------------------------------------\n");

    for(i=0;i<3;i++){
        fprintf(fp,"%s%15s%15d%15.2f\n",s[i].name,s[i].department,s[i].id,s[i].cgpa);
    }

    return 0;
}
