#include <iostream>

using namespace std;

int main()
{
 	int v1, v2;
	cout<<"\nEste programa compara dos numeros entre si."<<endl;
	cout<<"\nIngrese el primer valor:"; cin>>v1;
	cout<<"\nIngrese el segundo valor:"; cin>>v2;
    if(v1>v2) {
        cout<<"El valor v1:"<<v1<<" es mayor a v2: "<<v2;
    }   
   else{
        if (v2>v1){
            cout<<"El valor v2:"<<v2<<" es mayor a v1: "<<v1;
        }
        else{
            cout<<"Ambos valores son iguales.";
        }
    }
   
    
    
return 0;
}
