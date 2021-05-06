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
    cout<<endl<<"ฬๅํþ:\n";
    cout<<endl<<"1.ำไเ๋ๅํ่ๅ ๔เ้๋เ.";
    cout<<endl<<"2.ฯ๐๎๑์๎๒๐ ๑๓๙ๅ๑๒โ๓þ๙่๕ ไเํํ๛๕ ๎ ๒ๅ๋ๅ๔๎ํเ๕.";
    cout<<endl<<"3.ฤ๎แเโ๋ๅํ่ๅ ํ๎โ๛๕ ไเํํ๛๕.";
    cout<<endl<<"4.ำไเ๋ๅํ่ๅ ไเํํ๛๕.";
    cout<<endl<<"5.ั๎๐๒่๐๎โ๊เ ็เ๏่๑ๅ้.";
    cout<<endl<<"6.ฮแ๑๋๓ๆ่โเํ่ๅ ็เ๏่๑ๅ้.";
    cout<<endl<<"7.ส๎ํๅ๖.";
    cout<<endl<<"\nย๛แๅ๐่๒ๅ ๏๓ํ๊๒ ์ๅํþ: ";
    cin>>ans;
    if(isdigit(ans)==0) {
                       	 cout<<endl<<"ยโๅไๅํํ๛ ํๅ๊๎๐๐ๅ๊๒ํ๛ๅ ไเํํ๛ๅ!";
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
     case '7':cout<<endl<<"ส๎ํๅ๖ ๐เแ๎๒๛";
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
     {cout<<endl<<"ฮ๘่แ๊เ";
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
      cout<<endl<<"ย๛ ๓โๅ๐ๅํ๛, ๗๒๎ ๕๎๒่๒ๅ ๓ไเ๋่๒ü ๔เ้๋? (y/n)";
      cin>>ans;
      if(isalpha(ans)==0) {
                       	 cout<<endl<<"ฤ๎๏๓๑๊เþ๒๑ÿ ๒๎๋ü๊๎ แ๓๊โ๛! (y/n)";
    	                 getch();
    	                 New();
	                      }
      if(ans=='n'){cout<<endl<<"ย๛๕๎ไ...";
                   getch();
                   return;
                   }
       else f=fopen("phone.txt", "wb");
       cout<<endl<<"ิเ้๋ ๓๑๏ๅ๘ํ๎ ๓ไเ๋ธํ";
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
    cout<<endl<<"ฮ๘่แ๊เ";
    getch();
    return;
   }
 fseek(f,0,SEEK_END);//๓๊เ็เ๒ๅ๋ü โ ๊๎ํๅ๖ ๔เ้๋เ
 long int d=ftell(f);//ไ๋่ํเÿ ๖ๅ๋เÿ
 d=d/size;//๊๎๋ โ๎ ๗ๅใ๎ ๋่แ๎ โ ๔เ้๋ๅ
 if(d==0){cout<<endl<<"ิเ้๋ ๏๓๑๒";
          getch();
          return;
         }
         cout<<endl<<"วเ๏่๑ๅ้= "<<d;
		 setlocale(LC_CTYPE, "C");



            printf("\nษอออหอออออออออออออหออออออออออออออหอออออออออออออออหอออออออออออออออออออออออหออออออออออออออออออหอออออออออออออออออหอออออออออหอออออออออออออ\xBB");

            printf("\nบ N บ");
            setlocale(LC_CTYPE, "Ukr");
            printf("     OC      ");
            setlocale(LC_CTYPE, "C");
            printf("บ");

            setlocale(LC_CTYPE, "Ukr");
            printf("     ฬเ๐๊เ    ");
            setlocale(LC_CTYPE, "C");
            printf("บ");

            setlocale(LC_CTYPE, "Ukr");
            printf("     ฬ๎ไๅ๋ü    ");
            setlocale(LC_CTYPE, "C");
            printf("บ");

            setlocale(LC_CTYPE, "Ukr");
            printf(" ั๒๐เํเ-๏๐๎่็โ๎ไ่๒ๅ๋ü  ");
            setlocale(LC_CTYPE, "C");
            printf("บ");

            setlocale(LC_CTYPE, "Ukr");
            printf("   ะเ็์ๅ๐ ý๊๐เํเ  ");
            setlocale(LC_CTYPE, "C");
            printf("บ");

            setlocale(LC_CTYPE, "Ukr");
            printf("  ะเ็์ๅ๐ แเ๒เ๐ๅ่ ");
            setlocale(LC_CTYPE, "C");
            printf("บ");

            setlocale(LC_CTYPE, "Ukr");
            printf("   ึๅํเ  ");
            setlocale(LC_CTYPE, "C");
            printf("บ");
            
            setlocale(LC_CTYPE, "Ukr");
            printf(" ย๐ๅ์ÿ ๐เแ๎๒๛");
            setlocale(LC_CTYPE, "C");
            printf("บ");

            
            printf("\nฬอออฮอออออออออออออฮออออออออออออออฮอออออออออออออออฮอออออออออออออออออออออออฮออออออออออออออออออฮอออออออออออออออออฮอออออออออฮอออออออออออออน");
            rewind(f);
            for (int i = 0; i < d; i++)
            {
                fread(&inf, size, 1, f);

                int g = 0, g1 = 0, g2 = 0;

                printf("\nบ%3iบ", i + 1);
                setlocale(LC_CTYPE, "Ukr");
                printf("%-13s", inf.OC);
                setlocale(LC_CTYPE, "C");
                printf("บ");

                setlocale(LC_CTYPE, "Ukr");
                printf("%-14s", inf.marka);
                setlocale(LC_CTYPE, "C");
                printf("บ");

              
                printf("%-15s", inf.model);
                setlocale(LC_CTYPE, "C");
                printf("บ");

                setlocale(LC_CTYPE, "Ukr");
                printf("%-23s", inf.country);
                setlocale(LC_CTYPE, "C");
                printf("บ");

                setlocale(LC_CTYPE, "Ukr");
                printf("%-18.1f", inf.size);
                setlocale(LC_CTYPE, "C");
                printf("บ");

                setlocale(LC_CTYPE, "Ukr");
                printf("%-17i", inf.battery);
                setlocale(LC_CTYPE, "C");
                printf("บ");

                setlocale(LC_CTYPE, "Ukr");
                printf("%-9i", inf.prise);
                setlocale(LC_CTYPE, "C");
                printf("บ");  
				
				setlocale(LC_CTYPE, "Ukr");
                printf("%-13i", inf.time);
                setlocale(LC_CTYPE, "C");
                printf("บ");        
			}
				printf("\nศอออสอออออออออออออสออออออออออออออสอออออออออออออออสอออออออออออออออออออออออสออออออออออออออออออสอออออออออออออออออสอออออออออสอออออออออออออ\xBC");
            setlocale(LC_ALL, "Russian");
                
           

     fclose(f);
     cout<<endl<<"อเๆ์่๒ๅ Enter ไ๋ÿ ๏๐๎ไ๎๋ๆๅํ่ÿ";
     getch();

}
//*********************************************************
void Add()
{
	char otw;
	
if ((f=fopen("phone.txt","ab"))==NULL)
	{
		cout<<endl<<"ฮ๘่แ๊เ!";
		getch();
		return;
	}
	system("cls");
//OC ๒ๅ๋ๅ๔๎ํเ
	char ans;
	char android[10];
	char IOS[5];
	char WindowsPhone[15];
	
do
{	
        metka:
		system("cls");
		cout<<endl<<"ฮ๏ๅ๐เ๖่๎ํํ๛ๅ ๑่๑๒ๅ์๛:\n ";
		cout<<endl<<"1-Android";
		cout<<endl<<"2-IOS";
		cout<<endl<<"3-Windows-Phone";
		cout<<endl<<"\nย๛แๅ๐่๒ๅ ฮั ่็ ๏๐ๅไ๋๎ๆๅํํ๛๕: ";
		cin>>ans;
		if(isdigit(ans)==0) {
                       	     cout<<endl<<"ฤ๎๏๓๑๒่์๛ ๒๎๋ü๊๎ ๖่๔๐๛ (1-3)";
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
	cout<<endl<<"ย๛แ๐เํํเÿ ฮั- "<<inf.OC;
	getch();
 		
	
//ั๒๐เํเ-๏๐๎่็โ๎ไ่๒ๅ๋ü ๒ๅ๋ๅ๔๎ํเ	
	system("cls");
	//char ans;
	char china[7];
	char usa[5];
	char japane[8];
	char koreya[7];
	point:
		system("cls");
		cout<<endl<<"ั๒๐เํ๛-๏๐๎่็โ๎ไ่๒ๅ๋่:\n ";
		cout<<endl<<"1-ส่๒เ้";
		cout<<endl<<"2-ั๘เ";
		cout<<endl<<"3-฿๏๎ํ่ÿ";
		cout<<endl<<"4-ส๎๐ๅÿ";
		cout<<endl<<"\nย๛แๅ๐่๒ๅ ๑๒๐เํ๓ ่็ ๏๐ๅไ๋๎ๆๅํํ๛๕: ";
		cin>>ans;
		if(isdigit(ans)==0) {
                       	     cout<<endl<<"ฤ๎๏๓๑๒่์๛ ๒๎๋ü๊๎ ๖่๔๐๛ (1-4)!";
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
																		 						                                      
	cout<<endl<<"ย๛แ๐เํํเÿ ๑๒๐เํํเ- "<<inf.country;
	getch();
	
	
	//ยโ๎ไ ์เ๐๊่ ๒ๅ๋ๅ๔๎ํเ
	system("cls");
	int Ifl = 0, Ifl1 = 0; 
	string s;
	int i;
	while (true)
            {
                Ifl1++;
                if (Ifl == 1)
                    cout << endl << "ย ํเ็โเํ่่ ไ๎๋ๆํ๎ แ๛๒ü ํๅ แ๎๋ü๘ๅ 15 แ๓๊โ ";
                if (Ifl == 2)
                    cout << endl << "อเ็โเํ่ๅ ไ๎๋ๆํ๎ แ๛๒ü ๒๎๋ü๊๎ ่็ แ๓๊โ (เํใ๋่้๑๊่๕) ";
                Ifl = 0;
                cout << endl << "ยโๅไ่๒ๅ ์เ๐๊๓: ";
               
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
	cout << endl << "ยโๅไๅํํเÿ ์เ๐๊เ: " << inf.marka;
	getch();
	
	
	//ยโ๎ไ ์๎ไๅ๋่ ๒ๅ๋ๅ๔๎ํเ
		system("cls");
	Ifl=0;
	Ifl1=0;
    string s2;
    while1:
	while (true)
            {
                Ifl1++;
                if (Ifl == 1)
                    cout << endl << "ย ํเ็โเํ่่ ไ๎๋ๆํ๎ แ๛๒ü ํๅ แ๎๋ü๘ๅ 15 แ๓๊โ ";
                if (Ifl == 2)
                    cout << endl << "ย ํเ็โเํ่่ ์๎ใ๓๒ แ๛๒ü ๒๎๋ü๊๎ แ๓๊โ๛ ่ ๖่๔๐๛ ";
                if (Ifl == 3)
				    cout << endl << "ย ํเ็โเํ่่ ์๎ใ๓๒ แ๛๒ü ๒๎๋ü๊๎ เํใ๋่้๑๊่ๅ แ๓๊โ๛ ่ ๖่๔๐๛ ";
                Ifl = 0; 
                cout << endl << "ยโๅไ่๒ๅ ์๎ไๅ๋ü: ";
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
	cout<<endl<<"ยโๅไๅํํเÿ ์๎ไๅ๋ü: "<<inf.model;
	getch();
	
	//ยโ๎ไ ๐เ็์ๅ๐เ ý๊๐เํเ
	int fl;
	float size1;
	size1=0;
	fl=1;
	system("cls");
	while (true)
	{
	cout<< endl<< "ยโๅไ่๒ๅ ๐เ็์ๅ๐ ý๊๐เํเ: "; 
    while (!(cin >> size1) || (cin.peek() != '\n'))
    {	
    cin.clear();
    while (cin.get() != '\n');
    cout << "ยโๅไ่๒ๅ ๒๎๋ü๊๎ ๖่๔๐๓ (ไ่เ๏เ็๎ํ 3-12)" << endl;			
    }
	if(size1>=3 && size1<=12) break;  
	}
    inf.size=size1;
    cout<<endl<<"ยโๅไๅํํ๛้ ๐เ็์ๅ๐: " << inf.size;
    getch();
	
	
	//ยโ๎ไ ๐เ็์ๅ๐เ แเ๒เ๐ๅ่
	system("cls");
	int battery;
	while (true)
	{
	cout<< endl<< "ยโๅไ่๒ๅ ๅ์๊๎๑๒ü แเ๒เ๐ๅ่: "; 
    while (!(cin >> battery) || (cin.peek() != '\n'))
    {
    cin.clear();
    while (cin.get() != '\n');
    cout << "ยโๅไ่๒ๅ ๒๎๋ü๊๎ ๖่๔๐๓ (ไ่เ๏เ็๎ํ 1000-4000 ์ภ)" << endl;			
    }
	if(battery>=1000 && battery<=4000) break;  
	}
    inf.battery=battery;
    cout<<endl<<"ยโๅไๅํํเÿ ธ์๊๎๑๒ü แเ๒เ๐ๅ่: " << inf.battery;
    getch();
	
	
	//ย๐ๅ์ÿ ๐เแ๎๒๛
	system("cls");
	int time;
	time = inf.battery/300;
	inf.time = time;
	cout<<endl<<"ย๐ๅ์ÿ ๐เแ๎๒๛ แเ๒เ๐ๅ่(๗): "<<inf.time;
	getch();
	
	
	//ึๅํเ
	system("cls");
	int prise;
	prise = 2000;
	cout<<endl<<"ึๅํเ ๑๒เ๐๒๎โเÿ: " <<prise;
	if (inf.size >= 3 && inf.size<= 5) prise = 2000+2000*10/100;
	if (inf.size >= 5.1 && inf.size<=8) prise = 2000+2000*25/100;
	if (inf.size >= 8.1 && inf.size<= 12) prise = 2000+2000*50/100;
	cout<<endl<<"ึๅํเ ๑ ๓๗ๅ๒๎์ ไ่เใ๎ํเ๋่: "<<prise;
	
    if (inf.ncountry == 2) prise = prise + 2000*3/100;
	if (inf.ncountry == 3) prise = prise + 2000*5/100;
	cout<<endl<<"ึๅํเ ๑ ๓๗ๅ๒๎์ ๑๒๐เํ๛: "<<prise;
	inf.prise=prise;
	getch();

	fwrite(&inf, size, 1, f);
	cout<<endl<<"ฯ๐๎ไ๎๋ๆ่๒ü ไ๎แเโ๋ๅํ่ๅ? ";
	cin>>otw;
   }while(otw=='Y' || otw=='y');
   fclose(f);
    if((f=fopen("phone.txt", "rb"))==NULL)
   {
    cout<<endl<<"ฮ๘่แ๊เ";
    getch;
    return;
   }
 fseek(f,0,SEEK_END);//๓๊เ็เ๒ๅ๋ü โ ๊๎ํๅ๖ ๔เ้๋เ
 long int d=ftell(f);//ไ๋่ํเÿ ๖ๅ๋เÿ
 d=d/size;//๊๎๋ โ๎ ๗ๅใ๎ ๋่แ๎ โ ๔เ้๋ๅ
   cout<<endl<<"วเ๏่๑ü(-่) ๓๑๏ๅ๘ํ๎ ไ๎แเโ๋ๅํเ(-๛)";
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
    cout<<endl<<"1.ำไเ๋ๅํ่ๅ ๏๎ ํ๎์ๅ๐๓.";
    cout<<endl<<"2.ำไเ๋ๅํ่ๅ ๏๎ ์เ๐๊ๅ.";
    cout<<endl<<"3.ย๛๕๎ไ.";
    cout<<endl<<"\nย๛แๅ๐่๒ๅ ๏๓ํ๊๒: ";
    cin>>ans;
    if(isdigit(ans)==0) {
                       	 cout<<endl<<"ยโๅไๅํํ๛ ํๅ๊๎๐๐ๅ๊๒ํ๛ๅ ไเํํ๛ๅ!";
    	                 getch();
	                    }
    else
    switch (ans)
    {case '1' :{Del_Num(); break;}
	 case '2' :{Del_Mar(); break;}
     case '3':cout<<endl<<"ย๛๕๎ไ...";
    }
   }
 while (ans!='3');
 getch();
}


//********************************************************
void Del_Num()
{
	cout<<endl<<"ำไเ๋ๅํ่ๅ ๏๎ ๏๎๐ÿไ๊๎โ๎์๓ ํ๎์ๅ๐๓";
	if((f=fopen("phone.txt", "rb"))==NULL)
     {cout<<endl<<"Error";
     getch;
     return;
     }
     fseek(f,0,SEEK_END);
     long int d=ftell(f);
     d=d/size;
     if(d==0){cout<<endl<<"ิเ้๋ ๏๓๑๒๎้";
     getch();
     return;
             }
     fclose(f);
     View();
     int n_del, i;
     cout<<endl<<"ยโๅไ่๒ๅ ๏๎๐ÿไ๊๎โ๛้ ํ๎์ๅ๐: (0-โ๛๕๎ไ)";
     cin>>n_del;
     if(n_del==0){cout<<endl<<"ย๛๕๎ไ... ";
                  getch();
                  return;
                 }
     if((n_del<0) || (n_del>d)){cout<<endl<<"อๅ๊๎๐๐ๅ๊๒ํ๛ๅ ไเํํ๛ๅ";
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
    cout<<endl<<"ฬ๎แ่๋üํ๛้ ๒ๅ๋ๅ๔๎ํ ๑ ๏๎๐ÿไ๊๎โ๛์ ํ๎์ๅ๐๎์ "<<n_del<<" แ๛๋ ๓ไเ๋ธํ";
    fclose(f);
    fclose(f1);
     getch();
}


//*********************************************************
void Del_Mar()
{
	cout<<endl<<"ำไเ๋ๅํ่ๅ ็เ ์เ๐๊๎้";
	if((f=fopen("phone.txt", "rb"))==NULL)
     {cout<<endl<<"ฮ๘่แ๊เ";
     getch;
     return;
     }
     fseek(f,0,SEEK_END);
     long int d=ftell(f);
     d=d/size;
     if(d==0){cout<<endl<<"ิเ้๋ ๏๓๑๒๎้";
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
                    cout << endl << "ย ํเ็โเํ่่ ไ๎๋ๆํ๎ แ๛๒ü ํๅ แ๎๋ü๘ๅ 15 แ๓๊โ ";
                if (Ifl == 2)
                    cout << endl << "อเ็โเํ่ๅ ไ๎๋ๆํ๎ แ๛๒ü ๒๎๋ü๊๎ ่็ แ๓๊โ ";
                Ifl = 0;
                cout << endl << "ยโๅไ่๒ๅ ์เ๐๊๓ : ";
               
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
    	         cout<<endl<<"อๅ ํเ้ไๅํ๎ ๑๎โ๏เไๅํ่้";
	             getch();
	             return;
	             }
	f2=fopen("phone2.txt", "rb");
    fseek(f2,0,SEEK_END);
    long int d2=ftell(f2);
    d2=d2/size;
    rewind(f2);
		 setlocale(LC_CTYPE, "C");
            printf("\nษอออหอออออออออออออหออออออออออออออหอออออออออออออออหอออออออออออออออออออออออหออออออออออออออออออหอออออออออออออออออหอออออออออหอออออออออออออ\xBB");

            printf("\nบ N บ");
            setlocale(LC_CTYPE, "Ukr");
            printf("     OC      ");
            setlocale(LC_CTYPE, "C");
            printf("บ");

            setlocale(LC_CTYPE, "Ukr");
            printf("     ฬเ๐๊เ    ");
            setlocale(LC_CTYPE, "C");
            printf("บ");

            setlocale(LC_CTYPE, "Ukr");
            printf("     ฬ๎ไๅ๋ü    ");
            setlocale(LC_CTYPE, "C");
            printf("บ");

            setlocale(LC_CTYPE, "Ukr");
            printf(" ั๒๐เํเ-๏๐๎่็โ๎ไ่๒ๅ๋ü  ");
            setlocale(LC_CTYPE, "C");
            printf("บ");

            setlocale(LC_CTYPE, "Ukr");
            printf("   ะเ็์ๅ๐ ý๊๐เํเ  ");
            setlocale(LC_CTYPE, "C");
            printf("บ");

            setlocale(LC_CTYPE, "Ukr");
            printf("  ะเ็์ๅ๐ แเ๒เ๐ๅ่ ");
            setlocale(LC_CTYPE, "C");
            printf("บ");

            setlocale(LC_CTYPE, "Ukr");
            printf("   ึๅํเ  ");
            setlocale(LC_CTYPE, "C");
            printf("บ");
            
            setlocale(LC_CTYPE, "Ukr");
            printf(" ย๐ๅ์ÿ ๐เแ๎๒๛");
            setlocale(LC_CTYPE, "C");
            printf("บ");

            
            printf("\nฬอออฮอออออออออออออฮออออออออออออออฮอออออออออออออออฮอออออออออออออออออออออออฮออออออออออออออออออฮอออออออออออออออออฮอออออออออฮอออออออออออออน");
            rewind(f);
            for (int i = 0; i < d2; i++)
            {
                fread(&inf, size, 1, f2);


                printf("\nบ%3iบ", i + 1);
                setlocale(LC_CTYPE, "Ukr");
                printf("%-13s", inf.OC);
                setlocale(LC_CTYPE, "C");
                printf("บ");

                setlocale(LC_CTYPE, "Ukr");
                printf("%-14s", inf.marka);
                setlocale(LC_CTYPE, "C");
                printf("บ");

              
                printf("%-15s", inf.model);
                setlocale(LC_CTYPE, "C");
                printf("บ");

                setlocale(LC_CTYPE, "Ukr");
                printf("%-23s", inf.country);
                setlocale(LC_CTYPE, "C");
                printf("บ");

                setlocale(LC_CTYPE, "Ukr");
                printf("%-18.1f", inf.size);
                setlocale(LC_CTYPE, "C");
                printf("บ");

                setlocale(LC_CTYPE, "Ukr");
                printf("%-17i", inf.battery);
                setlocale(LC_CTYPE, "C");
                printf("บ");

                setlocale(LC_CTYPE, "Ukr");
                printf("%-9i", inf.prise);
                setlocale(LC_CTYPE, "C");
                printf("บ");  
				
				setlocale(LC_CTYPE, "Ukr");
                printf("%-13i", inf.time);
                setlocale(LC_CTYPE, "C");
                printf("บ");        
			}
				printf("\nศอออสอออออออออออออสออออออออออออออสอออออออออออออออสอออออออออออออออออออออออสออออออออออออออออออสอออออออออออออออออสอออออออออสอออออออออออออ\xBC");
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
	              cout<<endl<<"ำ๑๏ๅ๘ํ๎ ๓ไเ๋ๅํ๎";
                  getch();
	              return; 
	              }
				    
	if (fl>1){
		           
                  int del;
				  del=0;		
		          cout<<endl<<"ำไเ๋่๒ü โ๑ๅ ๑๎โ๏เไเþ๙่ๅ ็เ๏่๑่ (1) ่๋่ ๒๎๋ü๊๎ ๎ไํ๓ (2)";
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
	                 cout<<endl<<"ำ๑๏ๅ๘ํ๎ ๓ไเ๋ๅํ๎";
                     getch();
	                 return; 
	              }
	              
	              if (del==2)
				  {
				   
                   int numb;
                   
                   metka:
                   cout<<endl<<"ย๛แๅ๐่๒ๅ ๏๎๐ÿไ๊๎โ๛้ ํ๎์ๅ๐ 1 ไ๎ "<<d2<<": ";
	               cin>>numb;
	               if(numb>d2||numb<=0) {
		           cout<<endl<<"อๅ ํเ้ไๅํ๎ ๑๎โ๏เไๅํ่้";
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
                   cout<<endl<<"ำ๑๏ๅ๘ํ๎ ๓ไเ๋ๅํ๎";
                   getch();
				   return;     
				  } 
	    }
	
}

//*********************************************************
void Sort()
{
	system("cls");
	cout<<endl<<"ั๎๐๒่๐๎โ๊เ ็เ๏่๑ๅ้ ๏๐๎ ๒ๅ๋ๅ๔๎ํ.";
	getch();
		char ans;
	
	do{
    cout<<endl<<"\nฬๅํþ:\n";
    cout<<endl<<"1.ั๎๐๒่๐๎โ๊เ ๏๎ ์๎ไๅ๋่.";
    cout<<endl<<"2.ั๎๐๒่๐๎โ๊เ ๏๎ ๑๒๎่๎์๎๑๒่.";
    cout<<endl<<"3.ส๎ํๅ๖.";
    cout<<endl<<"\nย๛แๅ๐่๒ๅ ๏๓ํ๊๒ ์ๅํþ: ";
    cin>>ans;

    if(isdigit(ans)==0)
    {cout<<endl<<"อๅ๎๐๐ๅ๊๒ํ๛ๅ ไเํํ๛ๅ!";
   
	} 
    switch (ans)
    {
	 case '1' :{SortByName();
	 			system("cls"); 
	 			break;}
     case '2' :{SortByNumber();
	 			system("cls"); 
				 break;}
     case '3' :{cout<<endl<<"ส๎ํๅ๖";
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
	cout<<endl<<"ั๎๐๒่๐๎โ๊เ ๏๎ ์๎ไๅ๋่";
	if((f = fopen("phone.txt", "rb")) == NULL)
   		{
		   cout << endl << "ฮ๘่แ๊เ";
    	   getch;
    	   return;
  		 }
    fseek(f, 0, SEEK_END);
    long int d = ftell(f);// ๊๎๋-โ๎ แเ้๒ โ ๔เ้๋ๅ
    d = d/size;//๊๎๋-โ๎ ๖่๔๐ โ ๔เ้๋ๅ
    if(d == 0)
	        {
			   cout << endl << "ฯ๓๑๒๎้";
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
	cout<<endl<<"ะๅไเ๊๒่๐๎โเํ่ๅ ็เ๏่๑ๅ้.";
	getch();
}

//*********************************************************
void SortByNumber()
{
	cout<<endl<<"ั๎๐๒่๐๎โ๊เ ๏๎ ๖ๅํๅ:";
 if((f=fopen("phone.txt", "rb"))==NULL)
    {cout<<endl<<"ฮ๘่แ๊เ!";
     getch();
     return;
    }
    fseek(f, 0, SEEK_END);
    long int d=ftell(f);
    d=d/size;
    if (d==0){cout<<endl<<"ิเ้๋ ๏๓๑๒๎้";
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
	cout<<endl<<"ฮแ๑๋๓ๆ่โเํ่ๅ ็เ๏่๑ๅ้:\n ";
	char way;
 do{
    View();
    cout<<endl<<"\nฬๅํþ:\n";
    cout<<endl<<"1.ฯ๐๎๖ๅํ๒ํ๎ๅ ๑๎๎๒ํ๎๘ๅํ่ๅ ๏๐๎ไเํํ๛๕ ๒ๅ๋ๅ๔๎ํ๎โ ็เ ฮั.";
    cout<<endl<<"2.ัเ์๛ๅ ๏๎๏๓๋ÿ๐ํ๛ๅ ๑๒๐เํ๛-๏๐๎่็โ๎ไ่๒ๅ๋่ ็เ โ๛แ๐เํํ๎้ ฮั.";
    cout<<endl<<"3.ฬเ๐๊่ ๒ๅ๋ๅ๔๎ํ๎โ ๑ ๑เ์๎้ แ๎๋ü๘๎้ ธ์๊๎๑๒üþ แเ๒เ๐ๅ่.";
    cout<<endl<<"4.ั๒๐เํ๛, ๗๒๎ ๏๐๎่็โ๎ไÿ๒ ๑เ์๛ๅ ไ๎๐๎ใ่ๅ ๒ๅ๋ๅ๔๎ํ๛.";
    cout<<endl<<"5.ฮแ๙เÿ ๑๓์์เ ็เ๊เ็๎โ ํเ ๏๐๎ไเๆ๓ ไ๋ÿ โโๅไๅํํ๎้ ์เ๐๊่ ่ โโๅไๅํํ๎้ ์๎ไๅ๋่.";
    cout<<endl<<"6.ย๛๕๎ไ.";
    cout<<endl<<"\nย๛แๅ๐่๒ๅ ๏๓ํ๊๒ ์ๅํþ: ";
    cin>>way;
    if(isdigit(way)==0) {
    	                 cout<<endl<<"ยโๅไๅํํ๛ ํๅ๊๎๐๐ๅ๊๒ํ๛ๅ ไเํํ๛ๅ!";
    	                 getch();
	                    }
    else
    switch (way)
    {case '1' :{Percent(); break;}
     case '2' :{Popular(); break;}
     case '3' :{Capacity(); break;}
     case '4' :{Country(); break;}
     case '5' :{Common(); break;}
     case '6':cout<<endl<<"ย๛๕๎ไ!";
    }
   }
 while (way!='6');
}

//*********************************************************
void Percent()
{
	system("cls");
	cout<<endl<<"\nฯ๐๎๖ๅํ๒ํ๎ๅ ๑๎๎๒ํ๎๘ๅํ่ๅ ๏๐๎ไเํํ๛๕ ๒ๅ๋ๅ๔๎ํ๎โ ็เ ฮั.";
	
	if ((f=fopen("phone.txt","ab"))==NULL)
	{
		cout<<endl<<"ฮ๘่แ๊เ!";
		getch();
		return;
	}
	fseek(f, 0, SEEK_END);
    long int d=ftell(f);
    d=d/size;
    if (d==0){cout<<endl<<"ิเ้๋ ๏๓๑๒๎้";
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
        printf("\nษอออหอออออออออออออออหออออออออออหอออออออออออ\xBB");

        printf("\nบ N บ");
        setlocale(LC_CTYPE, "Russian");
        printf("      ฮั       ");
        setlocale(LC_CTYPE, "C");
        printf("บ");

        setlocale(LC_CTYPE, "Russian");
        printf(" ฯ๐๎๖ๅํ๒๛ ");
        setlocale(LC_CTYPE, "C");
        printf("บ");

        setlocale(LC_CTYPE, "Russian");
        printf(" ส๎๋่๗ๅ๑๒โ๎");
        setlocale(LC_CTYPE, "C");
        printf("บ");

        printf("\nฬอออฮอออออออออออออออฮออออออออออฮอออออออออออน");
        setlocale(LC_CTYPE, "Russian");

        setlocale(LC_CTYPE, "C");

        printf("\nบ%3iบ", 1);
        setlocale(LC_CTYPE, "Russian");
        printf("%-15s", android);
        setlocale(LC_CTYPE, "C");
        printf("บ");

        setlocale(LC_CTYPE, "Russian");
        printf("%-10.i", ad);
        setlocale(LC_CTYPE, "C");
        printf("บ");

        setlocale(LC_CTYPE, "Russian");
        printf("%-11.i", k_ad);
        setlocale(LC_CTYPE, "C");
        printf("บ");

        setlocale(LC_CTYPE, "C");

        printf("\nบ%3iบ", 2);
        setlocale(LC_CTYPE, "Russian");
        printf("%-15s", ios);
        setlocale(LC_CTYPE, "C");
        printf("บ");

        setlocale(LC_CTYPE, "Russian");
        printf("%-10.i", is);
        setlocale(LC_CTYPE, "C");
        printf("บ");

        setlocale(LC_CTYPE, "Russian");
        printf("%-11.i", k_is);
        setlocale(LC_CTYPE, "C");
        printf("บ");


        setlocale(LC_CTYPE, "C");

        printf("\nบ%3iบ", 3);
        setlocale(LC_CTYPE, "Russian");
        printf("%-15s", wp);
        setlocale(LC_CTYPE, "C");
        printf("บ");

        setlocale(LC_CTYPE, "Russian");
        printf("%-10.i", wp1);
        setlocale(LC_CTYPE, "C");
        printf("บ");

        setlocale(LC_CTYPE, "Russian");
        printf("%-11.i", k_wp);
        setlocale(LC_CTYPE, "C");
        printf("บ");
        
        printf("\nศอออสอออออออออออออออสออออออออออสอออออออออออ\xBC");
        setlocale(LC_CTYPE, "Russian");
    
    getch();
    return;
}

//*********************************************************
void Popular()
{
	system("cls");
	View();
	cout<<endl<<"ัเ์๛ๅ ๏๎๏๓๋ÿ๐ํ๛ๅ ๑๒๐เํ๛-๏๐๎่็โ๎ไ่๒ๅ๋่ ็เ โ๛แ๐เํํ๎้ ฮั.";
	getch();
		if((f=fopen("phone.txt", "rb"))==NULL)
    {cout<<endl<<"ฮ๘่แ๊เ";
     getch();
     return;
    }
    fseek(f, 0, SEEK_END);
    long int d=ftell(f);
    d=d/size;
    if (d==0){cout<<endl<<"ิเ้๋ ๏๓๑๒๎้";
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
		cout<<endl<<"ฮ๏ๅ๐เ๖่๎ํํ๛ๅ ๑่๑๒ๅ์๛:\n ";
		cout<<endl<<"1-Android";
		cout<<endl<<"2-IOS";
		cout<<endl<<"3-Windows-Phone";
		cout<<endl<<"\nย๛แๅ๐่๒ๅ ฮั ่็ ๏๐ๅไ๋๎ๆๅํํ๛๕: ";
		cin>>ans;
		if(isdigit(ans)==0) {
                       	     cout<<endl<<"ยโๅไๅํํ๛ ํๅ๊๎๐๐ๅ๊๒ํ๛ๅ ไเํํ๛ๅ!";
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
        printf("\nษอออหอออออออออออออออหออออออออออหอออออออออออ\xBB");

        printf("\nบ N บ");
        setlocale(LC_CTYPE, "Russian");
        printf("      ฮั       ");
        setlocale(LC_CTYPE, "C");
        printf("บ");

        setlocale(LC_CTYPE, "Russian");
        printf("  ส๎๋-โ๎  ");
        setlocale(LC_CTYPE, "C");
        printf("บ");

        setlocale(LC_CTYPE, "Russian");
        printf("   ั๒๐เํเ  ");
        setlocale(LC_CTYPE, "C");
        printf("บ");
        
        
        
        
        printf("\nฬอออฮอออออออออออออออฮออออออออออฮอออออออออออน");
        setlocale(LC_CTYPE, "Russian");

        setlocale(LC_CTYPE, "C");

        printf("\nบ%3iบ", 1);
        setlocale(LC_CTYPE, "Russian");
        printf("%-15s", android);
        setlocale(LC_CTYPE, "C");
        printf("บ");

        setlocale(LC_CTYPE, "Russian");
        printf("%-10.i", n_c);
        setlocale(LC_CTYPE, "C");
        printf("บ");

        setlocale(LC_CTYPE, "Russian");
        printf("%-11s", china);
        setlocale(LC_CTYPE, "C");
        printf("บ");

        setlocale(LC_CTYPE, "C");

        printf("\nบ%3iบ", 2);
        setlocale(LC_CTYPE, "Russian");
        printf("%-15s", android);
        setlocale(LC_CTYPE, "C");
        printf("บ");

        setlocale(LC_CTYPE, "Russian");
        printf("%-10.i", n_u);
        setlocale(LC_CTYPE, "C");
        printf("บ");

        setlocale(LC_CTYPE, "Russian");
        printf("%-11s", usa);
        setlocale(LC_CTYPE, "C");
        printf("บ");


        setlocale(LC_CTYPE, "C");

        printf("\nบ%3iบ", 3);
        setlocale(LC_CTYPE, "Russian");
        printf("%-15s", android);
        setlocale(LC_CTYPE, "C");
        printf("บ");

        setlocale(LC_CTYPE, "Russian");
        printf("%-10.i", n_j);
        setlocale(LC_CTYPE, "C");
        printf("บ");

        setlocale(LC_CTYPE, "Russian");
        printf("%-11s", japan);
        setlocale(LC_CTYPE, "C");
        printf("บ");
        
        
         setlocale(LC_CTYPE, "C");

        printf("\nบ%3iบ", 4);
        setlocale(LC_CTYPE, "Russian");
        printf("%-15s", android);
        setlocale(LC_CTYPE, "C");
        printf("บ");

        setlocale(LC_CTYPE, "Russian");
        printf("%-10.i", n_k);
        setlocale(LC_CTYPE, "C");
        printf("บ");

        setlocale(LC_CTYPE, "Russian");
        printf("%-11s", korea);
        setlocale(LC_CTYPE, "C");
        printf("บ");
        
        printf("\nศอออสอออออออออออออออสออออออออออสอออออออออออ\xBC");
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
        printf("\nษอออหอออออออออออออออหออออออออออหอออออออออออ\xBB");

        printf("\nบ N บ");
        setlocale(LC_CTYPE, "Russian");
        printf("      ฮั       ");
        setlocale(LC_CTYPE, "C");
        printf("บ");

        setlocale(LC_CTYPE, "Russian");
        printf("  ส๎๋-โ๎  ");
        setlocale(LC_CTYPE, "C");
        printf("บ");

        setlocale(LC_CTYPE, "Russian");
        printf("   ั๒๐เํเ  ");
        setlocale(LC_CTYPE, "C");
        printf("บ");
        
        
        
        
        printf("\nฬอออฮอออออออออออออออฮออออออออออฮอออออออออออน");
        setlocale(LC_CTYPE, "Russian");

        setlocale(LC_CTYPE, "C");

        printf("\nบ%3iบ", 1);
        setlocale(LC_CTYPE, "Russian");
        printf("%-15s", IOS);
        setlocale(LC_CTYPE, "C");
        printf("บ");

        setlocale(LC_CTYPE, "Russian");
        printf("%-10.i", n_c);
        setlocale(LC_CTYPE, "C");
        printf("บ");

        setlocale(LC_CTYPE, "Russian");
        printf("%-11s", china);
        setlocale(LC_CTYPE, "C");
        printf("บ");

        setlocale(LC_CTYPE, "C");

        printf("\nบ%3iบ", 2);
        setlocale(LC_CTYPE, "Russian");
        printf("%-15s", IOS);
        setlocale(LC_CTYPE, "C");
        printf("บ");

        setlocale(LC_CTYPE, "Russian");
        printf("%-10.i", n_u);
        setlocale(LC_CTYPE, "C");
        printf("บ");

        setlocale(LC_CTYPE, "Russian");
        printf("%-11s", usa);
        setlocale(LC_CTYPE, "C");
        printf("บ");


        setlocale(LC_CTYPE, "C");

        printf("\nบ%3iบ", 3);
        setlocale(LC_CTYPE, "Russian");
        printf("%-15s", IOS);
        setlocale(LC_CTYPE, "C");
        printf("บ");

        setlocale(LC_CTYPE, "Russian");
        printf("%-10.i", n_j);
        setlocale(LC_CTYPE, "C");
        printf("บ");

        setlocale(LC_CTYPE, "Russian");
        printf("%-11s", japan);
        setlocale(LC_CTYPE, "C");
        printf("บ");
        
        
         setlocale(LC_CTYPE, "C");

        printf("\nบ%3iบ", 4);
        setlocale(LC_CTYPE, "Russian");
        printf("%-15s", IOS);
        setlocale(LC_CTYPE, "C");
        printf("บ");

        setlocale(LC_CTYPE, "Russian");
        printf("%-10.i", n_k);
        setlocale(LC_CTYPE, "C");
        printf("บ");

        setlocale(LC_CTYPE, "Russian");
        printf("%-11s", korea);
        setlocale(LC_CTYPE, "C");
        printf("บ");
        
        printf("\nศอออสอออออออออออออออสออออออออออสอออออออออออ\xBC");
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
        printf("\nษอออหอออออออออออออออหออออออออออหอออออออออออ\xBB");

        printf("\nบ N บ");
        setlocale(LC_CTYPE, "Russian");
        printf("      ฮั       ");
        setlocale(LC_CTYPE, "C");
        printf("บ");

        setlocale(LC_CTYPE, "Russian");
        printf("  ส๎๋-โ๎  ");
        setlocale(LC_CTYPE, "C");
        printf("บ");

        setlocale(LC_CTYPE, "Russian");
        printf("   ั๒๐เํเ  ");
        setlocale(LC_CTYPE, "C");
        printf("บ");
        
        
        
        
        printf("\nฬอออฮอออออออออออออออฮออออออออออฮอออออออออออน");
        setlocale(LC_CTYPE, "Russian");

        setlocale(LC_CTYPE, "C");

        printf("\nบ%3iบ", 1);
        setlocale(LC_CTYPE, "Russian");
        printf("%-15s", WindowsPhone);
        setlocale(LC_CTYPE, "C");
        printf("บ");

        setlocale(LC_CTYPE, "Russian");
        printf("%-10.i", n_c);
        setlocale(LC_CTYPE, "C");
        printf("บ");

        setlocale(LC_CTYPE, "Russian");
        printf("%-11s", china);
        setlocale(LC_CTYPE, "C");
        printf("บ");

        setlocale(LC_CTYPE, "C");

        printf("\nบ%3iบ", 2);
        setlocale(LC_CTYPE, "Russian");
        printf("%-15s", WindowsPhone);
        setlocale(LC_CTYPE, "C");
        printf("บ");

        setlocale(LC_CTYPE, "Russian");
        printf("%-10.i", n_u);
        setlocale(LC_CTYPE, "C");
        printf("บ");

        setlocale(LC_CTYPE, "Russian");
        printf("%-11s", usa);
        setlocale(LC_CTYPE, "C");
        printf("บ");


        setlocale(LC_CTYPE, "C");

        printf("\nบ%3iบ", 3);
        setlocale(LC_CTYPE, "Russian");
        printf("%-15s", WindowsPhone);
        setlocale(LC_CTYPE, "C");
        printf("บ");

        setlocale(LC_CTYPE, "Russian");
        printf("%-10.i", n_j);
        setlocale(LC_CTYPE, "C");
        printf("บ");

        setlocale(LC_CTYPE, "Russian");
        printf("%-11s", japan);
        setlocale(LC_CTYPE, "C");
        printf("บ");
        
        
         setlocale(LC_CTYPE, "C");

        printf("\nบ%3iบ", 4);
        setlocale(LC_CTYPE, "Russian");
        printf("%-15s", WindowsPhone);
        setlocale(LC_CTYPE, "C");
        printf("บ");

        setlocale(LC_CTYPE, "Russian");
        printf("%-10.i", n_k);
        setlocale(LC_CTYPE, "C");
        printf("บ");

        setlocale(LC_CTYPE, "Russian");
        printf("%-11s", korea);
        setlocale(LC_CTYPE, "C");
        printf("บ");
        
        printf("\nศอออสอออออออออออออออสออออออออออสอออออออออออ\xBC");
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
	cout<<endl<<"ฬเ๐๊่ ๒ๅ๋ๅ๔๎ํ๎โ ๑ ๑เ์๎้ แ๎๋ü๘๎้ ๅ์๊๎๑๒üþ แเ๒เ๐ๅ่.";
	getch();
	
    if((f=fopen("phone.txt", "rb"))==NULL)
    {cout<<endl<<"ฮ๘่แ๊เ";
     getch();
     return;
    }
    fseek(f, 0, SEEK_END);
    long int d=ftell(f);
    d=d/size;
    if (d==0){cout<<endl<<"ิเ้๋ ๏๓๑๒๎้";
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



            printf("\nษอออหอออออออออออออหออออออออออออออหอออออออออออออออหอออออออออออออออออออออออหออออออออออออออออออหอออออออออออออออออหอออออออออหอออออออออออออ\xBB");

            printf("\nบ N บ");
            setlocale(LC_CTYPE, "Ukr");
            printf("     OC      ");
            setlocale(LC_CTYPE, "C");
            printf("บ");

            setlocale(LC_CTYPE, "Ukr");
            printf("     ฬเ๐๊เ    ");
            setlocale(LC_CTYPE, "C");
            printf("บ");

            setlocale(LC_CTYPE, "Ukr");
            printf("     ฬ๎ไๅ๋ü    ");
            setlocale(LC_CTYPE, "C");
            printf("บ");

            setlocale(LC_CTYPE, "Ukr");
            printf(" ั๒๐เํเ-๏๐๎่็โ๎ไ่๒ๅ๋ü  ");
            setlocale(LC_CTYPE, "C");
            printf("บ");

            setlocale(LC_CTYPE, "Ukr");
            printf("   ะเ็์ๅ๐ ý๊๐เํเ  ");
            setlocale(LC_CTYPE, "C");
            printf("บ");

            setlocale(LC_CTYPE, "Ukr");
            printf("  ะเ็์ๅ๐ แเ๒เ๐ๅ่ ");
            setlocale(LC_CTYPE, "C");
            printf("บ");

            setlocale(LC_CTYPE, "Ukr");
            printf("   ึๅํเ  ");
            setlocale(LC_CTYPE, "C");
            printf("บ");
            
            setlocale(LC_CTYPE, "Ukr");
            printf(" ย๐ๅ์ÿ ๐เแ๎๒๛");
            setlocale(LC_CTYPE, "C");
            printf("บ");

            
            printf("\nฬอออฮอออออออออออออฮออออออออออออออฮอออออออออออออออฮอออออออออออออออออออออออฮออออออออออออออออออฮอออออออออออออออออฮอออออออออฮอออออออออออออน");

                printf("\nบ%3iบ", i + 1);
                setlocale(LC_CTYPE, "Ukr");
                printf("%-13s", inf.OC);
                setlocale(LC_CTYPE, "C");
                printf("บ");

                setlocale(LC_CTYPE, "Ukr");
                printf("%-14s", inf.marka);
                setlocale(LC_CTYPE, "C");
                printf("บ");

              
                printf("%-15s", inf.model);
                setlocale(LC_CTYPE, "C");
                printf("บ");

                setlocale(LC_CTYPE, "Ukr");
                printf("%-23s", inf.country);
                setlocale(LC_CTYPE, "C");
                printf("บ");

                setlocale(LC_CTYPE, "Ukr");
                printf("%-18.1f", inf.size);
                setlocale(LC_CTYPE, "C");
                printf("บ");

                setlocale(LC_CTYPE, "Ukr");
                printf("%-17i", inf.battery);
                setlocale(LC_CTYPE, "C");
                printf("บ");

                setlocale(LC_CTYPE, "Ukr");
                printf("%-9i", inf.prise);
                setlocale(LC_CTYPE, "C");
                printf("บ");  
				
				setlocale(LC_CTYPE, "Ukr");
                printf("%-13i", inf.time);
                setlocale(LC_CTYPE, "C");
                printf("บ");        
			
				printf("\nศอออสอออออออออออออสออออออออออออออสอออออออออออออออสอออออออออออออออออออออออสออออออออออออออออออสอออออออออออออออออสอออออออออสอออออออออออออ\xBC");
            setlocale(LC_ALL, "Russian");
   }
  }
  getch();					 
}

	
	
//*********************************************************
void Country()
{
		system("cls");
	
	cout<<endl<<"ั๒๐เํ๛, ๗๒๎ ๏๐๎่็โ๎ไÿ๒ ๑เ์๛ๅ ไ๎๐๎ใ่ๅ ๒ๅ๋ๅ๔๎ํ๛";
	getch();
	
    if((f=fopen("phone.txt", "rb"))==NULL)
    {cout<<endl<<"ฮ๘่แ๊เ!";
     getch();
     return;
    }
    fseek(f, 0, SEEK_END);
    long int d=ftell(f);
    d=d/size;
    if (d==0){cout<<endl<<"ิเ้๋ ๏๓๑๒๎้";
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



            printf("\nษอออหอออออออออออออหออออออออออออออหอออออออออออออออหอออออออออออออออออออออออหออออออออออออออออออหอออออออออออออออออหอออออออออหอออออออออออออ\xBB");

            printf("\nบ N บ");
            setlocale(LC_CTYPE, "Ukr");
            printf("     OC      ");
            setlocale(LC_CTYPE, "C");
            printf("บ");

            setlocale(LC_CTYPE, "Ukr");
            printf("     ฬเ๐๊เ    ");
            setlocale(LC_CTYPE, "C");
            printf("บ");

            setlocale(LC_CTYPE, "Ukr");
            printf("     ฬ๎ไๅ๋ü    ");
            setlocale(LC_CTYPE, "C");
            printf("บ");

            setlocale(LC_CTYPE, "Ukr");
            printf(" ั๒๐เํเ-๏๐๎่็โ๎ไ่๒ๅ๋ü  ");
            setlocale(LC_CTYPE, "C");
            printf("บ");

            setlocale(LC_CTYPE, "Ukr");
            printf("   ะเ็์ๅ๐ ý๊๐เํเ  ");
            setlocale(LC_CTYPE, "C");
            printf("บ");

            setlocale(LC_CTYPE, "Ukr");
            printf("  ะเ็์ๅ๐ แเ๒เ๐ๅ่ ");
            setlocale(LC_CTYPE, "C");
            printf("บ");

            setlocale(LC_CTYPE, "Ukr");
            printf("   ึๅํเ  ");
            setlocale(LC_CTYPE, "C");
            printf("บ");
            
            setlocale(LC_CTYPE, "Ukr");
            printf(" ย๐ๅ์ÿ ๐เแ๎๒๛");
            setlocale(LC_CTYPE, "C");
            printf("บ");

            
            printf("\nฬอออฮอออออออออออออฮออออออออออออออฮอออออออออออออออฮอออออออออออออออออออออออฮออออออออออออออออออฮอออออออออออออออออฮอออออออออฮอออออออออออออน");

                printf("\nบ%3iบ", i + 1);
                setlocale(LC_CTYPE, "Ukr");
                printf("%-13s", inf.OC);
                setlocale(LC_CTYPE, "C");
                printf("บ");

                setlocale(LC_CTYPE, "Ukr");
                printf("%-14s", inf.marka);
                setlocale(LC_CTYPE, "C");
                printf("บ");

              
                printf("%-15s", inf.model);
                setlocale(LC_CTYPE, "C");
                printf("บ");

                setlocale(LC_CTYPE, "Ukr");
                printf("%-23s", inf.country);
                setlocale(LC_CTYPE, "C");
                printf("บ");

                setlocale(LC_CTYPE, "Ukr");
                printf("%-18.1f", inf.size);
                setlocale(LC_CTYPE, "C");
                printf("บ");

                setlocale(LC_CTYPE, "Ukr");
                printf("%-17i", inf.battery);
                setlocale(LC_CTYPE, "C");
                printf("บ");

                setlocale(LC_CTYPE, "Ukr");
                printf("%-9i", inf.prise);
                setlocale(LC_CTYPE, "C");
                printf("บ");  
				
				setlocale(LC_CTYPE, "Ukr");
                printf("%-13i", inf.time);
                setlocale(LC_CTYPE, "C");
                printf("บ");        
			
				printf("\nศอออสอออออออออออออสออออออออออออออสอออออออออออออออสอออออออออออออออออออออออสออออออออออออออออออสอออออออออออออออออสอออออออออสอออออออออออออ\xBC");
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
                    cout << endl << "ย ํเ็โเํ่่ ไ๎๋ๆํ๎ แ๛๒ü ํๅ แ๎๋ü๘ๅ 15 แ๓๊โ ";
                if (Ifl == 2)
                    cout << endl << "อเ็โเํ่ๅ ไ๎๋ๆํ๎ แ๛๒ü ๒๎๋ü๊๎ ่็ แ๓๊โ ";
                Ifl = 0;
                cout << endl << "ยโๅไ่๒ๅ ์เ๐๊๓: ";
               
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
	cout<<endl<<"ยโๅไๅํํเÿ ์เ๐๊เ: "<<new_line;
	getch();				         
	
	//ยโ๎ไ ์๎ไๅ๋่ ๒ๅ๋ๅ๔๎ํเ
		//system("cls");
	Ifl=0;
	Ifl1=0;
    string s2;
	while (true)
            {
                Ifl1++;
                if (Ifl == 1)
                    cout << endl << "ย ํเ็โเํ่่ ไ๎๋ๆํ๎ แ๛๒ü ํๅ แ๎๋ü๘ๅ 15 แ๓๊โ ";
                if (Ifl == 2)
                    cout << endl << "ย ํเ็โเํ่่ ์๎ใ๓๒ แ๛๒ü ๒๎๋ü๊๎ แ๓๊โ๛ ่ ๖่๔๐๛ ";
                Ifl = 0;
                cout << endl << "ยโๅไ่๒ๅ ์๎ไๅ๋ü: ";
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
	cout<<endl<<"ฬ๎ไๅ๋ü: "<<line1;                   
	getch();
	if((f=fopen("phone.txt", "rb"))==NULL)
    {cout<<endl<<"ฮ๘่แ๊เ";
     getch();
     return;
    }
    fseek(f, 0, SEEK_END);
    long int d=ftell(f);
    d=d/size;
    if (d==0){cout<<endl<<"ิเ้๋ ๏๓๑๒๎้";
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
	          cout<<endl<<"อๅ ๓ไเ๋๎๑ü ํเ้๒่ ๑๎โ๏เไๅํ่้, ๏๎โ๒๎๐่๒ๅ ๏๎๏๛๒๊๓";
	          getch();
	          return;
			 }
	if (k > 0) {
		         setlocale(LC_CTYPE, "C");
        printf("\nษอออหอออออออออออออออหออออออออออหอออออออออออ\xBB");

        printf("\nบ N บ");
        setlocale(LC_CTYPE, "Russian");
        printf("      ฬเ๐๊เ    ");
        setlocale(LC_CTYPE, "C");
        printf("บ");

        setlocale(LC_CTYPE, "Russian");
        printf(" ฬ๎ไๅ๋ü   ");
        setlocale(LC_CTYPE, "C");
        printf("บ");

        setlocale(LC_CTYPE, "Russian");
        printf(" ส๎๋่๗ๅ๑๒โ๎");
        setlocale(LC_CTYPE, "C");
        printf("บ");

        printf("\nฬอออฮอออออออออออออออฮออออออออออฮอออออออออออน");
        setlocale(LC_CTYPE, "Russian");

        setlocale(LC_CTYPE, "C");

        printf("\nบ%3iบ", 1);
        setlocale(LC_CTYPE, "Russian");
        printf("%-15s", new_line);
        setlocale(LC_CTYPE, "C");
        printf("บ");

        setlocale(LC_CTYPE, "Russian");
        printf("%-10s", line1);
        setlocale(LC_CTYPE, "C");
        printf("บ");

        setlocale(LC_CTYPE, "Russian");
        printf("%-11.i", k);
        setlocale(LC_CTYPE, "C");
        printf("บ");
        printf("\nศอออสอออออออออออออออสออออออออออสอออออออออออ\xBC");
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
            proverka[i] == 'น' ||
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
