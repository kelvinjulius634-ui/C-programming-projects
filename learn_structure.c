#include<stdio.h>
#include<string.h>
    struct Mabosi {
        char Jina[20];
        char Cheo[20];
        int Umri;
    };
    struct Bidhaa {
      char Simu[20];
      char Vyakula[20];
};
int main(){
    struct Mabosi Bos1 ;
    strcpy(Bos1.Jina, "KELVIN");
    strcpy(Bos1.Cheo, "Engineer");
    Bos1.Umri = 21;
    
    struct Mabosi Bos2 ;
    strcpy(Bos2.Jina, "JULIUS");
    strcpy(Bos2.Cheo, "Maneja");
    Bos2.Umri = 55;
    
    struct Bidhaa Bi1;
    strcpy(Bi1.Simu, "Sumsang");
    strcpy(Bi1.Vyakula, "Ugali");
    
    struct Bidhaa Bi2 ;
    strcpy(Bi2.Simu, "i Phone");
    strcpy(Bi2.Vyakula, "Wali");
    
    printf("Ukienda Mbeya iyunga utakutana na Boss %s\n ambaye ni %s\n mwenye miaka %d\n", Bos1.Jina,Bos1.Cheo,Bos1.Umri);
    printf("Huyo boss wa mbeya Iyunga anapendelea kutumia %s\n na kula %s\n ", Bi1.Simu,Bi2.Vyakula);
    
    
  
    printf("Ukienda Mbeya mwanjelwa utakutana na Boss %s\n ambaye ni %s\n mwenye miaka %d\n", Bos2.Jina,Bos2.Cheo,Bos2.Umri);
    
      
          
      printf("Huyo boss wa mbeya mwanjelwa anapendelea kutumia %s\n na kula %s\n ", Bi2.Simu,Bi1.Vyakula);
      
      return 0;
}