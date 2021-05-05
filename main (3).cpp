/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;


int main()
{
    
    /*
    criar 2 variaveis para os numeros
    1 variavel para sinal
    verificar, e usar os ifs
    */
    
    
    int n1;
    int n2;
    string sinal;
    
    cout<<"Informe o primeiro numero : ";
    cin>>n1;
    
    cout<<"Informe o primeiro numero : ";
    cin >>n2;
    
    cout << "User os seguintes sinais para o calculo"<<endl;
    cout << " + - * / ";
    
    cin>>sinal;
    
    if (sinal == "*"){
       
       cout <<"A multiplicação é "<< n1 * n2 ;
        
    }
    else if (sinal == "/"){
        cout <<"A divisao é "<< n1 / n2 ;
        
        
    }
    else if (sinal == "+"){
        
        cout <<"A soma é "<< n1 + n2;
        
        
    }
    else if (sinal == "-"){
        
        cout <<"A subtracao é "<< n1 - n2;
        
        
    }
    else {
        
        
        cout << "informe um sinal valido!";
    }
   

  
    
    
    
    
    
    
    

    return 0;
}
