#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>


//#define E SetConsoleOutputCP(1251);
//#define U SetConsoleOutputCP(866);
using namespace std;
void New();
void View();
void Add();
void Delete();
void Sort();
void Service();
void Percent();
void Popular();
void Capacity();
void Country();
void Common();
void Del_Num();
void Del_Mar();
void SortByName();
void SortByNumber();
int PNS(string proverka);
void Write(string masiv, char masiv1[]);
//void END_Tabl();
struct PHONE
 {char OC[15];
  char country[15];
  char marka[25];
  char model[25];
  float size;
  int battery;
  int time;
  int ncountry ;
  int prise;
  int ad;
  int is;
  int wp;
 };
 struct PHONE inf;
 int size=sizeof(PHONE);
 FILE *f;
int main()
{setlocale(LC_ALL,"Rus");
 char ans;
 do{
    system("cls");
    cout<<endl<<"����:\n";
    cout<<endl<<"1.�������� �����.";
    cout<<endl<<"2.�������� ������������ ������ � ���������.";
    cout<<endl<<"3.���������� ����� ������.";
    cout<<endl<<"4.�������� ������.";
    cout<<endl<<"5.���������� �������.";
    cout<<endl<<"6.������������ �������.";
    cout<<endl<<"7.�����.";
    cout<<endl<<"\n�������� ����� ����: ";
    cin>>ans;
    if(isdigit(ans)==0) {
                       	 cout<<endl<<"�������� ������������ ������!";
    	                 getch();
	                    }
    else
    switch (ans)
    {case '1' :{New(); break;}
	 case '2' :{View(); break;}
     case '3' :{Add(); break;}
     case '4' :{Delete(); break;}
     case '5' :{Sort(); break;}
     case '6' :{Service(); break;}
     case '7':cout<<endl<<"����� ������";
    }
   }
 while (ans!='7');
 getch();
 return 0;
}

//*********************************************************
void New()
{
	 system("cls");
     if((f=fopen("phone.txt", "rb"))==NULL)
     {cout<<endl<<"������";
     getch();
     return;
     }
     fseek(f,0,SEEK_END);
     long int d=ftell(f);
     d=d/size;
     if(d==0){cout<<endl<<"Error";
     getch();
     return;
             }
      fclose(f);
      View();
      char ans;
      cout<<endl<<"�� �������, ��� ������ ������� ����? (y/n)";
      cin>>ans;
      if(isalpha(ans)==0) {
                       	 cout<<endl<<"����������� ������ �����! (y/n)";
    	                 getch();
    	                 New();
	                      }
      if(ans=='n'){cout<<endl<<"�����...";
                   getch();
                   return;
                   }
       else f=fopen("phone.txt", "wb");
       cout<<endl<<"���� ������� �����";
       fclose(f);
       getch();
}

//*********************************************************
void View()
{
	system("cls");
	int i, p=1;
    if((f=fopen("phone.txt", "rb"))==NULL)
   {
    cout<<endl<<"������";
    getch();
    return;
   }
 fseek(f,0,SEEK_END);//��������� � ����� �����
 long int d=ftell(f);//������ �����
 d=d/size;//��� �� ���� ���� � �����
 if(d==0){cout<<endl<<"���� ����";
          getch();
          return;
         }
         cout<<endl<<"�������= "<<d;
		 setlocale(LC_CTYPE, "C");



            printf("\n��������������������������������������������������������������������������������������������������������������������������������������\xBB");

            printf("\n� N �");
            setlocale(LC_CTYPE, "Ukr");
            printf("     OC      ");
            setlocale(LC_CTYPE, "C");
            printf("�");

            setlocale(LC_CTYPE, "Ukr");
            printf("     �����    ");
            setlocale(LC_CTYPE, "C");
            printf("�");

            setlocale(LC_CTYPE, "Ukr");
            printf("     ������    ");
            setlocale(LC_CTYPE, "C");
            printf("�");

            setlocale(LC_CTYPE, "Ukr");
            printf(" ������-�������������  ");
            setlocale(LC_CTYPE, "C");
            printf("�");

            setlocale(LC_CTYPE, "Ukr");
            printf("   ������ ������  ");
            setlocale(LC_CTYPE, "C");
            printf("�");

            setlocale(LC_CTYPE, "Ukr");
            printf("  ������ ������� ");
            setlocale(LC_CTYPE, "C");
            printf("�");

            setlocale(LC_CTYPE, "Ukr");
            printf("   ����  ");
            setlocale(LC_CTYPE, "C");
            printf("�");
            
            setlocale(LC_CTYPE, "Ukr");
            printf(" ����� ������");
            setlocale(LC_CTYPE, "C");
            printf("�");

            
            printf("\n�������������������������������������������������������������������������������������������������������������������������������������͹");
            rewind(f);
            for (int i = 0; i < d; i++)
            {
                fread(&inf, size, 1, f);

                int g = 0, g1 = 0, g2 = 0;

                printf("\n�%3i�", i + 1);
                setlocale(LC_CTYPE, "Ukr");
                printf("%-13s", inf.OC);
                setlocale(LC_CTYPE, "C");
                printf("�");

                setlocale(LC_CTYPE, "Ukr");
                printf("%-14s", inf.marka);
                setlocale(LC_CTYPE, "C");
                printf("�");

              
                printf("%-15s", inf.model);
                setlocale(LC_CTYPE, "C");
                printf("�");

                setlocale(LC_CTYPE, "Ukr");
                printf("%-23s", inf.country);
                setlocale(LC_CTYPE, "C");
                printf("�");

                setlocale(LC_CTYPE, "Ukr");
                printf("%-18.1f", inf.size);
                setlocale(LC_CTYPE, "C");
                printf("�");

                setlocale(LC_CTYPE, "Ukr");
                printf("%-17i", inf.battery);
                setlocale(LC_CTYPE, "C");
                printf("�");

                setlocale(LC_CTYPE, "Ukr");
                printf("%-9i", inf.prise);
                setlocale(LC_CTYPE, "C");
                printf("�");  
				
				setlocale(LC_CTYPE, "Ukr");
                printf("%-13i", inf.time);
                setlocale(LC_CTYPE, "C");
                printf("�");        
			}
				printf("\n��������������������������������������������������������������������������������������������������������������������������������������\xBC");
            setlocale(LC_ALL, "Russian");
                
           

     fclose(f);
     cout<<endl<<"������� Enter ��� �����������";
     getch();

}
//*********************************************************
void Add()
{
	char otw;
	
if ((f=fopen("phone.txt","ab"))==NULL)
	{
		cout<<endl<<"������!";
		getch();
		return;
	}
	system("cls");
//OC ��������
	char ans;
	char android[10];
	char IOS[5];
	char WindowsPhone[15];
	
do
{	
        metka:
		system("cls");
		cout<<endl<<"������������ �������:\n ";
		cout<<endl<<"1-Android";
		cout<<endl<<"2-IOS";
		cout<<endl<<"3-Windows-Phone";
		cout<<endl<<"\n�������� �� �� ������������: ";
		cin>>ans;
		if(isdigit(ans)==0) {
                       	     cout<<endl<<"��������� ������ ����� (1-3)";
    	                     getch();
    	                     goto metka;
	                        }
        else
        {switch (ans)
        {
		 case '1' :{strcpy(android,"Android"); break;}
	     case '2' :{strcpy(IOS,"IOS"); break;}
         case '3' :{strcpy(WindowsPhone,"Windows-Phone"); break;}
         default: goto metka;
        }
		if(ans=='1') {
		              strcpy (inf.OC,android);
                               
	                 }
		if(ans=='2') {
                      strcpy (inf.OC,IOS);
                                     
		             }
		if(ans=='3') {
		              strcpy (inf.OC,WindowsPhone);
		             
		             }		
		}
	cout<<endl<<"��������� ��- "<<inf.OC;
	getch();
 		
	
//������-������������� ��������	
	system("cls");
	//char ans;
	char china[7];
	char usa[5];
	char japane[8];
	char koreya[7];
	point:
		system("cls");
		cout<<endl<<"������-�������������:\n ";
		cout<<endl<<"1-�����";
		cout<<endl<<"2-���";
		cout<<endl<<"3-������";
		cout<<endl<<"4-�����";
		cout<<endl<<"\n�������� ������ �� ������������: ";
		cin>>ans;
		if(isdigit(ans)==0) {
                       	     cout<<endl<<"��������� ������ ����� (1-4)!";
    	                     getch();
    	                     goto point;
	                        }
        else
        {switch (ans)
        {
		 case '1' :{strcpy(china,"China"); break;}
	     case '2' :{strcpy(usa,"USA");inf.ncountry=2; break;}
         case '3' :{strcpy(japane,"Japan");inf.ncountry=3; break;}
         case '4' :{strcpy(koreya,"Korea"); break;}
         default: goto point;
        }
		if(ans=='1') {
		              strcpy (inf.country,china);
	                 }
		if(ans=='2') {
                      strcpy (inf.country,usa);
		             }
		if(ans=='3') {
		              strcpy (inf.country,japane);
		             }
		if(ans=='4') {
		              strcpy (inf.country,koreya);
		             }			 		
		}
																		 						                                      
	cout<<endl<<"��������� �������- "<<inf.country;
	getch();
	
	
	//���� ����� ��������
	system("cls");
	int Ifl = 0, Ifl1 = 0; 
	string s;
	int i;
	while (true)
            {
                Ifl1++;
                if (Ifl == 1)
                    cout << endl << "� �������� ������ ���� �� ������ 15 ���� ";
                if (Ifl == 2)
                    cout << endl << "�������� ������ ���� ������ �� ���� (����������) ";
                Ifl = 0;
                cout << endl << "������� �����: ";
               
                if (Ifl1 == 1)
                    cin.get();
                    getline(cin, s);      
                if (s.length() == 0)
                    Ifl = 2;
                if (s.length() > 15)
                {
                    s.resize(15);
                    Ifl = 1;
                }

                for (int i = 0; i < s.length(); i++)
                {
                    if ((iswdigit(s[i])) || PNS(s) > 0)
                        Ifl = 2;
                }
                if (Ifl == 0)
                    break;
            }      
     char line[80];
     char new_line[80] = "";
     strcpy (line, s.c_str());
    for (int i = 0; i < strlen(line); i++)
    {
        if (line[i] != ' ')
            strncat(new_line, line + i, 1);
    }
     new_line[0] = toupper(new_line[0]);  
    
	getch();				         
	Write(new_line, inf.marka);
	cout << endl << "��������� �����: " << inf.marka;
	getch();
	
	
	//���� ������ ��������
		system("cls");
	Ifl=0;
	Ifl1=0;
    string s2;
    while1:
	while (true)
            {
                Ifl1++;
                if (Ifl == 1)
                    cout << endl << "� �������� ������ ���� �� ������ 15 ���� ";
                if (Ifl == 2)
                    cout << endl << "� �������� ����� ���� ������ ����� � ����� ";
                if (Ifl == 3)
				    cout << endl << "� �������� ����� ���� ������ ���������� ����� � ����� ";
                Ifl = 0; 
                cout << endl << "������� ������: ";
                if (Ifl1 == 1)
                    getch();
                    getline(cin, s2);
                if (s2.length() == 0)
                    Ifl = 2;
            
                if (s2.length() > 15)
                {
                    s2.resize(15);
                    Ifl = 1;
                }

                for (int i = 0; i < s2.length(); i++)
                {
                     if ( PNS(s2) > 0)
                        Ifl = 2;
                }
                if (Ifl == 0)
                    break;    
            }
              
                for (i=0; i<s2.length(); i++)
                      {
    	                if(s2[0]==' ' || s2[i]==' ' && s2[i+1]==' ')
                   	  {
    		            s2.erase(i, 1);
    		            i--;
	                  }
                      }
    s2[0] = toupper(s2[0]);                   
    Write(s2, inf.model);                
	cout<<endl<<"��������� ������: "<<inf.model;
	getch();
	
	//���� ������� ������
	int fl;
	float size1;
	size1=0;
	fl=1;
	system("cls");
	while (true)
	{
	cout<< endl<< "������� ������ ������: "; 
    while (!(cin >> size1) || (cin.peek() != '\n'))
    {	
    cin.clear();
    while (cin.get() != '\n');
    cout << "������� ������ ����� (�������� 3-12)" << endl;			
    }
	if(size1>=3 && size1<=12) break;  
	}
    inf.size=size1;
    cout<<endl<<"��������� ������: " << inf.size;
    getch();
	
	
	//���� ������� �������
	system("cls");
	int battery;
	while (true)
	{
	cout<< endl<< "������� ������� �������: "; 
    while (!(cin >> battery) || (cin.peek() != '\n'))
    {
    cin.clear();
    while (cin.get() != '\n');
    cout << "������� ������ ����� (�������� 1000-4000 ��)" << endl;			
    }
	if(battery>=1000 && battery<=4000) break;  
	}
    inf.battery=battery;
    cout<<endl<<"��������� ������� �������: " << inf.battery;
    getch();
	
	
	//����� ������
	system("cls");
	int time;
	time = inf.battery/300;
	inf.time = time;
	cout<<endl<<"����� ������ �������(�): "<<inf.time;
	getch();
	
	
	//����
	system("cls");
	int prise;
	prise = 2000;
	cout<<endl<<"���� ���������: " <<prise;
	if (inf.size >= 3 && inf.size<= 5) prise = 2000+2000*10/100;
	if (inf.size >= 5.1 && inf.size<=8) prise = 2000+2000*25/100;
	if (inf.size >= 8.1 && inf.size<= 12) prise = 2000+2000*50/100;
	cout<<endl<<"���� � ������ ���������: "<<prise;
	
    if (inf.ncountry == 2) prise = prise + 2000*3/100;
	if (inf.ncountry == 3) prise = prise + 2000*5/100;
	cout<<endl<<"���� � ������ ������: "<<prise;
	inf.prise=prise;
	getch();

	fwrite(&inf, size, 1, f);
	cout<<endl<<"���������� ����������? ";
	cin>>otw;
   }while(otw=='Y' || otw=='y');
   fclose(f);
    if((f=fopen("phone.txt", "rb"))==NULL)
   {
    cout<<endl<<"������";
    getch;
    return;
   }
 fseek(f,0,SEEK_END);//��������� � ����� �����
 long int d=ftell(f);//������ �����
 d=d/size;//��� �� ���� ���� � �����
   cout<<endl<<"������(-�) ������� ���������(-�)";
   getch();	
}




//**********************************************************




//*********************************************************
void Delete()
{
	char ans;
	do
	{
	system("cls");
    cout<<endl<<"1.�������� �� ������.";
    cout<<endl<<"2.�������� �� �����.";
    cout<<endl<<"3.�����.";
    cout<<endl<<"\n�������� �����: ";
    cin>>ans;
    if(isdigit(ans)==0) {
                       	 cout<<endl<<"�������� ������������ ������!";
    	                 getch();
	                    }
    else
    switch (ans)
    {case '1' :{Del_Num(); break;}
	 case '2' :{Del_Mar(); break;}
     case '3':cout<<endl<<"�����...";
    }
   }
 while (ans!='3');
 getch();
}


//********************************************************
void Del_Num()
{
	cout<<endl<<"�������� �� ����������� ������";
	if((f=fopen("phone.txt", "rb"))==NULL)
     {cout<<endl<<"Error";
     getch;
     return;
     }
     fseek(f,0,SEEK_END);
     long int d=ftell(f);
     d=d/size;
     if(d==0){cout<<endl<<"���� ������";
     getch();
     return;
             }
     fclose(f);
     View();
     int n_del, i;
     cout<<endl<<"������� ���������� �����: (0-�����)";
     cin>>n_del;
     if(n_del==0){cout<<endl<<"�����... ";
                  getch();
                  return;
                 }
     if((n_del<0) || (n_del>d)){cout<<endl<<"������������ ������";
                            getch();
                            return;
                               }
    f=fopen("phone.txt", "rb");
    FILE *f1;
    f1=fopen("new_phone.txt", "wb");
    for(i=1;i<=d;i++)
    {fread(&inf, size, 1, f);
     if(i!=n_del)fwrite(&inf, size, 1, f1);
    }
    fclose(f);
    fclose(f1);
    f1=fopen("new_phone.txt", "rb");
    f=fopen("phone.txt", "wb");
    for(i=1;i<=d-1;i++)
    {fread(&inf, size, 1, f1);
     fwrite(&inf, size, 1, f);
    }
    cout<<endl<<"��������� ������� � ���������� ������� "<<n_del<<" ��� �����";
    fclose(f);
    fclose(f1);
     getch();
}


//*********************************************************
void Del_Mar()
{
	cout<<endl<<"�������� �� ������";
	if((f=fopen("phone.txt", "rb"))==NULL)
     {cout<<endl<<"������";
     getch;
     return;
     }
     fseek(f,0,SEEK_END);
     long int d=ftell(f);
     d=d/size;
     if(d==0){cout<<endl<<"���� ������";
             getch();
             return;
             }
     fclose(f);
     View();
     
     
     
	 int Ifl = 0, Ifl1 = 0; 
	 string s;
	 int i;
	 while (true)
            {
                Ifl1++;
                if (Ifl == 1)
                    cout << endl << "� �������� ������ ���� �� ������ 15 ���� ";
                if (Ifl == 2)
                    cout << endl << "�������� ������ ���� ������ �� ���� ";
                Ifl = 0;
                cout << endl << "������� ����� : ";
               
                if (Ifl1 == 1)
                    cin.get();
                    getline(cin, s);      
                if (s.length() == 0)
                    Ifl = 2;
                if (s.length() > 15)
                {
                    s.resize(15);
                    Ifl = 1;
                }

                for (int i = 0; i < s.length(); i++)
                {
                    if ((iswdigit(s[i])) || PNS(s) > 0)
                        Ifl = 2;
                }
                if (Ifl == 0)
                    break;
            }      
     char line[80];
     char new_line[80] = "";
      strcpy (line, s.c_str());
     for (int i = 0; i < strlen(line); i++)
    {
        if (line[i] != ' ')
            strncat(new_line, line + i, 1);
    }
     new_line[0] = toupper(new_line[0]);  
	cout<<endl<<new_line;
	getch(); 
    FILE *f2;
    FILE *f3;
    f=fopen("phone.txt","rb");
    rewind(f);
    f2=fopen("phone2.txt","wb");
    f3=fopen("phone3.txt","wb");
    int fl,d3;
    d3=0;
	fl=0;                           
    f=fopen("phone.txt", "rb");
    for(i=1;i<=d;i++)
    {
 	fread(&inf,size,1,f)==1;
    if(strcmp(inf.marka,new_line)==0)
	                 {
	                 	fwrite(&inf,size,1,f2);
					    fl++;
                    }         
					if(strcmp(inf.marka,new_line)!=0)
	                 {
	                 	fwrite(&inf,size,1,f3);
	                    d3++;
                     }                        
     }
    
    fclose(f3);
    fclose(f2);
    fclose(f);
    if (fl==0)   {
    	         cout<<endl<<"�� ������� ����������";
	             getch();
	             return;
	             }
	f2=fopen("phone2.txt", "rb");
    fseek(f2,0,SEEK_END);
    long int d2=ftell(f2);
    d2=d2/size;
    rewind(f2);
		 setlocale(LC_CTYPE, "C");
            printf("\n��������������������������������������������������������������������������������������������������������������������������������������\xBB");

            printf("\n� N �");
            setlocale(LC_CTYPE, "Ukr");
            printf("     OC      ");
            setlocale(LC_CTYPE, "C");
            printf("�");

            setlocale(LC_CTYPE, "Ukr");
            printf("     �����    ");
            setlocale(LC_CTYPE, "C");
            printf("�");

            setlocale(LC_CTYPE, "Ukr");
            printf("     ������    ");
            setlocale(LC_CTYPE, "C");
            printf("�");

            setlocale(LC_CTYPE, "Ukr");
            printf(" ������-�������������  ");
            setlocale(LC_CTYPE, "C");
            printf("�");

            setlocale(LC_CTYPE, "Ukr");
            printf("   ������ ������  ");
            setlocale(LC_CTYPE, "C");
            printf("�");

            setlocale(LC_CTYPE, "Ukr");
            printf("  ������ ������� ");
            setlocale(LC_CTYPE, "C");
            printf("�");

            setlocale(LC_CTYPE, "Ukr");
            printf("   ����  ");
            setlocale(LC_CTYPE, "C");
            printf("�");
            
            setlocale(LC_CTYPE, "Ukr");
            printf(" ����� ������");
            setlocale(LC_CTYPE, "C");
            printf("�");

            
            printf("\n�������������������������������������������������������������������������������������������������������������������������������������͹");
            rewind(f);
            for (int i = 0; i < d2; i++)
            {
                fread(&inf, size, 1, f2);


                printf("\n�%3i�", i + 1);
                setlocale(LC_CTYPE, "Ukr");
                printf("%-13s", inf.OC);
                setlocale(LC_CTYPE, "C");
                printf("�");

                setlocale(LC_CTYPE, "Ukr");
                printf("%-14s", inf.marka);
                setlocale(LC_CTYPE, "C");
                printf("�");

              
                printf("%-15s", inf.model);
                setlocale(LC_CTYPE, "C");
                printf("�");

                setlocale(LC_CTYPE, "Ukr");
                printf("%-23s", inf.country);
                setlocale(LC_CTYPE, "C");
                printf("�");

                setlocale(LC_CTYPE, "Ukr");
                printf("%-18.1f", inf.size);
                setlocale(LC_CTYPE, "C");
                printf("�");

                setlocale(LC_CTYPE, "Ukr");
                printf("%-17i", inf.battery);
                setlocale(LC_CTYPE, "C");
                printf("�");

                setlocale(LC_CTYPE, "Ukr");
                printf("%-9i", inf.prise);
                setlocale(LC_CTYPE, "C");
                printf("�");  
				
				setlocale(LC_CTYPE, "Ukr");
                printf("%-13i", inf.time);
                setlocale(LC_CTYPE, "C");
                printf("�");        
			}
				printf("\n��������������������������������������������������������������������������������������������������������������������������������������\xBC");
            setlocale(LC_ALL, "Russian");         
     fclose(f2);  
	 
	rewind(f2);
    rewind(f3); 
	          
	if (fl==1)  {
                  f=fopen("phone.txt","wb");
                  f2=fopen("phone2.txt","wb");
                  f3=fopen("phone3.txt","rb");
                  for(int u=1; u<=d3;u++)
                {
                  fread(&inf, size, 1, f3);
    	          fwrite(&inf, size, 1, f);
                }
                  fclose(f2);
		          fclose(f);
		          fclose(f3);
	              cout<<endl<<"������� �������";
                  getch();
	              return; 
	              }
				    
	if (fl>1){
		           
                  int del;
				  del=0;		
		          cout<<endl<<"������� ��� ����������� ������ (1) ��� ������ ���� (2)";
		          cin>>del;
		          
				  if (del==1)
				  {
				     f=fopen("phone.txt","wb");
                     f2=fopen("phone2.txt","wb");
                     f3=fopen("phone3.txt","rb");
                     for(i=1; i<=d3;i++)
                  {
                     fread(&inf, size, 1, f3);
    	             fwrite(&inf, size, 1, f);
                  }
                     fclose(f2);
		             fclose(f);
	                 fclose(f3);
	                 cout<<endl<<"������� �������";
                     getch();
	                 return; 
	              }
	              
	              if (del==2)
				  {
				   
                   int numb;
                   
                   metka:
                   cout<<endl<<"�������� ���������� ����� 1 �� "<<d2<<": ";
	               cin>>numb;
	               if(numb>d2||numb<=0) {
		           cout<<endl<<"�� ������� ����������";
		           goto metka;
			                           }
			                           
			       f2=fopen("phone2.txt","rb");
                   fseek(f3,0,SEEK_END);
	               f3=fopen("phone3.txt","ab");
		           for(i=1;i<=d2;i++)
		           {
			       fread(&inf,size,1,f2);
			       if(numb!=i)
			       {
			       d3++;	
			       fwrite(&inf,size,1,f3);
			       }
		           }
		           fclose(f2);
		           fclose(f3);
		           f=fopen("phone.txt","wb");
                   f3=fopen("phone3.txt","rb");
                   for(i=1; i<=d3;i++)
                   {
                   fread(&inf, size, 1, f3);
    	           fwrite(&inf, size, 1, f);
                   }
		           fclose(f);
		           fclose(f3);
                   cout<<endl<<"������� �������";
                   getch();
				   return;     
				  } 
	    }
	
}

//*********************************************************
void Sort()
{
	system("cls");
	cout<<endl<<"���������� ������� ��� �������.";
	getch();
		char ans;
	
	do{
    cout<<endl<<"\n����:\n";
    cout<<endl<<"1.���������� �� ������.";
    cout<<endl<<"2.���������� �� ����������.";
    cout<<endl<<"3.�����.";
    cout<<endl<<"\n�������� ����� ����: ";
    cin>>ans;

    if(isdigit(ans)==0)
    {cout<<endl<<"����������� ������!";
   
	} 
    switch (ans)
    {
	 case '1' :{SortByName();
	 			system("cls"); 
	 			break;}
     case '2' :{SortByNumber();
	 			system("cls"); 
				 break;}
     case '3' :{cout<<endl<<"�����";
	           }
    }
   }
   while (ans!='3');
   getch();

}


//**********************************************
 void SortByName()
 {
  	system("cls");
	cout<<endl<<"���������� �� ������";
	if((f = fopen("phone.txt", "rb")) == NULL)
   		{
		   cout << endl << "������";
    	   getch;
    	   return;
  		 }
    fseek(f, 0, SEEK_END);
    long int d = ftell(f);// ���-�� ���� � �����
    d = d/size;//���-�� ���� � �����
    if(d == 0)
	        {
			   cout << endl << "������";
               getch;
               return;
           }
    else
    {
    	f = fopen("phone.txt", "r + b");
    	PHONE inf[2], temp;
    	s:
      for(int i=0;i<d;i++)
      {
        fseek(f,i*size,SEEK_SET);
        fread(&inf,size,2,f);
        if(strcmp(inf[0].model, inf[1].model) > 0)
        {
          temp=inf[0];
          inf[0]=inf[1];
          inf[1]=temp;
          fseek(f,i*size,SEEK_SET);
          fwrite(&inf,size,2,f);
          goto s;
        }
      }
    	
    	
    }
fclose(f);
  
 View();
  
	
	getch();
	
}

//*********************************************************
void Edit()
{
	system("cls");
	cout<<endl<<"�������������� �������.";
	getch();
}

//*********************************************************
void SortByNumber()
{
	cout<<endl<<"���������� �� ����:";
 if((f=fopen("phone.txt", "rb"))==NULL)
    {cout<<endl<<"������!";
     getch();
     return;
    }
    fseek(f, 0, SEEK_END);
    long int d=ftell(f);
    d=d/size;
    if (d==0){cout<<endl<<"���� ������";
              getch();
              return;
             }
    
//int rab;
f=fopen("phone.txt","r+b");
   PHONE inf[2], rab;
    s:
      for(int i=0;i<d;i++)
      {
        fseek(f,i*size,SEEK_SET);
        fread(&inf,size,2,f);
        if(inf[0].prise<inf[1].prise)
        {
          rab=inf[0];
          inf[0]=inf[1];
          inf[1]=rab;
          fseek(f,i*size,SEEK_SET);
          fwrite(&inf,size,2,f);
          goto s;
        }
      }
      fclose(f);
  
 View();
  
	
	getch();
	
}


void Service()
{
	system("cls");
	cout<<endl<<"������������ �������:\n ";
	char way;
 do{
    View();
    cout<<endl<<"\n����:\n";
    cout<<endl<<"1.���������� ����������� ��������� ��������� �� ��.";
    cout<<endl<<"2.����� ���������� ������-������������� �� ��������� ��.";
    cout<<endl<<"3.����� ��������� � ����� ������� �������� �������.";
    cout<<endl<<"4.������, ��� ���������� ����� ������� ��������.";
    cout<<endl<<"5.����� ����� ������� �� ������� ��� ��������� ����� � ��������� ������.";
    cout<<endl<<"6.�����.";
    cout<<endl<<"\n�������� ����� ����: ";
    cin>>way;
    if(isdigit(way)==0) {
    	                 cout<<endl<<"�������� ������������ ������!";
    	                 getch();
	                    }
    else
    switch (way)
    {case '1' :{Percent(); break;}
     case '2' :{Popular(); break;}
     case '3' :{Capacity(); break;}
     case '4' :{Country(); break;}
     case '5' :{Common(); break;}
     case '6':cout<<endl<<"�����!";
    }
   }
 while (way!='6');
}

//*********************************************************
void Percent()
{
	system("cls");
	cout<<endl<<"\n���������� ����������� ��������� ��������� �� ��.";
	
	if ((f=fopen("phone.txt","ab"))==NULL)
	{
		cout<<endl<<"������!";
		getch();
		return;
	}
	fseek(f, 0, SEEK_END);
    long int d=ftell(f);
    d=d/size;
    if (d==0){cout<<endl<<"���� ������";
              getch();
              return;
             }
    fclose(f);         
        
     char android[25];
     char ios[25];
     char wp[25];
     strcpy (android, "Android");
     strcpy (ios, "IOS");
     strcpy (wp, "Windows-Phone");
     int fl,i,k_ad,k_is,k_wp;
	 fl=0; 
	 k_ad=0;
	 k_is=0;
	 k_wp=0;                          
     f=fopen("phone.txt", "rb");
     for(i=1;i<=d;i++)
     {fread(&inf, size, 1, f);
     if(strcmp( inf.OC, android )==0) { 
                                        k_ad++;
                                      }  
	 if(strcmp( inf.OC, ios )==0)     { 
                                        k_is++;
                                      }   	
	 if(strcmp( inf.OC, wp )==0)      { 
                                        k_wp++;
                                      }   								  							   
    }
    
    
    int ad,is,wp1;
    ad=0;
    is=0;
    wp1=0;
    
    ad=100*k_ad/d;
    is=100*k_is/d;
    wp1=100*k_wp/d;
    fclose(f);
    
    setlocale(LC_CTYPE, "C");
        printf("\n�������������������������������������������\xBB");

        printf("\n� N �");
        setlocale(LC_CTYPE, "Russian");
        printf("      ��       ");
        setlocale(LC_CTYPE, "C");
        printf("�");

        setlocale(LC_CTYPE, "Russian");
        printf(" �������� ");
        setlocale(LC_CTYPE, "C");
        printf("�");

        setlocale(LC_CTYPE, "Russian");
        printf(" ����������");
        setlocale(LC_CTYPE, "C");
        printf("�");

        printf("\n������������������������������������������͹");
        setlocale(LC_CTYPE, "Russian");

        setlocale(LC_CTYPE, "C");

        printf("\n�%3i�", 1);
        setlocale(LC_CTYPE, "Russian");
        printf("%-15s", android);
        setlocale(LC_CTYPE, "C");
        printf("�");

        setlocale(LC_CTYPE, "Russian");
        printf("%-10.i", ad);
        setlocale(LC_CTYPE, "C");
        printf("�");

        setlocale(LC_CTYPE, "Russian");
        printf("%-11.i", k_ad);
        setlocale(LC_CTYPE, "C");
        printf("�");

        setlocale(LC_CTYPE, "C");

        printf("\n�%3i�", 2);
        setlocale(LC_CTYPE, "Russian");
        printf("%-15s", ios);
        setlocale(LC_CTYPE, "C");
        printf("�");

        setlocale(LC_CTYPE, "Russian");
        printf("%-10.i", is);
        setlocale(LC_CTYPE, "C");
        printf("�");

        setlocale(LC_CTYPE, "Russian");
        printf("%-11.i", k_is);
        setlocale(LC_CTYPE, "C");
        printf("�");


        setlocale(LC_CTYPE, "C");

        printf("\n�%3i�", 3);
        setlocale(LC_CTYPE, "Russian");
        printf("%-15s", wp);
        setlocale(LC_CTYPE, "C");
        printf("�");

        setlocale(LC_CTYPE, "Russian");
        printf("%-10.i", wp1);
        setlocale(LC_CTYPE, "C");
        printf("�");

        setlocale(LC_CTYPE, "Russian");
        printf("%-11.i", k_wp);
        setlocale(LC_CTYPE, "C");
        printf("�");
        
        printf("\n�������������������������������������������\xBC");
        setlocale(LC_CTYPE, "Russian");
    
    getch();
    return;
}

//*********************************************************
void Popular()
{
	system("cls");
	View();
	cout<<endl<<"����� ���������� ������-������������� �� ��������� ��.";
	getch();
		if((f=fopen("phone.txt", "rb"))==NULL)
    {cout<<endl<<"������";
     getch();
     return;
    }
    fseek(f, 0, SEEK_END);
    long int d=ftell(f);
    d=d/size;
    if (d==0){cout<<endl<<"���� ������";
              getch();
              return;
             }
    int n_c,n_u,n_k,n_j;
	n_c=0;    
	n_k=0;
	n_u=0;
	n_j=0; 
	char ans;
	char android[10];
	char IOS[5];
	char WindowsPhone[15];
	
         metka:
		system("cls");
		cout<<endl<<"������������ �������:\n ";
		cout<<endl<<"1-Android";
		cout<<endl<<"2-IOS";
		cout<<endl<<"3-Windows-Phone";
		cout<<endl<<"\n�������� �� �� ������������: ";
		cin>>ans;
		if(isdigit(ans)==0) {
                       	     cout<<endl<<"�������� ������������ ������!";
    	                     getch();
    	                     goto metka;
	                        }
        else
        {switch (ans)
        {
		 case '1' :{strcpy(android,"Android"); break;}
	     case '2' :{strcpy(IOS,"IOS"); break;}
         case '3' :{strcpy(WindowsPhone,"Windows-Phone"); break;}
         default: goto metka;
        }
		if(ans=='1') {  
		                char china[25];
                        char usa[25];
                        char japan[25];
                        char korea[25];
                        	n_c=0;    
                        	n_k=0;
	                        n_u=0;
	                        n_j=0;
                        strcpy (china, "China");
                        strcpy (usa, "USA");
                        strcpy (japan, "Japan");
	                    strcpy (korea, "Korea");	
		              	rewind(f);	 
	                    for(int i=1;i<=d;i++)
                        {fread(&inf, size, 1, f);
                         if(strcmp( inf.OC, android )==0) { 
                                         if(strcmp( inf.country, china )==0) n_c++;
                                         if(strcmp( inf.country, usa )==0) n_u++;
                                         if(strcmp( inf.country, korea )==0) n_k++;
                                         if(strcmp( inf.country, japan )==0) n_j++;
                                                          }                      
	                    } 
	                   

	                       setlocale(LC_CTYPE, "C");
        printf("\n�������������������������������������������\xBB");

        printf("\n� N �");
        setlocale(LC_CTYPE, "Russian");
        printf("      ��       ");
        setlocale(LC_CTYPE, "C");
        printf("�");

        setlocale(LC_CTYPE, "Russian");
        printf("  ���-��  ");
        setlocale(LC_CTYPE, "C");
        printf("�");

        setlocale(LC_CTYPE, "Russian");
        printf("   ������  ");
        setlocale(LC_CTYPE, "C");
        printf("�");
        
        
        
        
        printf("\n������������������������������������������͹");
        setlocale(LC_CTYPE, "Russian");

        setlocale(LC_CTYPE, "C");

        printf("\n�%3i�", 1);
        setlocale(LC_CTYPE, "Russian");
        printf("%-15s", android);
        setlocale(LC_CTYPE, "C");
        printf("�");

        setlocale(LC_CTYPE, "Russian");
        printf("%-10.i", n_c);
        setlocale(LC_CTYPE, "C");
        printf("�");

        setlocale(LC_CTYPE, "Russian");
        printf("%-11s", china);
        setlocale(LC_CTYPE, "C");
        printf("�");

        setlocale(LC_CTYPE, "C");

        printf("\n�%3i�", 2);
        setlocale(LC_CTYPE, "Russian");
        printf("%-15s", android);
        setlocale(LC_CTYPE, "C");
        printf("�");

        setlocale(LC_CTYPE, "Russian");
        printf("%-10.i", n_u);
        setlocale(LC_CTYPE, "C");
        printf("�");

        setlocale(LC_CTYPE, "Russian");
        printf("%-11s", usa);
        setlocale(LC_CTYPE, "C");
        printf("�");


        setlocale(LC_CTYPE, "C");

        printf("\n�%3i�", 3);
        setlocale(LC_CTYPE, "Russian");
        printf("%-15s", android);
        setlocale(LC_CTYPE, "C");
        printf("�");

        setlocale(LC_CTYPE, "Russian");
        printf("%-10.i", n_j);
        setlocale(LC_CTYPE, "C");
        printf("�");

        setlocale(LC_CTYPE, "Russian");
        printf("%-11s", japan);
        setlocale(LC_CTYPE, "C");
        printf("�");
        
        
         setlocale(LC_CTYPE, "C");

        printf("\n�%3i�", 4);
        setlocale(LC_CTYPE, "Russian");
        printf("%-15s", android);
        setlocale(LC_CTYPE, "C");
        printf("�");

        setlocale(LC_CTYPE, "Russian");
        printf("%-10.i", n_k);
        setlocale(LC_CTYPE, "C");
        printf("�");

        setlocale(LC_CTYPE, "Russian");
        printf("%-11s", korea);
        setlocale(LC_CTYPE, "C");
        printf("�");
        
        printf("\n�������������������������������������������\xBC");
        setlocale(LC_CTYPE, "Russian"); 
	                  }
	                  
	    		if(ans=='2') {  
		                char china[25];
                        char usa[25];
                        char japan[25];
                        char korea[25];
                        	n_c=0;    
                        	n_k=0;
	                        n_u=0;
	                        n_j=0;
                        strcpy (china, "China");
                        strcpy (usa, "USA");
                        strcpy (japan, "Japan");
	                    strcpy (korea, "Korea");	
		              	rewind(f);	 
	                    for(int i=1;i<=d;i++)
                        {fread(&inf, size, 1, f);
                         if(strcmp( inf.OC, IOS )==0) { 
                                         if(strcmp( inf.country, china )==0) n_c++;
                                         if(strcmp( inf.country, usa )==0) n_u++;
                                         if(strcmp( inf.country, korea )==0) n_k++;
                                         if(strcmp( inf.country, japan )==0) n_j++;
                                                          }                      
	                    } 
	                  
	                       setlocale(LC_CTYPE, "C");
        printf("\n�������������������������������������������\xBB");

        printf("\n� N �");
        setlocale(LC_CTYPE, "Russian");
        printf("      ��       ");
        setlocale(LC_CTYPE, "C");
        printf("�");

        setlocale(LC_CTYPE, "Russian");
        printf("  ���-��  ");
        setlocale(LC_CTYPE, "C");
        printf("�");

        setlocale(LC_CTYPE, "Russian");
        printf("   ������  ");
        setlocale(LC_CTYPE, "C");
        printf("�");
        
        
        
        
        printf("\n������������������������������������������͹");
        setlocale(LC_CTYPE, "Russian");

        setlocale(LC_CTYPE, "C");

        printf("\n�%3i�", 1);
        setlocale(LC_CTYPE, "Russian");
        printf("%-15s", IOS);
        setlocale(LC_CTYPE, "C");
        printf("�");

        setlocale(LC_CTYPE, "Russian");
        printf("%-10.i", n_c);
        setlocale(LC_CTYPE, "C");
        printf("�");

        setlocale(LC_CTYPE, "Russian");
        printf("%-11s", china);
        setlocale(LC_CTYPE, "C");
        printf("�");

        setlocale(LC_CTYPE, "C");

        printf("\n�%3i�", 2);
        setlocale(LC_CTYPE, "Russian");
        printf("%-15s", IOS);
        setlocale(LC_CTYPE, "C");
        printf("�");

        setlocale(LC_CTYPE, "Russian");
        printf("%-10.i", n_u);
        setlocale(LC_CTYPE, "C");
        printf("�");

        setlocale(LC_CTYPE, "Russian");
        printf("%-11s", usa);
        setlocale(LC_CTYPE, "C");
        printf("�");


        setlocale(LC_CTYPE, "C");

        printf("\n�%3i�", 3);
        setlocale(LC_CTYPE, "Russian");
        printf("%-15s", IOS);
        setlocale(LC_CTYPE, "C");
        printf("�");

        setlocale(LC_CTYPE, "Russian");
        printf("%-10.i", n_j);
        setlocale(LC_CTYPE, "C");
        printf("�");

        setlocale(LC_CTYPE, "Russian");
        printf("%-11s", japan);
        setlocale(LC_CTYPE, "C");
        printf("�");
        
        
         setlocale(LC_CTYPE, "C");

        printf("\n�%3i�", 4);
        setlocale(LC_CTYPE, "Russian");
        printf("%-15s", IOS);
        setlocale(LC_CTYPE, "C");
        printf("�");

        setlocale(LC_CTYPE, "Russian");
        printf("%-10.i", n_k);
        setlocale(LC_CTYPE, "C");
        printf("�");

        setlocale(LC_CTYPE, "Russian");
        printf("%-11s", korea);
        setlocale(LC_CTYPE, "C");
        printf("�");
        
        printf("\n�������������������������������������������\xBC");
        setlocale(LC_CTYPE, "Russian"); 
	                  }	
					  
		
			if(ans=='3') {  
		                char china[25];
                        char usa[25];
                        char japan[25];
                        char korea[25];
                        	n_c=0;    
                        	n_k=0;
	                        n_u=0;
	                        n_j=0;
                        strcpy (china, "China");
                        strcpy (usa, "USA");
                        strcpy (japan, "Japan");
	                    strcpy (korea, "Korea");	
		              	rewind(f);	 
	                    for(int i=1;i<=d;i++)
                        {fread(&inf, size, 1, f);
                         if(strcmp( inf.OC, WindowsPhone )==0) { 
                                         if(strcmp( inf.country, china )==0) n_c++;
                                         if(strcmp( inf.country, usa )==0) n_u++;
                                         if(strcmp( inf.country, korea )==0) n_k++;
                                         if(strcmp( inf.country, japan )==0) n_j++;
                                                          }                      
	                    } 
	                    

	                       setlocale(LC_CTYPE, "C");
        printf("\n�������������������������������������������\xBB");

        printf("\n� N �");
        setlocale(LC_CTYPE, "Russian");
        printf("      ��       ");
        setlocale(LC_CTYPE, "C");
        printf("�");

        setlocale(LC_CTYPE, "Russian");
        printf("  ���-��  ");
        setlocale(LC_CTYPE, "C");
        printf("�");

        setlocale(LC_CTYPE, "Russian");
        printf("   ������  ");
        setlocale(LC_CTYPE, "C");
        printf("�");
        
        
        
        
        printf("\n������������������������������������������͹");
        setlocale(LC_CTYPE, "Russian");

        setlocale(LC_CTYPE, "C");

        printf("\n�%3i�", 1);
        setlocale(LC_CTYPE, "Russian");
        printf("%-15s", WindowsPhone);
        setlocale(LC_CTYPE, "C");
        printf("�");

        setlocale(LC_CTYPE, "Russian");
        printf("%-10.i", n_c);
        setlocale(LC_CTYPE, "C");
        printf("�");

        setlocale(LC_CTYPE, "Russian");
        printf("%-11s", china);
        setlocale(LC_CTYPE, "C");
        printf("�");

        setlocale(LC_CTYPE, "C");

        printf("\n�%3i�", 2);
        setlocale(LC_CTYPE, "Russian");
        printf("%-15s", WindowsPhone);
        setlocale(LC_CTYPE, "C");
        printf("�");

        setlocale(LC_CTYPE, "Russian");
        printf("%-10.i", n_u);
        setlocale(LC_CTYPE, "C");
        printf("�");

        setlocale(LC_CTYPE, "Russian");
        printf("%-11s", usa);
        setlocale(LC_CTYPE, "C");
        printf("�");


        setlocale(LC_CTYPE, "C");

        printf("\n�%3i�", 3);
        setlocale(LC_CTYPE, "Russian");
        printf("%-15s", WindowsPhone);
        setlocale(LC_CTYPE, "C");
        printf("�");

        setlocale(LC_CTYPE, "Russian");
        printf("%-10.i", n_j);
        setlocale(LC_CTYPE, "C");
        printf("�");

        setlocale(LC_CTYPE, "Russian");
        printf("%-11s", japan);
        setlocale(LC_CTYPE, "C");
        printf("�");
        
        
         setlocale(LC_CTYPE, "C");

        printf("\n�%3i�", 4);
        setlocale(LC_CTYPE, "Russian");
        printf("%-15s", WindowsPhone);
        setlocale(LC_CTYPE, "C");
        printf("�");

        setlocale(LC_CTYPE, "Russian");
        printf("%-10.i", n_k);
        setlocale(LC_CTYPE, "C");
        printf("�");

        setlocale(LC_CTYPE, "Russian");
        printf("%-11s", korea);
        setlocale(LC_CTYPE, "C");
        printf("�");
        
        printf("\n�������������������������������������������\xBC");
        setlocale(LC_CTYPE, "Russian"); 
	                  }
					  				  	
		}
	 getch();
	 return;
	 
}
	 

//*********************************************************
void Capacity()
{
	system("cls");
	cout<<endl<<"����� ��������� � ����� ������� �������� �������.";
	getch();
	
    if((f=fopen("phone.txt", "rb"))==NULL)
    {cout<<endl<<"������";
     getch();
     return;
    }
    fseek(f, 0, SEEK_END);
    long int d=ftell(f);
    d=d/size;
    if (d==0){cout<<endl<<"���� ������";
              getch();
              return;
             }
    int max,i; 
    rewind (f);
    int *mas = new int [d];
    for ( i=0;i<d;i++)
    {
	fread(&inf,size,1,f);
	mas [i] = inf.battery;
    }
    max = 0;
    for (int i = 0; i < d; i++)
        {
            if (mas[i] > max)           
                max = mas[i];
    
        }
    rewind (f);
   for ( i=0;i<d;i++)
  {fread(&inf,size,1,f);
   if (max==inf.battery)
   {
   	
   	setlocale(LC_CTYPE, "C");



            printf("\n��������������������������������������������������������������������������������������������������������������������������������������\xBB");

            printf("\n� N �");
            setlocale(LC_CTYPE, "Ukr");
            printf("     OC      ");
            setlocale(LC_CTYPE, "C");
            printf("�");

            setlocale(LC_CTYPE, "Ukr");
            printf("     �����    ");
            setlocale(LC_CTYPE, "C");
            printf("�");

            setlocale(LC_CTYPE, "Ukr");
            printf("     ������    ");
            setlocale(LC_CTYPE, "C");
            printf("�");

            setlocale(LC_CTYPE, "Ukr");
            printf(" ������-�������������  ");
            setlocale(LC_CTYPE, "C");
            printf("�");

            setlocale(LC_CTYPE, "Ukr");
            printf("   ������ ������  ");
            setlocale(LC_CTYPE, "C");
            printf("�");

            setlocale(LC_CTYPE, "Ukr");
            printf("  ������ ������� ");
            setlocale(LC_CTYPE, "C");
            printf("�");

            setlocale(LC_CTYPE, "Ukr");
            printf("   ����  ");
            setlocale(LC_CTYPE, "C");
            printf("�");
            
            setlocale(LC_CTYPE, "Ukr");
            printf(" ����� ������");
            setlocale(LC_CTYPE, "C");
            printf("�");

            
            printf("\n�������������������������������������������������������������������������������������������������������������������������������������͹");

                printf("\n�%3i�", i + 1);
                setlocale(LC_CTYPE, "Ukr");
                printf("%-13s", inf.OC);
                setlocale(LC_CTYPE, "C");
                printf("�");

                setlocale(LC_CTYPE, "Ukr");
                printf("%-14s", inf.marka);
                setlocale(LC_CTYPE, "C");
                printf("�");

              
                printf("%-15s", inf.model);
                setlocale(LC_CTYPE, "C");
                printf("�");

                setlocale(LC_CTYPE, "Ukr");
                printf("%-23s", inf.country);
                setlocale(LC_CTYPE, "C");
                printf("�");

                setlocale(LC_CTYPE, "Ukr");
                printf("%-18.1f", inf.size);
                setlocale(LC_CTYPE, "C");
                printf("�");

                setlocale(LC_CTYPE, "Ukr");
                printf("%-17i", inf.battery);
                setlocale(LC_CTYPE, "C");
                printf("�");

                setlocale(LC_CTYPE, "Ukr");
                printf("%-9i", inf.prise);
                setlocale(LC_CTYPE, "C");
                printf("�");  
				
				setlocale(LC_CTYPE, "Ukr");
                printf("%-13i", inf.time);
                setlocale(LC_CTYPE, "C");
                printf("�");        
			
				printf("\n��������������������������������������������������������������������������������������������������������������������������������������\xBC");
            setlocale(LC_ALL, "Russian");
   }
  }
  getch();					 
}

	
	
//*********************************************************
void Country()
{
		system("cls");
	
	cout<<endl<<"������, ��� ���������� ����� ������� ��������";
	getch();
	
    if((f=fopen("phone.txt", "rb"))==NULL)
    {cout<<endl<<"������!";
     getch();
     return;
    }
    fseek(f, 0, SEEK_END);
    long int d=ftell(f);
    d=d/size;
    if (d==0){cout<<endl<<"���� ������";
              getch();
              return;
             }
    int max,i; 
    rewind (f);
    int *mas = new int [d];
    for ( i=0;i<d;i++)
    {
	fread(&inf,size,1,f);
	mas [i] = inf.prise;
    }
    max=0;
    for (int i = 0; i < d; i++)
        {
            if (mas[i] > max)           
                max = mas[i];
        }
  
   rewind(f);
  for (i=0;i<d;i++)
  {fread(&inf,size,1,f);
   if (max==inf.prise)
   {
   	
		 setlocale(LC_CTYPE, "C");



            printf("\n��������������������������������������������������������������������������������������������������������������������������������������\xBB");

            printf("\n� N �");
            setlocale(LC_CTYPE, "Ukr");
            printf("     OC      ");
            setlocale(LC_CTYPE, "C");
            printf("�");

            setlocale(LC_CTYPE, "Ukr");
            printf("     �����    ");
            setlocale(LC_CTYPE, "C");
            printf("�");

            setlocale(LC_CTYPE, "Ukr");
            printf("     ������    ");
            setlocale(LC_CTYPE, "C");
            printf("�");

            setlocale(LC_CTYPE, "Ukr");
            printf(" ������-�������������  ");
            setlocale(LC_CTYPE, "C");
            printf("�");

            setlocale(LC_CTYPE, "Ukr");
            printf("   ������ ������  ");
            setlocale(LC_CTYPE, "C");
            printf("�");

            setlocale(LC_CTYPE, "Ukr");
            printf("  ������ ������� ");
            setlocale(LC_CTYPE, "C");
            printf("�");

            setlocale(LC_CTYPE, "Ukr");
            printf("   ����  ");
            setlocale(LC_CTYPE, "C");
            printf("�");
            
            setlocale(LC_CTYPE, "Ukr");
            printf(" ����� ������");
            setlocale(LC_CTYPE, "C");
            printf("�");

            
            printf("\n�������������������������������������������������������������������������������������������������������������������������������������͹");

                printf("\n�%3i�", i + 1);
                setlocale(LC_CTYPE, "Ukr");
                printf("%-13s", inf.OC);
                setlocale(LC_CTYPE, "C");
                printf("�");

                setlocale(LC_CTYPE, "Ukr");
                printf("%-14s", inf.marka);
                setlocale(LC_CTYPE, "C");
                printf("�");

              
                printf("%-15s", inf.model);
                setlocale(LC_CTYPE, "C");
                printf("�");

                setlocale(LC_CTYPE, "Ukr");
                printf("%-23s", inf.country);
                setlocale(LC_CTYPE, "C");
                printf("�");

                setlocale(LC_CTYPE, "Ukr");
                printf("%-18.1f", inf.size);
                setlocale(LC_CTYPE, "C");
                printf("�");

                setlocale(LC_CTYPE, "Ukr");
                printf("%-17i", inf.battery);
                setlocale(LC_CTYPE, "C");
                printf("�");

                setlocale(LC_CTYPE, "Ukr");
                printf("%-9i", inf.prise);
                setlocale(LC_CTYPE, "C");
                printf("�");  
				
				setlocale(LC_CTYPE, "Ukr");
                printf("%-13i", inf.time);
                setlocale(LC_CTYPE, "C");
                printf("�");        
			
				printf("\n��������������������������������������������������������������������������������������������������������������������������������������\xBC");
            setlocale(LC_ALL, "Russian");
   }
  }
  getch();
}

//*********************************************************
void Common()
{
	system("cls");
	View();
	int Ifl = 0, Ifl1 = 0; 
	string s;
	int i;
	while (true)
            {
                Ifl1++;
                if (Ifl == 1)
                    cout << endl << "� �������� ������ ���� �� ������ 15 ���� ";
                if (Ifl == 2)
                    cout << endl << "�������� ������ ���� ������ �� ���� ";
                Ifl = 0;
                cout << endl << "������� �����: ";
               
                if (Ifl1 == 1)
                    cin.get();
                    getline(cin, s);      
                if (s.length() == 0)
                    Ifl = 2;
                if (s.length() > 15)
                {
                    s.resize(15);
                    Ifl = 1;
                }

                for (int i = 0; i < s.length(); i++)
                {
                    if ((iswdigit(s[i])) || PNS(s) > 0)
                        Ifl = 2;
                }
                if (Ifl == 0)
                    break;
            }
    
     char line[80];
     char new_line[80] = "";
     strcpy (line, s.c_str());
    for (int i = 0; i < strlen(line); i++)
    {
        if (line[i] != ' ')
            strncat(new_line, line + i, 1);
    }
     new_line[0] = toupper(new_line[0]);     
	cout<<endl<<"��������� �����: "<<new_line;
	getch();				         
	
	//���� ������ ��������
		//system("cls");
	Ifl=0;
	Ifl1=0;
    string s2;
	while (true)
            {
                Ifl1++;
                if (Ifl == 1)
                    cout << endl << "� �������� ������ ���� �� ������ 15 ���� ";
                if (Ifl == 2)
                    cout << endl << "� �������� ����� ���� ������ ����� � ����� ";
                Ifl = 0;
                cout << endl << "������� ������: ";
                if (Ifl1 == 1)
                    getch();
                    getline(cin, s2);
                if (s2.length() == 0)
                    Ifl = 2;
                if (s2.length() > 15)
                {
                    s2.resize(15);
                    Ifl = 1;
                }

                for (int i = 0; i < s2.length(); i++)
                {
                     if (PNS(s2) > 0)
                        Ifl = 2;
                }
                if (Ifl == 0)
                    break;
            }
	 
                for (i=0; i<s2.length(); i++)
                      {
    	                if(s2[0]==' ' || s2[i]==' ' && s2[i+1]==' ')
                   	  {
    		            s2.erase(i, 1);
    		            i--;
	                  }
                      }
    s2[0] = toupper(s2[0]);                   
    char line1[80];                  
    strcpy (line1, s2.c_str());
	cout<<endl<<"������: "<<line1;                   
	getch();
	if((f=fopen("phone.txt", "rb"))==NULL)
    {cout<<endl<<"������";
     getch();
     return;
    }
    fseek(f, 0, SEEK_END);
    long int d=ftell(f);
    d=d/size;
    if (d==0){cout<<endl<<"���� ������";
              getch();
              return;
             }
    int k,fl;
    fl=0;
	k=0;
//	strcpy (line, s.c_str());
	rewind(f);        
    for(i=1;i<=d;i++)
    {fread(&inf, size, 1, f);
    if(strcmp( inf.marka, new_line )==0 && strcmp( inf.model, line1 )==0) { 
                                           k++;
                                         }
    }
	if ( k == 0) {
	          cout<<endl<<"�� ������� ����� ����������, ��������� �������";
	          getch();
	          return;
			 }
	if (k > 0) {
		         setlocale(LC_CTYPE, "C");
        printf("\n�������������������������������������������\xBB");

        printf("\n� N �");
        setlocale(LC_CTYPE, "Russian");
        printf("      �����    ");
        setlocale(LC_CTYPE, "C");
        printf("�");

        setlocale(LC_CTYPE, "Russian");
        printf(" ������   ");
        setlocale(LC_CTYPE, "C");
        printf("�");

        setlocale(LC_CTYPE, "Russian");
        printf(" ����������");
        setlocale(LC_CTYPE, "C");
        printf("�");

        printf("\n������������������������������������������͹");
        setlocale(LC_CTYPE, "Russian");

        setlocale(LC_CTYPE, "C");

        printf("\n�%3i�", 1);
        setlocale(LC_CTYPE, "Russian");
        printf("%-15s", new_line);
        setlocale(LC_CTYPE, "C");
        printf("�");

        setlocale(LC_CTYPE, "Russian");
        printf("%-10s", line1);
        setlocale(LC_CTYPE, "C");
        printf("�");

        setlocale(LC_CTYPE, "Russian");
        printf("%-11.i", k);
        setlocale(LC_CTYPE, "C");
        printf("�");
        printf("\n�������������������������������������������\xBC");
        setlocale(LC_CTYPE, "Russian");
	           }
	           
	fclose(f);
	getch();		   		          
    return;
}

int PNS(string proverka)
{
    int  fl = 0, dlina;
    for (int i = 0; i < proverka.length(); i++)
    {
        if (
            proverka[i] == '*' ||
            proverka[i] == '/' ||
            proverka[i] == '-' ||
            proverka[i] == '+' ||
            proverka[i] == ',' ||
            proverka[i] == '.' ||
            proverka[i] == '?' ||
            proverka[i] == '!' ||
            proverka[i] == '@' ||
            proverka[i] == '#' ||
            proverka[i] == '%' ||
            proverka[i] == '$' ||
            proverka[i] == '&' ||
            proverka[i] == '^' ||
            proverka[i] == ')' ||
            proverka[i] == '(' ||
            proverka[i] == '`' ||
            proverka[i] == ':' ||
            proverka[i] == ';' ||
            proverka[i] == '=' ||
            proverka[i] == '>' ||
            proverka[i] == '<' ||
            proverka[i] == '�' ||
            proverka[i] == '?' ||
            //proverka[i] == ' ' ||
            proverka[i] == '.' ||
            proverka[i] == '"'
            )
            fl++;
    }
    return fl;
}

void Write(string masiv, char masiv1[])
{
    int i = 0;
    for (i = 0; i < masiv.length(); i++)
    {
        masiv1[i] = masiv[i];
    }
    masiv1[i] = '\0';
}
