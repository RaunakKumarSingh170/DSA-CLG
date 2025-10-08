#include <iostream>
using namespace std;

int main() {
    char str[]="Raunak";

    for (int i = 0; str[i]!='\0'; i++) 
    {
        for (int j = i + 1; str[j]!='\0'; j++)
         {
            if (str[i] == str[j])
             {
                cout << str[i] << " is duplicate"<<endl;
                break;
            }
            
        }
    }
 for (int i = 0; str[i]!='\0'; i++) 
    {
        for (int j = i + 1; str[j]!='\0'; j++)
         {
            if (str[i] != str[j])
             {
                cout << str[i] ;
                break;
                
            }
            
        }
    }

    
    return 0;
}