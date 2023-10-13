#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv [])
{ 
  int N, k, Ncopy, currentcrcl, maxN, maxcircle;
  k = atoi(argv[0]);  //το κ παιρνει την τιμη που εχει το πρωτο κελι δλδ το πρωτο ορισμα 
  maxcyrcle = 0; //αρχικοποιηση του μεγιστου κυκλου
    for (Ν=k; Ν<100000000; Ν++) 
    {
     currentcrcl = 1 //αρχικοποιηση μηκους τρεχοντος κυκλου 
     Ncopy = N
     while (Νcopy != 1) 
       {
        if (Ncopy%2 == 0)
           Ncopy = Ncopy/2;
        else 
          Ncopy = 3*Ncopy+1;
        currentcrcl++
          }
       if ( currentcrcl > maxcyrcle)
           { maxcyrcle = currentcrcl;
            maxN = N;
           }
    }

