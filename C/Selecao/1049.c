//CODE 1049//ANIMAL
#include <stdio.h>
#include <string.h>
int main()
{
    char a1[]="vertebrado",a2[]="invertebrado";
    char b1[]="ave",b2[]="mamifero",b3[]="inseto",b4[]="anelideo";
    char c1[]="carnivoro",c2[]="onivoro",c3[]="herbivoro",c4[]="hematofago";
    char d1[]="aguia",d2[]="pomba",d3[]="homem",d4[]="vaca";
    char d5[]="pulga",d6[]="lagarta",d7[]="sanguessuga",d8[]="minhoca";
    char a[22],b[22],c[22];
    scanf("%s",a);
    if (0==strcmp(a,a1))
    {
       scanf("%s",b);
       if(0==strcmp(b,b1))
       {
           scanf("%s",c);
           if (0==strcmp(c,c1))

               printf("%s\n",d1);

           else if(0==strcmp(c,c2))

               printf("%s\n",d2);

       }
       if(0==strcmp(b,b2))
       {
          scanf("%s",c);
          if (0==strcmp(c,c2))

              printf("%s\n",d3);

          else if(0==strcmp(c,c3))

              printf("%s\n",d4);

       }
    }
    else if(0==strcmp(a,a2))
    {
       scanf("%s",b);
       if(0==strcmp(b,b3))
       {
           scanf("%s",c);
           if (0==strcmp(c,c4))

               printf("%s\n",d5);

           else if(0==strcmp(c,c3))

               printf("%s\n",d6);

       }
       if(0==strcmp(b,b4))
       {
           scanf("%s",c);
           if(0==strcmp(c,c4))

               printf("%s\n",d7);

           else if(0==strcmp(c,c2))

               printf("%s\n",d8);

       }
    }
    return 0;
}
