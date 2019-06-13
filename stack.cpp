#include<iostream>
#include<stdlib.h>
using namespace std;


class Pila
{
    private:
        char *v;
        int tam, top;
    public:
        Pila(int);
        void ingresar(char);
        char sacar();
};


Pila::Pila(int t)
{
    tam=t;
    v=new char[tam];
    top=0;
}

void Pila::ingresar(char x)
{
    if(top<tam)
    {
        *(v+top)=x;
        top++;
    }
    else
    {
        cout<<"Pila supero limite de datos..";
    }
    
}

char Pila::sacar()
{
    if(top>0)
    {
        top--;
        return *(v+top);
    }

    return '$';

    
}

int main()
{
    Pila P(5);
    P.ingresar('a');
    P.ingresar('b');
    P.ingresar('c');
    cout<<P.sacar()<<endl;
    P.ingresar('d');
    system("pause");
    return 0;

}
 