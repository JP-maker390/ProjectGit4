/******************************************************************************

Programming Skills Challenge Siemens.
Question 4 - Develop a program do implement the function ConcatRemove(s,t,k)

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//Remove from position pos of string
void remove_string(char *s, int pos) {
    int i, j;
    int aux;
    aux = strlen(s)-1;
    for(i=aux;i>=pos;i--){
        s[i]='\0';
    }
   
}
//Concat data in the string
void concat_string(char *s, char *t, int ini_s) {
    int i, j;
    int aux;
    int aux1;
    aux1 = strlen(t)-1;
    for(i=ini_s; i <= aux1; i++){
            s[i]=t[i]; 
        }
    
   
}

//Checks if there is a sequence of identical elements in the string and returns 
//the position of the string where there is a difference.
int Check_string(const char *str1, const char *str2) {
    int i;
    for (i = 0; str1[i] != '\0' && str2[i] != '\0'; i++) {
        if (str1[i] != str2[i]) {
            return i;
        }
    }

    //This means equal strings ("abc" = "abc") or one of the complete strings is 
    //equal to the initial sequence of the other string of the same length
    //("abc" = "abcdef")
     return -1;
}


char *ConcatRemove(const char *s, const char *t, int k){
    
    int num_move;// number of movements required
    int pos_diff;//position of the string that will be modified
    
    
    //Returns the index of the position where both strings are different.
    pos_diff  = Check_string(s, t);
    //concat+remove,
    if (pos_diff == 0) {
        num_move = strlen(s) + strlen(t);
      
    } 
    //concat+remove, considering the presence of equal elements
    if(pos_diff > 0) {
      num_move= (strlen(s)-pos_diff + strlen(t)-pos_diff);
    } 
    if(pos_diff == -1) {
     
      if( strlen(t)>strlen(s)){
        num_move = strlen(t)-strlen(s);//concat data ex: t="ABCDE" and s="ABC"
      }else if(strlen(t)<strlen(s)){
        num_move = strlen(t)-strlen(s);//remove data ex: t="ABC" and s="ABCDE"
      }
    }
    
    // Define the conditions to return "Yes" or "No"
    if(k>=num_move){
        
        char *str3 = (char *)malloc(4); 
        str3="Yes";
        return str3;
        
    }else{
        
      char *str4 = (char *)malloc(3);
      str4="No";
      return str4;
    }
    
    
    
}

int main() {
    
    char s[101];//1 <= | s | <= 100
    char t[101];//1 <= | t | <= 100
    char *nova_string;
    int k;//1 <= k <= 100 
    int i, j;
    int pos;//Index of the position up to which there will be modification
    int ini_s; //Index of the position from which there will be insertion
    
    
     //Input data
    //Ex1: s="efg"; t="hij";k=6;
    printf("Enter the string s with lowercase letters of the Portuguese alphabet: ");
    scanf("%s", s);
    
    printf("Enter the string t with lowercase letters of the Portuguese alphabet: ");
    scanf("%s", t);
    
    printf("Enter the move number k: ");
    scanf("%d", &k);
    
    //Return the ConcatRemove function: Yes or No
    nova_string = ConcatRemove(s, t, k);
    printf("Return ConcatRemove: %s\n",nova_string );
    
    //Using the example presented (Ex1: s="efg"; t="hij";k=6) for test the functions
    //concat_string() that concat that from the end of string and
    //remove_string() that remove data from the end of string
    
    pos = 0;
    ini_s = 0;
    
    printf("s before change: %s\n", s);
    remove_string(s,pos);
    concat_string(s, t, ini_s);
    printf("s after change : %s\n", s);
    
    return 0;
    
}