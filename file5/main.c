#include <stdio.h>
#include <stdlib.h>

int main()
{   char* name [] = {"tuhin","shahin","lily"};
    int id [] = {140201,140202,140203};
    float cgpa [] = {3.14,3.44,3.22};
    int i;

    FILE* cgp;

    char* getname;
    int getid;
    float getcgpa;





    cgp = fopen("D:/data/info.txt","w");

    for(i=0;i<3;i++){
        fprintf(cgp,"%10s     %10d     %10f\n",name[i],id[i],cgpa[i]);
  }

    fclose(cgp);

    cgp = fopen("D:/data/info.txt","r");

    while(fscanf(cgp,"%s,%d%f",getname,&getid,&getcgpa) !=EOF){
        printf("%10s%10d%10f\n",getname,getid,getcgpa);
 }
    fclose(cgp);

    return 0;
}
