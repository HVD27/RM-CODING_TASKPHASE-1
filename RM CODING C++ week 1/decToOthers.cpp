
#include<iostream> 
using namespace std; 
  

void decToHexa(int n) 
{  
    char hexaDeciNum[100]; 
      
    
    int i = 0; 
    while(n!=0) 
    {    
       
        int temp  = 0; 
          
      
        temp = n % 16; 
          
      
        if(temp < 10) 
        { 
            hexaDeciNum[i] = temp + 48; 
            i++; 
        } 
        else
        { 
            hexaDeciNum[i] = temp + 55; 
            i++; 
        } 
          
        n = n/16; 
    } 
      
   
    for(int j=i-1; j>=0; j--) 
        cout << hexaDeciNum[j]; 
} 
  
void decToOctal(int n)
{
     
   
    int octalNum[100];
 
   
    int i = 0;
    while (n != 0) {
 
        
        octalNum[i] = n % 8;
        n = n / 8;
        i++;
    }
 
    
    for (int j = i - 1; j >= 0; j--)
        cout << octalNum[j];
} 
void decToBinary(int n) 
{ 

    int binaryNum[32]; 
  

    int i = 0; 
    while (n > 0) { 
  

        binaryNum[i] = n % 2; 
        n = n / 2; 
        i++; 
    } 
  
    for (int j = i - 1; j >= 0; j--) 
        cout << binaryNum[j]; 
} 
int main() 
{ 
    int n = 2545; 
      
    decToHexa(n); 
    cout<<endl;
    decToOctal(n);
    cout<<endl;
    decToBinary(n);
      
    return 0; 
} 
