#include<iostream>
#include<stdlib.h>
#include<fstream>
#include<windows.h>
#include<conio.h>
using namespace std;
char b=201,o=200,d=188,e=187,f=205,g=186;
void pause()
{
    cout<<"press enter to cont...";
    cin.ignore();
}
void line()
{
    for(int i=1;i<135;i++)
        cout<<(char)205;
}
class Oopc
{
    char chap_ch,c,a;
    int cnt=0;
    string line;
    public:
    void chap_open()
    {
        label:
         cout<<"\t\t\t\t\t"<<b<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<e;
         cout<<"\n\t\t\t\t\t"<<g<<" OBJECT ORIENTED PROGRAMMING WITH C++ "<<g;
         cout<<"\n\t\t\t\t\t"<<o<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<d;
         cout<<"\n\n\n";
         cout<<"\t\t\t\t\t"<<b<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<e;
cout<<"\n\t\t\t\t\t"<<g<<"\t\t\t\t\t     "<<g;
cout<<"\n\t\t\t\t\t"<<g<<" \t    1. INTRO TO C++\t\t     "<<g;
cout<<"\n\t\t\t\t\t"<<g<<" \t    2. CLASSES & OBJECTS\t     "<<g;
cout<<"\n\t\t\t\t\t"<<g<<" \t    3. OVERLOADING\t\t     "<<g;
cout<<"\n\t\t\t\t\t"<<g<<" \t    4. QUIZ PRACTICE\t\t     "<<g;
cout<<"\n\t\t\t\t\t"<<g<<"\t\t\t\t\t     "<<g;
cout<<"\n\t\t\t\t\t"<<o<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<d;
cout<<"\n\n\t\t\t\tChoose your choice: ";
        cin>>chap_ch;
        switch(chap_ch)
        {
        case '1':
            {
            system("CLS");
            cout<<"\t\t\t\t\t\t"<<b<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<e;
        cout<<"\n\t\t\t\t\t\t"<<g<<"     \t  INTRO TO C++\t     "<<g;
        cout<<"\n\t\t\t\t\t\t"<<o<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<d<<endl;
            ifstream k1("introOOPC.txt");
            while(!k1.eof())
            {
                getline(k1,line);
                cout<<line<<endl;
            }
            k1.close();
                        cout<<"\n Want to go chapter page[y/n] :";
                    cin>>c;
                    if(c=='y'||c=='Y')
                     {
                         system("CLS");
                        goto label;
                     }
                     else
                        system("CLS");
            }
            break;

        case '2':
            {
            system("CLS");
            cout<<"\t\t\t\t\t\t"<<b<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<e;
        cout<<"\n\t\t\t\t\t\t"<<g<<"\tCLASSES & OBJECTS    "<<g;
        cout<<"\n\t\t\t\t\t\t"<<o<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<d<<endl;
             ifstream k1("class.txt");
            while(!k1.eof())
            {
                getline(k1,line);
                cout<<line<<endl;
            }
            k1.close();
                    cout<<"\n Want to go chapter page[y/n] :";
                    cin>>c;
                    if(c=='y'||c=='Y')
                     {
                          system("CLS");
                        goto label;
                     }
                      system("CLS");
            }
            break;

        case '3':
            {
            system("CLS");
            cout<<"\t\t\t\t\t\t"<<b<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<e;
        cout<<"\n\t\t\t\t\t\t"<<g<<"\t OVERLOADING         "<<g;
        cout<<"\n\t\t\t\t\t\t"<<o<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<d<<endl;
             ifstream k1("overloading.txt");
            while(!k1.eof())
            {
                getline(k1,line);
                cout<<line<<endl;
            }
            k1.close();
                        cout<<"\n Want to go chapter page[y/n] :";
                    cin>>c;
                    if(c=='y'||c=='Y')
                     {
                          system("CLS");
                        goto label;
                     }
                      system("CLS");
            }
            break;

        case '4':
            {
                system("CLS");
                    cout<<"This is MCQ test .There will be 5 questions each carrying 2 marks.\nAll the best!\n\n";
                    cout<<"Question 1:How many types constructors are there in C++?";
                    cout<<"\na)1 \nb)2\nc)3\nd)4";
                    cout<<"\nEnter answer: ";
                    cin>>a;
                    if(a=='c' ||a=='C')
                    {
                        cout<<"\n\nYour answer is right\n\n";
                         cout<<"==========================================================================================================================";
                        cnt=cnt+2;
                    }
                    else
                        {cout<<"\n\nYour answer is wrong\n\n";
                    cout<<"==========================================================================================================================";
                    }
                    cout<<"\n\n\nQuestion 2:What is function of constructors ?";
                    cout<<"\na)  to Initialize object of various classes \nb) to construct a data \nc)to show timer \nd) none of the above";
                    cout<<"\nEnter answer: ";
                    cin>>a;
                    if(a=='a'||a=='A')
                    {
                        cout<<"\n\nYour answer is right\n\n";
                         cout<<"==========================================================================================================================";
                        cnt=cnt+2;
                    }
                     else
                     {
                        cout<<"\n\nYour answer is wrong\n\n";
                    cout<<"==========================================================================================================================";
                    }
                    cout<<"\n\n\nQuestion 3:Ultimately Constructors are ______ ?";
                    cout<<"\na)parameters \nb)arguments \nc)member functions \nd)none of the above";
                    cout<<"\nEnter answer: ";
                    cin>>a;
                    if(a=='c')
                    {
                        cout<<"\n\nYour answer is right\n\n";
                         cout<<"==========================================================================================================================";
                        cnt=cnt+2;
                    }
                     else
                        {cout<<"\n\nYour answer is wrong\n\n";
                    cout<<"==========================================================================================================================";
                    }
                    cout<<"\n\n\nQuestion 4:You can pass arguments in ______ constructors";
                    cout<<"\na) default  \nb) copy \nc) parameterized \nd)none of the above";
                    cout<<"\nEnter answer: ";
                    cin>>a;
                    if(a=='c')
                    {
                         cout<<"==========================================================================================================================";
                        cout<<"\n\nYour answer is right";
                        cnt=cnt+2;
                    }
                     else
                        {cout<<"\n\nYour answer is wrong\n\n";
                    cout<<"==========================================================================================================================";
                    }
                    cout<<"\n\n\nQuestion 5:Which sign is used to differentiate between Constructors and destructor? ";
                    cout<<"\na)#\nb)~\nc)% \nd)^";
                    cout<<"\nEnter answer: ";
                    cin>>a;
                    if(a=='b')
                    {
                        cout<<"\n\nYour answer is right\n\n";
                         cout<<"==========================================================================================================================";
                        cnt=cnt+2;
                    }
                     else
                        {cout<<"\n\nYour answer is wrong\n\n";
                    cout<<"==========================================================================================================================";
                        }
                    cout<<"\n\n\n-->    You scored "<<cnt<<" marks out of 10";
                       cout<<"\n Want to go chapter page[y/n] :";
                    cin>>c;
                    if(c=='y'||c=='Y')
                     {
                          system("CLS");
                        goto label;
                     }
                      system("CLS");
            }
        default:
            {
                Beep(500,600);
                cout<<"\n\n\n\t\t\t...INCORRECT CHOICE...";
                system("PAUSE");
                goto label;
            }

        }
            }


};
class Physics
{
    char chap_ch,c,a;
    int cnt=0;
    string line;
    public:
    void chap_open()
    {
        label:
            cout<<"\t\t\t\t\t"<<b<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<e;
            cout<<"\n\t\t\t\t\t"<<g<<"           PHYSICS          "<<g;
            cout<<"\n\t\t\t\t\t"<<o<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<d;
            cout<<"\n\n\n";
            cout<<"\t\t\t\t\t"<<b<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<e;
cout<<"\n\t\t\t\t\t"<<g<<"\t\t\t\t\t     "<<g;
cout<<"\n\t\t\t\t\t"<<g<<" \t    1. ACOUSTICS\t\t     "<<g;
cout<<"\n\t\t\t\t\t"<<g<<" \t    2. MILLER INDICES\t\t     "<<g;
cout<<"\n\t\t\t\t\t"<<g<<" \t    3. ERROR ANALYSIS\t\t     "<<g;
cout<<"\n\t\t\t\t\t"<<g<<" \t    4. QUIZ PRACTICE\t\t     "<<g;
cout<<"\n\t\t\t\t\t"<<g<<"\t\t\t\t\t     "<<g;
cout<<"\n\t\t\t\t\t"<<o<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<d;
cout<<"\n\n\t\t\t\tChoose your choice:";
        cin>>chap_ch;
        switch(chap_ch)
        {
        case '1':
            {
            system("CLS");
        cout<<"\t\t\t\t\t\t"<<b<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<e;
        cout<<"\n\t\t\t\t\t\t"<<g<<"\t   ACOUSTICS         "<<g;
        cout<<"\n\t\t\t\t\t\t"<<o<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<d<<endl;
            ifstream k1("acoustics.txt");
            while(!k1.eof())
            {
                getline(k1,line);
                cout<<line<<endl;
            }
            k1.close();
             cout<<"\n Want to go chapter page[y/n] :";
                    cin>>c;
                    if(c=='y'||c=='Y')
                     {
                          system("CLS");
                        goto label;
                     }
                     else
                        system("CLS");
            break;
            }
        case '2':
            {
            system("CLS");
            cout<<"\t\t\t\t\t\t"<<b<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<e;
        cout<<"\n\t\t\t\t\t\t"<<g<<"\t MILLER INDICES      "<<g;
        cout<<"\n\t\t\t\t\t\t"<<o<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<d<<endl;
            ifstream k1("miller.txt");
            while(!k1.eof())
            {
                getline(k1,line);
                cout<<line<<endl;
            }
            k1.close();
             cout<<"\n Want to go chapter page[y/n] :";
                    cin>>c;
                    if(c=='y'||c=='Y')
                     {
                          system("CLS");
                        goto label;
                     }
                     else
                        system("CLS");
            break;
            }
        case '3':
            {
            system("CLS");
            cout<<"\t\t\t\t\t\t"<<b<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<e;
        cout<<"\n\t\t\t\t\t\t"<<g<<"\t ERRROR ANALYSIS     "<<g;
        cout<<"\n\t\t\t\t\t\t"<<o<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<d<<endl;
            ifstream k1("error.txt");
            while(!k1.eof())
            {
                getline(k1,line);
                cout<<line<<endl;
            }
            k1.close();
             cout<<"\n Want to go chapter page[y/n] :";
                    cin>>c;
                    if(c=='y'||c=='Y')
                     {
                          system("CLS");
                        goto label;
                     }
                     else
                        system("CLS");
            break;
            }
        case '4':
            {
                 system("CLS");
                    cout<<"This is MCQ test .There will be 5 questions each carrying 2 marks.\nAll the best!\n\n";
                    cout<<"Question 1:Pitch is depend upon _____________";
                    cout<<"\na)frequency \nb)loudness \nc)sensitiveness of ear\nd)timbre";
                    cout<<"\nEnter answer: ";
                    cin>>a;
                    if(a=='a' ||a=='A')
                    {
                        cout<<"\n\nYour answer is right\n\n";
                        cout<<"==========================================================================================================================";
                        cnt=cnt+2;
                    }
                    else
                        {cout<<"\n\nYour answer is wrong\n\n";
                         cout<<"==========================================================================================================================";
                        }
                    cout<<"Question 2:Which is true relation between loudness and intensity?";
                    cout<<"\na)K=L*logI \nb)L=K*logI \nc)I=K*logL\nd)I=L*logK";
                    cout<<"\nEnter answer: ";
                    cin>>a;
                    if(a=='b' ||a=='B')
                    {
                        cout<<"\n\nYour answer is right\n\n";
                        cout<<"==========================================================================================================================";
                        cnt=cnt+2;
                    }
                    else
                        {cout<<"\n\nYour answer is wrong\n\n";
                         cout<<"==========================================================================================================================";
                        }
                    cout<<"Question 3:In which field X-rays are used?";
                    cout<<"\na)Airport security \nb)Crystallography \nc)Astronomy \nd)All of the above";
                    cout<<"\nEnter answer: ";
                    cin>>a;
                    if(a=='d' ||a=='D')
                    {
                         cout<<"\n\nYour answer is right\n\n";
                        cout<<"==========================================================================================================================";
                        cnt=cnt+2;
                    }
                    else
                        {cout<<"\n\nYour answer is wrong\n\n";
                         cout<<"==========================================================================================================================";
                        }

                    cout<<"Question 4:What is the range of the wavelength of X-rays?";
                    cout<<"\na)0.1 to 10nm\nb)10 to 100nm \nc)0.01 to 10nm \nd)0.001 to 0.01nm";
                    cout<<"\nEnter answer: ";
                    cin>>a;
                    if(a=='c' ||a=='C')
                    {
                        cout<<"\n\nYour answer is right\n\n";
                        cout<<"==========================================================================================================================";
                        cnt=cnt+2;
                    }
                    else
                        {cout<<"\n\nYour answer is wrong\n\n";
                         cout<<"==========================================================================================================================";
                        }

                    cout<<"Question 5:Which statements are true for significant figures?";
                    cout<<"\na)All non-zeroes number are significant\nb)zeroes between two non-zero are significant \nc)both of them \nd)none of the above";
                    cout<<"\nEnter answer: ";
                    cin>>a;
                    if(a=='c' ||a=='C')
                    {
                        cout<<"\n\nYour answer is right\n\n";
                        cout<<"==========================================================================================================================";
                        cnt=cnt+2;
                    }
                    else
                        {cout<<"\n\nYour answer is wrong\n\n";
                          cout<<"==========================================================================================================================";
                         }
                        cout<<"\n\n\n-->    You scored "<<cnt<<" marks out of 10";
                        cout<<"\n Want to go chapter page[y/n] :";
                    cin>>c;
                    if(c=='y'||c=='Y')
                     {
                          system("CLS");
                        goto label;
                     }
                     else
                        system("CLS");
            }
            default:
            {
                Beep(500,600);
                cout<<"\n\n\n\t\t\t...INCORRECT CHOICE...";
                system("PAUSE");
                goto label;
            }
        }
    }
};
class Bme
{
    char chap_ch,a,c;
    int cnt=0;
    string line;
    public:
    void chap_open()
    {
        label:
        system("CLS");
        cout<<"\t\t\t\t\t"<<b<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<e;
        cout<<"\n\t\t\t\t\t"<<g<<"  BASICS OF MECHANICAL ENGINEERING  "<<g;
        cout<<"\n\t\t\t\t\t"<<o<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<d;
        cout<<"\n\n\n";
        cout<<"\t\t\t\t\t"<<b<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<e;
cout<<"\n\t\t\t\t\t"<<g<<"\t\t\t\t\t     "<<g;
cout<<"\n\t\t\t\t\t"<<g<<" \t    1. PRIME MOVERS\t\t     "<<g;
cout<<"\n\t\t\t\t\t"<<g<<" \t    2. BOILERS\t\t\t     "<<g;
cout<<"\n\t\t\t\t\t"<<g<<" \t    3. REFRIGERATION\t\t     "<<g;
cout<<"\n\t\t\t\t\t"<<g<<" \t    4. QUIZ PRACTICE\t\t     "<<g;
cout<<"\n\t\t\t\t\t"<<g<<"\t\t\t\t\t     "<<g;
cout<<"\n\t\t\t\t\t"<<o<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<d;
cout<<"\n\n\t\t\t\tChoose your choice: ";
        cin>>chap_ch;
        switch(chap_ch)
        {
        case '1':
            {
            system("CLS");
            cout<<"\t\t\t\t\t\t"<<b<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<e;
        cout<<"\n\t\t\t\t\t\t"<<g<<"\t  PRIME MOVERS       "<<g;
        cout<<"\n\t\t\t\t\t\t"<<o<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<d<<endl;
            ifstream k1("prime.txt");
            while(!k1.eof())
            {
                getline(k1,line);
                cout<<line<<endl;
            }
            k1.close();
                 cout<<"\n Want to go chapter page[y/n] :";
                    cin>>c;
                    if(c=='y'||c=='Y')
                     {
                         system("CLS");
                        goto label;
                     }
                     else
                        system("CLS");
            break;
            }
        case '2':
            {
            system("CLS");
            cout<<"\t\t\t\t\t\t"<<b<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<e;
        cout<<"\n\t\t\t\t\t\t"<<g<<"\t    BOILERS          "<<g;
        cout<<"\n\t\t\t\t\t\t"<<o<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<d<<endl;
             ifstream k1("boiler.txt");
            while(!k1.eof())
            {
                getline(k1,line);
                cout<<line<<endl;
            }
            k1.close();
                 cout<<"\n Want to go chapter page[y/n] :";
                    cin>>c;
                    if(c=='y'||c=='Y')
                     {
                         system("CLS");
                        goto label;
                     }
                     else
                        system("CLS");
            break;
            }
        case '3':
            {
            system("CLS");
            cout<<"\t\t\t\t\t\t"<<b<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<e;
        cout<<"\n\t\t\t\t\t\t"<<g<<"\t REFRIGERATION       "<<g;
        cout<<"\n\t\t\t\t\t\t"<<o<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<d<<endl;
             ifstream k1("refrigeration.txt");
            while(!k1.eof())
            {
                getline(k1,line);
                cout<<line<<endl;
            }
            k1.close();
                 cout<<"\n Want to go chapter page[y/n] :";
                    cin>>c;
                    if(c=='y'||c=='Y')
                     {
                         system("CLS");
                        goto label;
                     }
                     else
                        system("CLS");
            break;
            }
        case '4':
            {
                 system("CLS");
                    cout<<"This is MCQ test .There will be 5 questions each carrying 2 marks.\nAll the best!\n\n";
                    cout<<"\n\n\nQuestion 1: 1Pa=________?";
                    cout<<"\na) 1N/mm^2  \nb)1N/cm^2\nc)10N/m^2\nd)1N/m^2";
                    cout<<"\nEnter answer: ";
                    cin>>a;
                    if(a=='d')
                    {
                        cout<<"\n\nYour answer is right\n\n";
                        cout<<"==========================================================================================================================";
                        cnt=cnt+2;
                    }
                     else
                        {cout<<"\n\nYour answer is wrong\n\n";
                        cout<<"==========================================================================================================================";
                         }
                    cout<<"\n\n\nQuestion 2:Range of the mechanical efficiency _____ for I.C engines??";
                    cout<<"\na) 80-85% \nb)10-20%\nc)20-30%\nd)25-50% ";
                    cout<<"\nEnter answer: ";
                        cin>>a;
                    if(a=='a')
                    {
                        cout<<"\n\nYour answer is right\n\n";
                        cout<<"==========================================================================================================================";
                        cnt=cnt+2;
                    }
                     else
                        {cout<<"\n\nYour answer is wrong\n\n";
                         cout<<"==========================================================================================================================";
                         }
                    cout<<"\n\n\nQuestion 3:______ is known as Adiabetic index?";
                    cout<<"\na) Cp/Cv=R^-1\nb)Cv/Cp=R^-1\nc)Cp/Cv=-R\nd)Cv*Cp=R";
                    cout<<"\nEnter answer: ";
                        cin>>a;
                        if(a=='b')
                        {
                            cout<<"\n\nYour answer is right\n\n";
                            cout<<"==========================================================================================================================";
                            cnt=cnt+2;
                        }
                        else
                            {cout<<"\n\nYour answer is wrong\n\n";
                             cout<<"==========================================================================================================================";
                             }
                    cout<<"\n\n\nQuestion 4:Power available at he engine shaft is called?";
                    cout<<"\na) Indicated power \nb)Brake power\nc)Body power\nd)engine power";
                    cout<<"\nEnter answer: ";
                        cin>>a;
                        if(a=='b')
                            {
                                cout<<"\n\nYour answer is right\n\n";
                                cout<<"==========================================================================================================================";
                                cnt=cnt+2;
                            }
                        else
                            {cout<<"\n\nYour answer is wrong\n\n";
                             cout<<"==========================================================================================================================";
                                 }
                    cout<<"\n\n\nQuestion 5:What uses natural sources to convert their energy into mechanical energy ??";
                    cout<<"\na) Prime mover \nb)Heat\nc)Shaft\nd)Pressure";
                    cout<<"\nEnter answer: ";
                        cin>>a;
                            if(a=='a')
                                {
                                    cout<<"\n\nYour answer is right\n\n";
                                  cout<<"==========================================================================================================================";
                                    cnt=cnt+2;
                                }
                            else
                                    {cout<<"\n\nYour answer is wrong\n\n";
                                    cout<<"==========================================================================================================================";
                                    }
                    cout<<"\n\n\n-->    You scored "<<cnt<<" marks out of 10";
                         cout<<"\n Want to go chapter page[y/n] :";
                    cin>>c;
                    if(c=='y'||c=='Y')
                     {
                         system("CLS");
                        goto label;
                     }
                     else
                        system("CLS");
            }
            default:
            {
                Beep(500,600);
                cout<<"\n\n\n\t\t\t...INCORRECT CHOICE...";
                system("PAUSE");
                goto label;
            }
        }
    }
};
class Beee
{
    char ch,a,c;
    int cnt=0;
    string line;
    public:
    void chap_open()
    {
        label:
        system("CLS");
        cout<<"\t\t\t\t\t"<<b<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<e;
        cout<<"\n\t\t\t\t\t"<<g<<"  BASICS OF ELECTRICAL & ELECTRONICS ENGINEERING  "<<g;
        cout<<"\n\t\t\t\t\t"<<o<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<d;
        cout<<"\n\n\n";
        cout<<"\t\t\t\t\t"<<b<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<e;
cout<<"\n\t\t\t\t\t"<<g<<"\t\t\t\t\t     "<<g;
cout<<"\n\t\t\t\t\t"<<g<<" \t    1. KCL & KVL\t\t     "<<g;
cout<<"\n\t\t\t\t\t"<<g<<" \t    2. AC CIRCIUTS\t\t     "<<g;
cout<<"\n\t\t\t\t\t"<<g<<" \t    3. CAPACITOR\t\t     "<<g;
cout<<"\n\t\t\t\t\t"<<g<<" \t    4. QUIZ PRACTICE\t\t     "<<g;
cout<<"\n\t\t\t\t\t"<<g<<"\t\t\t\t\t     "<<g;
cout<<"\n\t\t\t\t\t"<<o<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<d;

        cout<<"\n\n\t\t\t\tChoose your choice: ";
        cin>>ch;
        switch(ch)
        {
        case '1':
            {
            system("CLS");
            cout<<"\t\t\t\t\t\t"<<b<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<e;
        cout<<"\n\t\t\t\t\t\t"<<g<<"      \t   KCL & KVL \t     "<<g;
        cout<<"\n\t\t\t\t\t\t"<<o<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<d<<endl;
            ifstream k1("kcl.txt");
            while(!k1.eof())
            {
                getline(k1,line);
                cout<<line<<endl;
            }
            k1.close();
            cout<<"\n Want to go chapter page[y/n] :";
                    cin>>c;
                    if(c=='y'||c=='Y')
                     {
                        goto label;
                     }
            }
            break;
        case '2':
            {
            system("CLS");
            cout<<"\t\t\t\t\t\t"<<b<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<e;
        cout<<"\n\t\t\t\t\t\t"<<g<<"     \t   AC CIRCUITS\t     "<<g;
        cout<<"\n\t\t\t\t\t\t"<<o<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<d<<endl;
             ifstream k1("ac.txt");
            while(!k1.eof())
            {
                getline(k1,line);
                cout<<line<<endl;
            }
            k1.close();
            cout<<"\n Want to go chapter page[y/n] :";
                    cin>>c;
                    if(c=='y'||c=='Y')
                     {
                        goto label;
                     }
             break;
            }
        case '3':
            {
            system("CLS");
            cout<<"\t\t\t\t\t\t"<<b<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<e;
        cout<<"\n\t\t\t\t\t\t"<<g<<"     \t CAPACITORS\t     "<<g;
        cout<<"\n\t\t\t\t\t\t"<<o<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<d<<endl;
            ifstream k1("kvl.txt");
            while(!k1.eof())
            {
                getline(k1,line);
                cout<<line<<endl;
            }
            k1.close();
            cout<<"\n Want to go to chapter page[y/n] :";
                    cin>>c;
                    if(c=='y'||c=='Y')
                     {
                        goto label;
                     }
             break;
            }
       case '4':
                {
                    system("CLS");
                    cout<<"This is MCQ test .There will be 5 questions each carrying 2 marks.\nAll the best!\n\n";
                    cout<<"Question 1:KCL stands for _________";
                    cout<<"\na) Kirchhoff's Current Law \nb) Kirchhoff's Circuit Law \nc) Kirchhoff's Capacitor Law \nd) Kirchhoff's Coloumb Law";
                    cout<<"\nEnter answer: ";
                    cin>>a;
                    if(a=='a'||a=='A')
                    {
                        cout<<"\n\nYour answer is right\n\n";
                        cout<<"==========================================================================================================================";
                        cnt=cnt+2;
                    }
                    else
                        {cout<<"\n\nYour answer is wrong\n\n";
                        cout<<"==========================================================================================================================";
                    }
                    cout<<"\n\nQuestion 2:In Kirchhoff's Voltage Law,the total voltage around the loop is equal to the sum of all"
                    "\n the voltage drops within the same loop which is also equal to ___________";
                    cout<<"\na) 1 \nb) 0 \nc) cant say \nd) both a and b";
                    cout<<"\nEnter answer: ";
                    cin>>a;
                    if(a=='b'||a=='B')
                    {
                        cout<<"\n\nYour answer is right\n\n";
                     cout<<"==========================================================================================================================";
                        cnt=cnt+2;
                    }
                     else
                        {cout<<"\n\nYour answer is wrong\n\n";
                        cout<<"==========================================================================================================================";
                    }
                    cout<<"\n\nQuestion 3:Which of the following current changes the direction periodically ?";
                    cout<<"\na)AC \nb)DC \nc)both a and b \nd)none of the above";
                    cout<<"\nEnter answer: ";
                    cin>>a;
                    if(a=='a'||a=='A')
                    {
                        cout<<"\n\nYour answer is right\n\n";
                     cout<<"==========================================================================================================================";
                        cnt=cnt+2;
                    }
                     else
                        {cout<<"\n\nYour answer is wrong\n\n";
                        cout<<"==========================================================================================================================";
                    }
                    cout<<"\n\nQuestion 4:How many plates does a simple capacitor has?";
                    cout<<"\na) 1 \nb) 4 \nc) 3 \nd) 2";
                    cout<<"\nEnter answer: ";
                    cin>>a;
                    if(a=='d'||a=='D')
                    {
                        cout<<"\n\nYour answer is right\n\n";
                        cout<<"==========================================================================================================================";
                        cnt=cnt+2;
                    }
                     else
                        {cout<<"\n\nYour answer is wrong\n\n";
                        cout<<"==========================================================================================================================";
                    }
                    cout<<"\n\nQuestion 5:Capacitors are used to store _____________";
                    cout<<"\na)electric field \nb)electric charge \nc)magnetic field \nd)none";
                    cout<<"\nEnter answer: ";
                    cin>>a;
                    if(a=='b'||a=='B')
                    {
                        cout<<"\n\nYour answer is right\n\n";
                        cout<<"==========================================================================================================================";
                        cnt=cnt+2;
                    }
                      else
                        {cout<<"\n\nYour answer is wrong\n\n";
                        cout<<"==========================================================================================================================";
                        }
                    cout<<"\n\n\n-->    You scored "<<cnt<<" marks out of 10";
                    cout<<"\n Want to go chapter page[y/n] :";
                    cin>>c;
                    if(c=='y'||c=='Y')
                     {
                        goto label;
                     }
                     else
                        system("CLS");
                    break;
                }
                default:
            {
                Beep(500,600);
                cout<<"\n\n\n\t\t\t...INCORRECT CHOICE...";
                system("PAUSE");
                goto label;
            }
        }
}};
class Ccp
{
    char chap_ch,a,c;
    int cnt=0;
    string line;
    public:
    void chap_open()
    {
        label2:
         system("CLS");
        cout<<"\t\t\t\t\t"<<b<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<e;
        cout<<"\n\t\t\t\t\t"<<g<<"  COMPUTER CONCEPTS & PROGRAMMING   "<<g;
        cout<<"\n\t\t\t\t\t"<<o<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<d;
        cout<<"\n\n\n";
        cout<<"\t\t\t\t\t"<<b<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<e;
cout<<"\n\t\t\t\t\t"<<g<<"\t\t\t\t\t     "<<g;
cout<<"\n\t\t\t\t\t"<<g<<" \t    1. INTRO TO C\t\t     "<<g;
cout<<"\n\t\t\t\t\t"<<g<<" \t    2. FUNCTIONS\t\t     "<<g;
cout<<"\n\t\t\t\t\t"<<g<<" \t    3. ARRAY\t\t\t     "<<g;
cout<<"\n\t\t\t\t\t"<<g<<" \t    4. QUIZ PRACTICE\t\t     "<<g;
cout<<"\n\t\t\t\t\t"<<g<<"\t\t\t\t\t     "<<g;
cout<<"\n\t\t\t\t\t"<<o<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<d;
        cout<<"\n\n\t\t\t\tChoose your choice: ";
        cin>>chap_ch;
        switch(chap_ch)
        {
        case '1':
            {
            system("CLS");
            cout<<"\t\t\t\t\t\t"<<b<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<e;
        cout<<"\n\t\t\t\t\t\t"<<g<<"     \t  INTRO TO C\t     "<<g;
        cout<<"\n\t\t\t\t\t\t"<<o<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<d<<endl;
            ifstream k1("introC.txt");
            while(!k1.eof())
            {
                getline(k1,line);
                cout<<line<<endl;
            }
            k1.close();
             cout<<"\n Want to go chapter page[y/n] :";
                    cin>>c;
                    if(c=='y'||c=='Y')
                     {
                        goto label2;
                     }
                     else
                        system("CLS");
            break;
            }
        case '2':
            {
            system("CLS");
            cout<<"\t\t\t\t\t\t"<<b<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<e;
        cout<<"\n\t\t\t\t\t\t"<<g<<"\t   FUNCTIONS         "<<g;
        cout<<"\n\t\t\t\t\t\t"<<o<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<d<<endl;
            ifstream k1("array.txt");
            while(!k1.eof())
            {
                getline(k1,line);
                cout<<line<<endl;
            }
            k1.close();
             cout<<"\n Want to go chapter page[y/n] :";
                    cin>>c;
                    if(c=='y'||c=='Y')
                     {
                        goto label2;
                     }
                     else
                        system("CLS");
            break;
        }
        case '3':
            {
            system("CLS");
            cout<<"\t\t\t\t\t\t"<<b<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<e;
        cout<<"\n\t\t\t\t\t\t"<<g<<"\t     ARRAY           "<<g;
        cout<<"\n\t\t\t\t\t\t"<<o<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<d<<endl;
            ifstream k1("function.txt");
            while(!k1.eof())
            {
                getline(k1,line);
                cout<<line<<endl;
            }
            k1.close();
             cout<<"\n Want to go chapter page[y/n] :";
                    cin>>c;
                    if(c=='y'||c=='Y')
                     {
                        goto label2;
                     }
                     else
                        system("CLS");
            break;
        }
        case '4':
            {
                system("CLS");
                    cout<<"This is MCQ test .There will be 5 questions each carrying 2 marks.\nAll the best!\n\n";
                    cout<<"Question 1: Mainly how many types of loop are there?";
                    cout<<"\na)2 \nb)3 \nc)4 \nd)5";
                    cout<<"\nEnter answer: ";
                    cin>>a;
                    if(a=='b'||a=='B')
                    {
                        cout<<"\n\nYour answer is right\n\n";
                        cout<<"==========================================================================================================================";
                        cnt=cnt+2;
                    }
                     else
                        {cout<<"\n\nYour answer is wrong\n\n";
                        cout<<"==========================================================================================================================";
                        }
                    cout<<"\n\nQuestion 2:A function called inside itself is known as _________ ";
                    cout<<"\na) recalling \nb)recursion \nc)both a and b \nd)none of the above";
                     cout<<"\nEnter answer: ";
                    cin>>a;
                    if(a=='b'||a=='B')
                    {
                        cout<<"\n\nYour answer is right\n\n";
                        cout<<"==========================================================================================================================";
                        cnt=cnt+2;
                    }
                     else
                        {cout<<"\n\nYour answer is wrong\n\n";
                        cout<<"==========================================================================================================================";
                    }
                     cout<<"\n\nQuestion 3:which type of language is C?";
                     cout<<"\na)procedural oreinted programming \nb)object oriented programming \nc)both a and b \nd)none of the above";
                     cout<<"\nEnter answer: ";
                        cin>>a;
                    if(a=='a'||a=='A')
                    {
                        cout<<"\n\nYour answer is right\n\n";
                        cout<<"==========================================================================================================================";
                        cnt=cnt+2;
                    }
                     else
                        {cout<<"\n\nYour answer is wrong\n\n";
                        cout<<"==========================================================================================================================";
                    }
                      cout<<"\n\nQuestion 4:Procedural oriented programming takes __________ approach?";
                      cout<<"\na)depends on the compiler \nb)top-bottom \nc)bottom-top \nd)can't say";
                      cout<<"\nEnter answer: ";
                      cin>>a;
                    if(a=='c'||a=='C')
                    {
                        cout<<"\n\nYour answer is right\n\n";
                        cout<<"==========================================================================================================================";
                        cnt=cnt+2;
                    }
                     else
                      {cout<<"\n\nYour answer is wrong\n\n";
                        cout<<"==========================================================================================================================";
                    }
                      cout<<"\n\nQuestion 5:A structure is a __________ data type available in C that allows to combining data items of different kinds.";
                      cout<<"\na)basic \nb)derived \nc)void \nd)user defined";
                      cout<<"\nEnter answer: ";
                      cin>>a;
                    if(a=='d'||a=='D')
                    {
                        cout<<"\n\nYour answer is right\n\n";
                        cout<<"==========================================================================================================================";
                        cnt=cnt+2;
                    }
                     else
                      {cout<<"\n\nYour answer is wrong\n\n";
                        cout<<"==========================================================================================================================";
                    }
                    cout<<"\n\n\n-->    You scored "<<cnt<<" marks out of 10";
                    cout<<"\n Want to go chapter page[y/n] :";
                    cin>>c;
                    if(c=='y'||c=='Y')
                     {
                        goto label2;
                     }
                     else
                        system("CLS");
                    break;
                 }
            default:
            {
                Beep(500,600);
                cout<<"\n\n\n\t\t\t...INCORRECT CHOICE...";
                system("PAUSE");
                goto label2;
            }
            }
        }
    };
class Evs
{
    char chap_ch,a,c;
    int cnt=0;
    string line;
    public:
    void chap_open()
    {
        label:
        system("CLS");
        cout<<"\t\t\t\t\t"<<b<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<e;
        cout<<"\n\t\t\t\t\t"<<g<<"    ENVIRONMENTAL SCIENCE   "<<g;
        cout<<"\n\t\t\t\t\t"<<o<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<d;
        cout<<"\n\n\n";
        cout<<"\t\t\t\t\t"<<b<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<e;
cout<<"\n\t\t\t\t\t"<<g<<"\t\t\t\t\t     "<<g;
cout<<"\n\t\t\t\t\t"<<g<<" \t    1. ATMOSPHERE\t\t     "<<g;
cout<<"\n\t\t\t\t\t"<<g<<" \t    2. ECOLOGY\t\t\t     "<<g;
cout<<"\n\t\t\t\t\t"<<g<<" \t    3. AIR POLLUTION\t\t     "<<g;
cout<<"\n\t\t\t\t\t"<<g<<" \t    4. QUIZ PRACTICE\t\t     "<<g;
cout<<"\n\t\t\t\t\t"<<g<<"\t\t\t\t\t     "<<g;
cout<<"\n\t\t\t\t\t"<<o<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<d;
        cout<<"\n\n\t\t\t\tChoose your choice: ";
        cin>>chap_ch;
        switch(chap_ch)
        {
        case '1':
            {
            system("CLS");
            cout<<"\t\t\t\t\t\t"<<b<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<e;
        cout<<"\n\t\t\t\t\t\t"<<g<<"\t  ATMOSPHERE         "<<g;
        cout<<"\n\t\t\t\t\t\t"<<o<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<d<<endl;
             ifstream k1("atmosphere.txt");
            while(!k1.eof())
            {
                getline(k1,line);
                cout<<line<<endl;
            }
            k1.close();
            cout<<"\n Want to go chapter page[y/n] :";
            cin>>c;
                    if(c=='y'||c=='Y')
                     {
                        goto label;
                     }
            break;
            }
        case '2':
            {
            system("CLS");
            cout<<"\t\t\t\t\t\t"<<b<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<e;
        cout<<"\n\t\t\t\t\t\t"<<g<<"\t    ECOLOGY          "<<g;
        cout<<"\n\t\t\t\t\t\t"<<o<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<d<<endl;
            ifstream k1("ecology.txt");
            while(!k1.eof())
            {
                getline(k1,line);
                cout<<line<<endl;
            }
            k1.close();
            cout<<"\n Want to go chapter page[y/n] :";
            cin>>c;
                    if(c=='y'||c=='Y')
                     {
                        goto label;
                     }
            break;
        }
        case '3':
            {
            system("CLS");
            cout<<"\t\t\t\t\t\t"<<b<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<e;
        cout<<"\n\t\t\t\t\t\t"<<g<<"\t AIR POLLUTION       "<<g;
        cout<<"\n\t\t\t\t\t\t"<<o<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<d<<endl;
            ifstream k1("airpollution.txt");
            while(!k1.eof())
            {
                getline(k1,line);
                cout<<line<<endl;
            }
            k1.close();
            cout<<"\n Want to go chapter page[y/n] :";
            cin>>c;
                    if(c=='y'||c=='Y')
                     {
                        goto label;
                     }
            break;
        }
        case '4':
            {
                    system("CLS");
                    cout<<"This is MCQ test .There will be 5 questions each carrying 2 marks.\nAll the best!\n\n";
                    cout<<"\n\nQuestion 1:AQI stands for what?";
                    cout<<"\na)Air quality instrument \nb)Air quality index\nc)Air quantity index \nd)Air quantity instrument";
                    cout<<"\nEnter answer: ";
                    cin>>a;
                    if(a=='b')
                    {
                        cout<<"\n\nYour answer is right\n\n";
                        cout<<"==========================================================================================================================";
                        cnt=cnt+2;
                    }
                     else
                      {cout<<"\n\nYour answer is wrong\n\n";
                        cout<<"==========================================================================================================================";
                    }
                    cout<<"\n\nQuestion 2:Air pollutants can be classified on which of the following basis?";
                    cout<<"\na)based on origin \nb)based on state of matter \nc)both a and b \nd)none of the above";
                    cout<<"\nEnter answer: ";
                      cin>>a;
                    if(a=='c')
                    {
                        cout<<"\n\nYour answer is right\n\n";
                        cout<<"==========================================================================================================================";
                        cnt=cnt+2;
                    }
                     else
                      {cout<<"\n\nYour answer is wrong\n\n";
                        cout<<"==========================================================================================================================";
                    }

                    cout<<"\n\nQuestion 3:How many spheres are there in atmosphere?";
                    cout<<"\na)2 \nb)3 \nc)4 \nd)5";
                    cout<<"\nEnter answer: ";
                      cin>>a;
                    if(a=='d')
                    {
                        cout<<"\n\nYour answer is right\n\n";
                        cout<<"==========================================================================================================================";
                        cnt=cnt+2;
                    }
                     else
                      {cout<<"\n\nYour answer is wrong\n\n";
                        cout<<"==========================================================================================================================";
                    }

                    cout<<"\n\nQuestion 4:The study of biotic and abiotic components and its relationship is called _______?";
                    cout<<"\na)ecology \nb)ecosystem \nc)ecostics \nd)none of the above";
                    cout<<"\nEnter answer: ";
                     cin>>a;
                    if(a=='a')
                    {
                        cout<<"\n\nYour answer is right\n\n";
                        cout<<"==========================================================================================================================";
                        cnt=cnt+2;
                    }
                    else
                      {cout<<"\n\nYour answer is wrong\n\n";
                        cout<<"==========================================================================================================================";
                    }
                    cout<<"\n\nQuestion 5:Graphic representation of trophic structure and function of ecosystem is called _________?";
                    cout<<"\na)ecological graphics \nb)ecological structures \nc)ecological pyramids \nd)none of the above";
                    cout<<"\nEnter answer: ";
                     cin>>a;
                    if(a=='c')
                    {
                        cout<<"\n\nYour answer is right\n\n";
                        cout<<"==========================================================================================================================";
                        cnt=cnt+2;
                    }
                    else
                      {cout<<"\n\nYour answer is wrong\n\n";
                      cout<<"==========================================================================================================================";
                      }

                      cout<<"\n\n\n-->    You scored "<<cnt<<" marks out of 10";
                       cout<<"\n Want to go chapter page[y/n] :";
                    cin>>c;
                    if(c=='y'||c=='Y')
                     {
                        goto label;
                     }
                    else
                        system("CLS");
                    break;
                }
                default:
            {
                Beep(500,600);
                cout<<"\n\n\n\t\t\t...INCORRECT CHOICE...";
                system("PAUSE");
                goto label;
            }
            }
        }
};
class Teacher
{
    int i,cls;
    int counter=0;
    string ln1;
    char take;
    string date;
    string name,password,inName;
    char inPassword[8];
    char ch,con;
    int cnt=0,cnt1=0;
public:
    void pwd(char *ar,int Max)
    {
       char ch;
    int x=0;
    while(1)
    {
        ch=getch();
        if(ch==13)
        {
            ar[x]='\0';
            break;
        }
        if(ch==8 && x!=0)
        {
            cout<<"\b \b";
            if(x<=Max && x>0)
                x--;
        }
        else if(x<Max && ch!=8)
        {
            cout<<"*";
            ar[x]=ch;
            x++;
        }
    }
}
void putpass()
{
    cout<<"\n\n\n\n\n\n\n\t\t\tUsername:";
    cin>>inName;
    cout<<"\n\t\t\tPassword:";
    pwd(inPassword,7);
}
int cmp(string l1, string l2)
{
    if(l1==inName && l2==inPassword)
        return 1;
    else
        return 0;
}
    int login()
    {
        int c;
        ifstream f("teacher.txt");
            if (!f.is_open())
            {
                cout<<"\n\t\t\t....ERROR WITH PASSWORD FILE....\n";
                return 0;
            }
            label:
                system("CLS");
                putpass();
                while (f>>name>>password)
                {
                    cnt++;
                    c=cmp(name,password);
                    if(c==1)
                    {
                        system("CLS");
                        cout<<"\n\t\t\t\t   ...LOGIN SUCCESSFUL...";
                        cout<<"\n\t\t\t\t\t\tWelcome, "<<inName<<endl<<endl;
                        system("PAUSE");
                        record();
                        return 0;
                    }
                    else
                        cnt++;
                }
                if(cnt!=cnt1)
                {
                    cout<<"\n";
                    goto label;
                }
    }
    void record()
    {
            string attsub;
            teacher:
            system("CLS");
            cout<<"\t\t\t\t\t"<<b<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<e;
cout<<"\n\t\t\t\t\t"<<g<<"\t\t\t\t\t\t   "<<g;
cout<<"\n\t\t\t\t\t"<<g<<" \t    1. CSE\t\t\t           "<<g;
cout<<"\n\t\t\t\t\t"<<g<<" \t    2. CE\t\t  \t           "<<g;
cout<<"\n\t\t\t\t\t"<<g<<" \t    3. IT\t\t   \t           "<<g;
cout<<"\n\t\t\t\t\t"<<g<<" \t    4. Attendance list [CSE/CE/IT]         "<<g;
cout<<"\n\t\t\t\t\t"<<g<<" \t    5. EXIT\t\t \t           "<<g;
cout<<"\n\t\t\t\t\t"<<g<<"\t\t\t\t\t\t   "<<g;
cout<<"\n\t\t\t\t\t"<<o<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<d;

            cout<<"\n\n\t\t\t\t\tEnter your choice [1/2/3/4/5]:";
            cin>>cls;
            switch(cls)
            {
            case 1:
            {
            cout<<"\n\nEnter the date[dd/mm/yyyy]:";
            cin>>date;
            cout<<"\nEnter the subject:";
            cin>>attsub;
            ifstream myfile("cse.txt");
            ofstream myfile1("attendanceCSE.txt",ios::app);
            while(!myfile.eof())
            {
                getline(myfile,ln1);
                counter++;
            }
            myfile1<<"\n\n"<<date<<endl<<"Present numbers in "<<attsub<<" are:\n";
            for(i=1;i<=counter;i++)
            {
                cout<<"\nRoll No. "<<i<<":";
                cin>>take;
                if(take=='p' || take=='P')
                {
                    myfile1<<i<<" ";
                }
            }
            myfile1<<"\nAttendance taken by:"<<inName;
            cout<<"\n\nAttendance is saved successfully for date:"<<date<<endl;
            myfile1.close();
                    system("PAUSE");
                    record();
                    break;
            }
            case 2:
                {
                     cout<<"\n\nEnter the date[dd/mm/yyyyy]:";
                     cin>>date;
                    ifstream myfile("ce.txt");
                    ofstream myfile1("attendanceCE.txt",ios::app);
                    while(!myfile.eof())
                    {
                        getline(myfile,ln1);
                        counter++;
                    }
            myfile1<<"\n\n"<<date<<endl<<"Present numbers in "<<attsub<<" are:\n";
            for(i=1;i<=counter;i++)
            {
                cout<<"\nRoll No. "<<i<<":";
                cin>>take;
                if(take=='p' || take=='P')
                {
                    myfile1<<i<<" ";
                }
                }
                myfile1<<"\nAttendance taken by:"<<inName;
                myfile1.close();
                cout<<"\n\nAttendance is saved successfully for date:"<<date<<endl;
                    system("PAUSE");
                    record();
                break;
            }
            case 3:
                {
                     cout<<"\n\nEnter the date[dd/mm/yyyyy]:";
            cin>>date;
            ifstream myfile("it.txt");
            ofstream myfile1("attendanceIT.txt",ios::app);
            while(!myfile.eof())
            {
                getline(myfile,ln1);
                counter++;
            }
            myfile1<<"\n\n"<<date<<endl<<"Present numbers in "<<attsub<<" are:\n";
            for(i=1;i<=counter;i++)
            {
                cout<<"\nRoll No. "<<i<<":";
                cin>>take;
                if(take=='p' || take=='P')
                {
                    myfile1<<i<<" ";
                }
            }
            myfile1<<"\nAttendance taken by:"<<inName;
            myfile1.close();
            cout<<"\n\nAttendance is saved successfully for date:"<<date<<endl;
                    system("PAUSE");
                    record();
            break;
            }
            case 4:
            {
                lab3:
                  system("CLS");
                  char attc;
                  string ln;
                  line();
                  cout<<"\n\nEnter the class of which you want to see the attendance list:\n\t\t\t\t\t1. CSE\n\t\t\t\t\t2. CE\n\t\t\t\t\t3. IT\n";
                  line();
                  cout<<"\n\t\t\tEnter your choice:";
                  cin>>attc;
                  switch(attc)
                  {
                  case '1':
                    {
                        system("CLS");
                    ifstream atcse("attendanceCSE.txt");
                    if(!atcse)
                    {
                        cout<<"\n\n\n\t\tFILE NOT AVAILABLE!!!!!";
                        system("PAUSE");
                        record();
                    }
                    while(!atcse.eof())
                    {
                        getline(atcse,ln);
                        cout<<ln<<endl;
                    }
                    atcse.close();
                    system("PAUSE");
                    record();
                    break;
                    }
                  case '2':
                    {system("CLS");
                    ifstream atce("attendanceCE.txt");
                    if(!atce)
                    {
                        cout<<"\n\n\n\t\tFILE NOT AVAILABLE!!!!!";
                        //cout<<"\n\n\nPress enter to go back to the Attendance page...";
                        system("PAUSE");
                        record();
                    }
                    while(!atce.eof())
                    {
                        getline(atce,ln);
                        cout<<ln<<endl;
                    }
                    atce.close();
                    system("PAUSE");
                    record();
                    break;
                    }
                  case '3':
                    {system("CLS");
                    ifstream atit("attendanceIT.txt");
                    if(!atit)
                    {
                        cout<<"\n\n\n\t\tFILE NOT AVAILABLE!!!!!";
                        system("PAUSE");
                        record();
                    }
                    while(!atit.eof())
                    {
                        getline(atit,ln);
                        cout<<ln<<endl;
                    }
                    atit.close();
                    system("PAUSE");
                    record();
                    break;
                    }
                  case '4':
                    {
                        Beep(500,600);
                        cout<<"\n\n\t\t\t\t!!!!!INCORRECT CHOICE!!!!!\n";
                        pause();
                        goto lab3;
                    }
                  }
            break;
            }
            case 5:
            {
                exit(0);
            }
            case 6:
                {
                     Beep(500,600);
                        cout<<"\n\n\t\t\t\t!!!!!INCORRECT CHOICE!!!!!\n";
                        pause();
                        goto teacher;
                }
        }
    }
}t;
class timetable
{
    protected:
    char ch;
    string line1;
public:
    void ttsem1()
    {
        ifstream t1("sem1tt.txt");
        while(!t1.eof())
        {
            getline(t1,line1);
            cout<<line1<<endl;
        }
        t1.close();
    }
    void ttsem2()
    {
        ifstream t2("sem2tt.txt");
        while(!t2.eof())
        {
            getline(t2,line1);
            cout<<line1<<endl;
        }
        t2.close();
    }
};

class Student: public timetable
{
    string name,id;
public:
    void get()
    {
        cout<<"\n\n\n\n\n\n\n\n\n\t\t\t\t\tEnter your name:";
        cin>>name;
        cout<<"\n\t\t\t\t\tEnter your ID:";
        cin>>id;
    }
    void put()
    {
        system("CLS");
        line();
        cout<<"\n\n\t\t\t\t\tWELCOME "<<name<<" TO THE VIRTUAL CLASSROOM!!!!!!\n";
        line();
        cout<<"\n\n\t->Here you can find materials for all subjects...\n\t->You can also have a small QUIZ on the topics of the subjects...\n\n";
        line();
        system("PAUSE");
    }
};
int main()
{
        char sem,who;
        Student s;
        Evs e1;
        Beee b1;
        Ccp c1;
        Physics p2;
        Bme bm2;
        Oopc o2;
        cout<<"\t\t\t\t\t\t"<<b<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<e;
        cout<<"\n\t\t\t\t\t\t"<<g<<"      VIRTUAL CLASSROOM     "<<g;
        cout<<"\n\t\t\t\t\t\t"<<o<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<d;
        cout<<"\n\n\n\t\t\t\t\t"<<"-->>WHO ARE YOU?[Teacher(T) / Student(S)]\n\n\t\t\t\t\t>>";
        cin>>who;
        if(who=='S'||who=='s')
        {
            system("CLS");
            s.get();
            s.put();
            system("CLS");
            cout<<"\n\n\n";
            line();
            cout<<"\n\n\n\t\t\t>>Choose the semester[1/2]:";
            cin>>sem;
            if(sem=='1')
             {
                 sem1:
                 char sub_ch;
                 system("CLS");
                cout<<"\t\t\t\t\t"<<b<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<e;
cout<<"\n\t\t\t\t\t"<<g<<"\t\t\t\t\t\t   "<<g;
cout<<"\n\t\t\t\t\t"<<g<<" \t\t    1. BEEE\t\t           "<<g;
cout<<"\n\t\t\t\t\t"<<g<<" \t\t    2. EVS\t\t           "<<g;
cout<<"\n\t\t\t\t\t"<<g<<" \t\t    3. CCP\t\t           "<<g;
cout<<"\n\t\t\t\t\t"<<g<<" \t\t    4. TIMETABLE\t\t   "<<g;
cout<<"\n\t\t\t\t\t"<<g<<" \t\t    5. Exit\t\t           "<<g;
cout<<"\n\t\t\t\t\t"<<g<<"\t\t\t\t\t\t   "<<g;
cout<<"\n\t\t\t\t\t"<<o<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<d;

                cout<<"\n\n\t\t\t\t\tYour choice:[1/2/3/4/5]:";
                cin>>sub_ch;
                line();
                switch(sub_ch)
                {
                case '1':
                    system("CLS");
                    cout<<"\t\t\t\t\t"<<b<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<e;
                    cout<<"\n\t\t\t\t\t"<<g<<"  BASICS OF ELECTRICAL & ELECTRONICS ENGINEERING  "<<g;
                    cout<<"\n\t\t\t\t\t"<<o<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<d;
                    cout<<"\n\n\n\t\t\t>>...Learn the electricity!!!....\n\n"<<flush;
                    system("PAUSE");
                    b1.chap_open();
                    goto sem1;
                    break;
                case '2':
                    system("CLS");
                    cout<<"\t\t\t\t\t"<<b<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<e;
                    cout<<"\n\t\t\t\t\t"<<g<<"    ENVIRONMENTAL SCIENCE   "<<g;
                    cout<<"\n\t\t\t\t\t"<<o<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<d;
                    cout<<"\n\n\n\t\t\t>>...Learn the Environment....\n\n"<<flush;
                    system("PAUSE");
                    e1.chap_open();
                    goto sem1;
                    break;
                case '3':
                    system("CLS");
                    cout<<"\t\t\t\t\t"<<b<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<e;
                    cout<<"\n\t\t\t\t\t"<<g<<"  COMPUTER CONCEPTS & PROGRAMMING   "<<g;
                    cout<<"\n\t\t\t\t\t"<<o<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<d;
                    cout<<"\n\n\n\t\t\t>>...Build your logic with Programming....\n\n"<<flush;
                    system("PAUSE");
                    c1.chap_open();
                    goto sem1;
                    break;
                case '4':
                    system("CLS");
                    s.ttsem1();
                    system("PAUSE");
                    goto sem1;
                case '5':
                    exit(0);
                default:
                    cout<<"\n\n\t\t\t!!!INCORRECT CHOICE!!!";
                    Beep(500,600);
                    system("CLS");
                    goto sem1;
                    break;
                }
            }
            else if(sem=='2')
            {
            sem2:
                char sub_ch;
                system("CLS");
                cout<<"\t\t\t\t\t"<<b<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<e;
                cout<<"\n\t\t\t\t\t"<<g<<"\t\t\t\t\t\t   "<<g;
                cout<<"\n\t\t\t\t\t"<<g<<" \t\t    1. PHYSICS\t\t           "<<g;
                cout<<"\n\t\t\t\t\t"<<g<<" \t\t    2. BME\t\t           "<<g;
                cout<<"\n\t\t\t\t\t"<<g<<" \t\t    3. OOPC\t\t           "<<g;
                cout<<"\n\t\t\t\t\t"<<g<<" \t\t    4. TIMETABLE\t\t   "<<g;
                cout<<"\n\t\t\t\t\t"<<g<<" \t\t    5. Exit\t\t           "<<g;
                cout<<"\n\t\t\t\t\t"<<g<<"\t\t\t\t\t\t   "<<g;
                cout<<"\n\t\t\t\t\t"<<o<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<d;
                cout<<"\n\n\t\t\t\t\tYour choice:[1/2/3/4/5]:";
                cin>>sub_ch;
                line();
                switch(sub_ch)
                {
                case '1':
                    system("CLS");
                    cout<<"\t\t\t\t\t"<<b<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<e;
                    cout<<"\n\t\t\t\t\t"<<g<<"           PHYSICS          "<<g;
                    cout<<"\n\t\t\t\t\t"<<o<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<d;
                    cout<<"\n\t\t\t>>...Have fun and learn something interesting...."<<flush;
                    system("CLS");
                    p2.chap_open();
                    goto sem2;
                    break;
                case '2':
                    system("CLS");
                    cout<<"\t\t\t\t\t"<<b<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<e;
                    cout<<"\n\t\t\t\t\t"<<g<<"  BASICS OF MECHANICAL ENGINEERING  "<<g;
                    cout<<"\n\t\t\t\t\t"<<o<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<d;
                    cout<<"\n\t\t\t>>...Learn the Mechanical Engineering..."<<flush;
                    system("CLS");
                    bm2.chap_open();
                    goto sem2;
                    break;
                case '3':
                    system("CLS");
                    cout<<"\t\t\t\t\t"<<b<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<e;
                    cout<<"\n\t\t\t\t\t"<<g<<" OBJECT ORIENTED PROGRAMMING WITH C++ "<<g;
                    cout<<"\n\t\t\t\t\t"<<o<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<f<<d;
                    cout<<"\n\t\t\t>>..Build your logic with Programming..."<<flush;
                    system("CLS");
                    o2.chap_open();
                    goto sem2;
                    break;
                case '4':
                    system("CLS");
                    s.ttsem2();
                    system("PAUSE");
                    goto sem2;
                case '5':
                    exit(0);
                default:
                    cout<<"\n\n\t\t\t!!!INCORRECT CHOICE!!!";
                    Beep(500,600);
                    system("CLS");
                    goto sem2;
                    break;
                }
            }
            else
            {
                Beep(500,1000);
                cout<<"\n\n\t\t\t!!!DATA UNAVAILABLE!!!";
            }
        }
        else if(who=='t'||who=='T')
        {
            t.login();
        }
        else
        {
            cout<<"\n\n\t\tSorry!!!\n\t\tPlease choose who are you correctly....";
            Beep(500,600);
        }
        return 0;
}