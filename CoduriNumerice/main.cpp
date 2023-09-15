#include <iostream>
#include <conio.h>
#include <cmath>
#include <iomanip>
#include <bitset>
#include <stdlib.h>
using namespace std;

void cod2din5(int *numar,int *optiune)
{
    int valoare[10];
    valoare[0]=0*pow(2,0)+0*pow(2,1)+0*pow(2,2);
    valoare[1]=1*pow(2,0)+1*pow(2,1)+0*pow(2,2);
    valoare[2]=1*pow(2,0)+0*pow(2,1)+1*pow(2,2);
    valoare[3]=0*pow(2,0)+1*pow(2,1)+1*pow(2,2);
    valoare[4]=1*pow(2,0)+0*pow(2,1)+0*pow(2,2);
    valoare[5]=0*pow(2,0)+1*pow(2,1)+0*pow(2,2);
    valoare[6]=0*pow(2,0)+0*pow(2,1)+1*pow(2,2);
    valoare[7]=1*pow(2,0)+0*pow(2,1)+0*pow(2,2);
    valoare[8]=0*pow(2,0)+1*pow(2,1)+0*pow(2,2);
    valoare[9]=0*pow(2,0)+0*pow(2,1)+1*pow(2,2);
    if(*optiune==1){
        bitset<5>b1(valoare[*numar]);
        if(*numar==0)
            {b1.set(3,1);b1.set(4,1);}
        else if(*numar >=4 && *numar <=6)
            b1.set(3,1);
        else if(*numar >=7 && *numar <=9)
            b1.set(4,1);
        cout<<b1;}
    else
        for(int i=0;i<=9;i++)
        {
            bitset<5>b1(valoare[i]);
            if(i==0)
                {b1.set(3,1);b1.set(4,1);}
            else if(i >=4 && i <=6)
                b1.set(3,1);
            else if(i >=7 && i <=9)
                b1.set(4,1);
            cout<<b1<<"  |  ";
        }
}

void codGray(int *numar,int *optiune)
{
    int valoare[10];
    valoare[0]=0*pow(2,0)+0*pow(2,1)+0*pow(2,2)+0*pow(2,3);
    valoare[1]=1*pow(2,0)+0*pow(2,1)+0*pow(2,2)+0*pow(2,3);
    valoare[2]=1*pow(2,0)+1*pow(2,1)+0*pow(2,2)+0*pow(2,3);
    valoare[3]=0*pow(2,0)+1*pow(2,1)+0*pow(2,2)+0*pow(2,3);
    valoare[4]=0*pow(2,0)+1*pow(2,1)+1*pow(2,2)+0*pow(2,3);
    valoare[5]=1*pow(2,0)+1*pow(2,1)+1*pow(2,2)+0*pow(2,3);
    valoare[6]=1*pow(2,0)+0*pow(2,1)+1*pow(2,2)+0*pow(2,3);
    valoare[7]=0*pow(2,0)+0*pow(2,1)+1*pow(2,2)+0*pow(2,3);
    valoare[8]=0*pow(2,0)+0*pow(2,1)+1*pow(2,2)+1*pow(2,3);
    valoare[9]=1*pow(2,0)+0*pow(2,1)+1*pow(2,2)+1*pow(2,3);
    if(*optiune==1)
        {bitset<4>b1(valoare[*numar]);
         cout<<b1;}
    else
        for(int i=0;i<=9;i++)
        {bitset<4>b1(valoare[i]);
         cout<<b1<<"  |  ";}
}

void codExces3(int *numar,int *optiune)
{
    int valoare[10];
    valoare[0]=1*pow(2,0)+1*pow(2,1)+0*pow(2,2)+0*pow(2,3);
    valoare[1]=0*pow(2,0)+0*pow(2,1)+1*pow(2,2)+0*pow(2,3);
    valoare[2]=1*pow(2,0)+0*pow(2,1)+1*pow(2,2)+0*pow(2,3);
    valoare[3]=0*pow(2,0)+1*pow(2,1)+1*pow(2,2)+0*pow(2,3);
    valoare[4]=1*pow(2,0)+1*pow(2,1)+1*pow(2,2)+0*pow(2,3);
    valoare[5]=0*pow(2,0)+0*pow(2,1)+0*pow(2,2)+1*pow(2,3);
    valoare[6]=1*pow(2,0)+0*pow(2,1)+0*pow(2,2)+1*pow(2,3);
    valoare[7]=0*pow(2,0)+1*pow(2,1)+0*pow(2,2)+1*pow(2,3);
    valoare[8]=1*pow(2,0)+1*pow(2,1)+0*pow(2,2)+1*pow(2,3);
    valoare[9]=0*pow(2,0)+0*pow(2,1)+1*pow(2,2)+1*pow(2,3);
    if(*optiune==1)
        {bitset<4>b1(valoare[*numar]);
        cout<<b1;}
    else
        for(int i=0;i<=9;i++)
            {bitset<4>b1(valoare[i]);
             cout<<b1<<"  |  ";}
}

void cod8421(int *numar, int *optiune)
{
    int valoare[10];

    valoare[0]=0*pow(2,0)+0*pow(2,1)+0*pow(2,2)+0*pow(2,3);
    valoare[1]=1*pow(2,0)+0*pow(2,1)+0*pow(2,2)+0*pow(2,3);
    valoare[2]=0*pow(2,0)+1*pow(2,1)+0*pow(2,2)+0*pow(2,3);
    valoare[3]=1*pow(2,0)+1*pow(2,1)+0*pow(2,2)+0*pow(2,3);
    valoare[4]=0*pow(2,0)+0*pow(2,1)+1*pow(2,2)+0*pow(2,3);
    valoare[5]=1*pow(2,0)+0*pow(2,1)+1*pow(2,2)+0*pow(2,3);
    valoare[6]=0*pow(2,0)+1*pow(2,1)+1*pow(2,2)+0*pow(2,3);
    valoare[7]=1*pow(2,0)+1*pow(2,1)+1*pow(2,2)+0*pow(2,3);
    valoare[8]=0*pow(2,0)+0*pow(2,1)+0*pow(2,2)+1*pow(2,3);
    valoare[9]=1*pow(2,0)+0*pow(2,1)+0*pow(2,2)+1*pow(2,3);
    if(*optiune==2)
        for(int i=0;i<=9;i++)
            {bitset<4>b1(valoare[i]);
            cout<<b1<<"  |  ";}
    else
    {
        bitset<4>b1(valoare[*numar]);
        cout<<b1;
    }
}

void cod2421(int *numar, int *optiune)
{
    int valoare[10];

    valoare[0]=0*pow(2,0)+0*pow(2,1)+0*pow(2,2)+0*pow(2,3);
    valoare[1]=1*pow(2,0)+0*pow(2,1)+0*pow(2,2)+0*pow(2,3);
    valoare[2]=0*pow(2,0)+1*pow(2,1)+0*pow(2,2)+0*pow(2,3);
    valoare[3]=1*pow(2,0)+1*pow(2,1)+0*pow(2,2)+0*pow(2,3);
    valoare[4]=0*pow(2,0)+0*pow(2,1)+1*pow(2,2)+0*pow(2,3);
    valoare[5]=0*pow(2,0)+0*pow(2,1)+1*pow(2,2)+0*pow(2,3);
    valoare[6]=1*pow(2,0)+1*pow(2,1)+0*pow(2,2)+0*pow(2,3);
    valoare[7]=0*pow(2,0)+1*pow(2,1)+0*pow(2,2)+0*pow(2,3);
    valoare[8]=1*pow(2,0)+0*pow(2,1)+0*pow(2,2)+0*pow(2,3);
    valoare[9]=0*pow(2,0)+0*pow(2,1)+0*pow(2,2)+0*pow(2,3);
    if(*optiune==1)
        {bitset<4>b1(valoare[*numar]);
        if(*numar <=4 )
            cout<<b1;
        else
            cout<<~b1;}
    else
    {
        for(int i=0;i<=9;i++)
        {bitset<4>b1(valoare[i]);
        if(i <=4 )
            cout<<b1<<"  |  ";
        else
            cout<<~b1<<"  |  ";
        }
    }
}

void cod84_negat21(int *numar, int *optiune)
{

    int valoare[10];

    valoare[0]=0*pow(2,0)+0*pow(2,1)+0*pow(2,2)+0*pow(2,3);
    valoare[1]=1*pow(2,0)+1*pow(2,1)+1*pow(2,2)+0*pow(2,3);
    valoare[2]=0*pow(2,0)+1*pow(2,1)+1*pow(2,2)+0*pow(2,3);
    valoare[3]=1*pow(2,0)+0*pow(2,1)+1*pow(2,2)+0*pow(2,3);
    valoare[4]=0*pow(2,0)+0*pow(2,1)+1*pow(2,2)+0*pow(2,3);
    valoare[5]=0*pow(2,0)+0*pow(2,1)+1*pow(2,2)+0*pow(2,3);
    valoare[6]=1*pow(2,0)+0*pow(2,1)+1*pow(2,2)+0*pow(2,3);
    valoare[7]=0*pow(2,0)+1*pow(2,1)+1*pow(2,2)+0*pow(2,3);
    valoare[8]=1*pow(2,0)+1*pow(2,1)+1*pow(2,2)+0*pow(2,3);
    valoare[9]=0*pow(2,0)+0*pow(2,1)+0*pow(2,2)+0*pow(2,3);
    if(*optiune == 1)
        {bitset<4>b1(valoare[*numar]);
        if(*numar <= 4)
            cout<<b1;
        else
            cout<<~b1;}
    else

       for(int i=0;i<=9;i++)
            {bitset<4>b1(valoare[i]);
            if(i <= 4)
            cout<<b1<<"  |  ";
            else
            cout<<~b1<<"  |  ";}

}

void codBichinar(int *numar,int *optiune)
{
    int valoare[10];
    valoare[0]=1*pow(2,0)+0*pow(2,1)+0*pow(2,2)+0*pow(2,3);
    valoare[1]=0*pow(2,0)+1*pow(2,1)+0*pow(2,2)+0*pow(2,3);
    valoare[2]=0*pow(2,0)+0*pow(2,1)+1*pow(2,2)+0*pow(2,3);
    valoare[3]=0*pow(2,0)+0*pow(2,1)+0*pow(2,2)+1*pow(2,3);
    valoare[4]=0*pow(2,0)+0*pow(2,1)+0*pow(2,2)+0*pow(2,3)+1*pow(2,4);
    valoare[5]=1*pow(2,0)+0*pow(2,1)+0*pow(2,2)+0*pow(2,3);
    valoare[6]=0*pow(2,0)+1*pow(2,1)+0*pow(2,2)+0*pow(2,3);
    valoare[7]=0*pow(2,0)+0*pow(2,1)+1*pow(2,2)+0*pow(2,3);
    valoare[8]=0*pow(2,0)+0*pow(2,1)+0*pow(2,2)+1*pow(2,3);
    valoare[9]=0*pow(2,0)+0*pow(2,1)+0*pow(2,2)+0*pow(2,3)+1*pow(2,4);
    if(*optiune==1)
        {bitset<7>b1(valoare[*numar]);
        if(*numar <= 4)
            b1.set(5,1);
        else
            b1.set(6,1);
        cout<<b1;}
    else
        for(int i=0;i<=9;i++)
            {
            bitset<7>b1(valoare[i]);
            if(i <= 4)
                b1.set(5,1);
            else
                b1.set(6,1);
            cout<<b1<<" | ";
                }
}


int afisareMeniu()
{
    cout<<"**************************************************"<<endl;
    cout<<"*                                                *"<<endl;
    cout<<"*     1.Coduri numerice pentru o cifra           *"<<endl;
    cout<<"*     2.Coduri numerice pentru toate cifrele     *"<<endl;
    cout<<"*                                                *"<<endl;
    cout<<"**************************************************"<<endl;
}

int main()
{
    char ch,ch1;
    int optiune,numar;
    afisareMeniu();
    ch = _getch();
    optiune =ch-'0';
    system("CLS");
    while(optiune!=1 && optiune !=2)
    {

        cout<<endl<<"Valoarea introdusa este incorecta. Va rog reintroduceti una din variantele permise."<<endl;
        ch = _getch();
        optiune =ch-'0';
        system("CLS");
    }

    if(optiune==1)
    {
        cout<<"Introduceti o cifra de la 0 la 9"<<endl;
        ch1=_getch();
        numar=ch1-'0';
        while(numar<0 || numar>9)
            {
                cout<<endl<<"Valoarea introdusa este incorecta. Va rog reintroduceti valoarea."<<endl;
                ch1 = _getch();
                numar =ch1-'0';
                system("CLS");

            }

        cout<<"-----------------------------------------------------------------------------------------"<<endl;
        cout<<"| Cifra |  8421  |  2421(Aiken)  |  84~(21)  |  5043210  |  Exces 3  |  Gray  |  74210  |"<<endl;
        cout<<"-----------------------------------------------------------------------------------------"<<endl;
        cout<<"|  "<<numar<<"    |  "; cod8421(&numar,&optiune); cout<<"  |     "; cod2421(&numar,&optiune); cout<<"      |   "; cod84_negat21(&numar,&optiune); cout<<"    |  ";
        codBichinar(&numar,&optiune);  cout<<"  |    "; codExces3(&numar,&optiune); cout<<"   |  ";codGray(&numar,&optiune); cout<<"  |  "; cod2din5(&numar,&optiune); cout<<"  |"<<endl;
        cout<<"-----------------------------------------------------------------------------------------"<<endl;

    }
    else
    {
        cout<<"----------------------------------------------------------------------------------------------------------------"<<endl;
        cout<<"|  Cifra  |   0    |   1    |   2    |   3    |   4    |    5    |   6   |   7    |   8    |   9    |"<<endl;
        cout<<"----------------------------------------------------------------------------------------------------------------"<<endl;
        cout<<"|   8421  |  "; cod8421(&numar,&optiune); cout<<endl;
        cout<<"----------------------------------------------------------------------------------------------------------------"<<endl;
        cout<<"|   2421  |  "; cod2421(&numar,&optiune); cout<<endl;
        cout<<"----------------------------------------------------------------------------------------------------------------"<<endl;
        cout<<"| 84~(21) |  "; cod84_negat21(&numar,&optiune); cout<<endl;
        cout<<"----------------------------------------------------------------------------------------------------------------"<<endl;
        cout<<"| 5043210 |  "; codBichinar(&numar,&optiune); cout<<endl;
        cout<<"----------------------------------------------------------------------------------------------------------------"<<endl;
        cout<<"| Exces3  |  "; codExces3(&numar,&optiune); cout<<endl;
        cout<<"----------------------------------------------------------------------------------------------------------------"<<endl;
        cout<<"|   Gray  |  ";codGray(&numar,&optiune); cout<<endl;
        cout<<"----------------------------------------------------------------------------------------------------------------"<<endl;
        cout<<"|  74210  |  "; cod2din5(&numar,&optiune); cout<<endl;
        cout<<"----------------------------------------------------------------------------------------------------------------"<<endl;
    }

    return 0;
}
