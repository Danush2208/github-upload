#include<iostream.h>
#include<conio.h>
#include<dos.h>
#include<stdio.h>
#include<string.h>
#include<iomanip.h>
#include<process.h>
#include<fstream.h>
#include<ctype.h>
void backspace(int n)
{
    clrscr();
    cout<<"\n\n\t\tENTER THE PASSWORD: ";
    for(int i=0;i<n-1;i++)
    {
	cout<<"*";
    }
}
int main()
{
    int flag=0;
    char a[10],name[20];
    int i=0;
    clrscr();
    cout<<"\n\n";
cout<<"\t%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n";
cout<<"\t%%% WELCOME TO GOVERNMENT OF INDIA-GST ISSUE CENTER %%%    \n";
cout<<"\t%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n";
    cout<<"\n\n\n\t\tENTER YOUR USER NAME:";
    gets(name);
  L1:clrscr();
    cout<<"\n\n\t\tENTER THE PASSWORD:";
    L: a[i]=getch();
    if(a[i]==13)
    {
     a[i]='\0';
     goto X;
    }
    else
      if(a[i]==8)
      {
      backspace(i);
      i-=2;
      }
    else
      cout<<"*";
    i++;
    goto L;
    cout<<"\n\n";
    X: cout<<"\n\n";
       if(strcmp(a,"startup")==0)
       {
	 cout<<"\n\n\t\t YOU ARE THROUGH TO OUR WEBSITE.....PASSWORD MATCHED!!";
	 delay(1000);
	 goto P;
       }
       else
       {
       cout<<"\n\n\t\t PASSWORD INCORRECT";
       if(flag>=2)
       exit(0);
       else
       {
       flag++;
       goto L1;
       }
       getch();
}


P:for(i=0;i<100;i++)
{
clrscr();
cout<<"\n\n\n\n\t\t\tPLEASE WAIT WHILE LOADING "<<i<<"%";
delay(100);
}
LK:clrscr();
cout<<"\n\n";
cout<<"\t%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n";
cout<<"\t%%% WELCOME TO GOVERNMENT OF INDIA-GST ISSUE CENTER %%%    \n";
cout<<"\t%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n";
cout<<"\n\t 1.TO KNOW THE GST(%) FOR YOUR PRODUCT";
cout<<"\n\t 2.TO CHECK THE GST IS CORRECT FOR YOUR PRODUCT";
cout<<"\n\t 3.TO CHECK WEATHER THE SHOP IS REGISTERED FOR GST";
cout<<"\n\t 4.EXIT";
cout<<"\n\n\t%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n";

C:cout<<"\n\n\n\t\t CHOOSE ANYONE OPTION(1-4):";
int option;
cin>>option;
ifstream f1,f;
char pdt[20];
char dum_pdt[20],dum_pdt1[20],dum_pdt2[20],dum_pdt3[20],dum_pdt4[20];
char dp[20];
if(option==1)
{
clrscr();
cout<<"\tEnter the product name for which you want to find the GST: ";
gets(pdt);
f.open("zero.txt",ios::in);
f.seekg(0);
while(!f.eof())
{
f>>dum_pdt;
if(strcmpi(dum_pdt,pdt)==0)
   {
    cout<<"\tTHE GST OF THE GIVEN PRODUCT IS ZERO(0%)";
    getch();
    goto LK;
   }
}
f.close();
f.open("five.txt",ios::in);
f.seekg(0);
while(!f.eof())
{
f>>dum_pdt1;
if(strcmpi(dum_pdt1,pdt)==0)
   {
    cout<<"\tTHE GST OF THE GIVEN PRODUCT IS FIVE(5%)";
    getch();
    goto LK;
   }
}
f.close();
f.open("12.txt",ios::in);
f.seekg(0);
while(!f.eof())
{
f>>dum_pdt2;
if(strcmpi(dum_pdt2,pdt)==0)
   {
    cout<<"\tTHE GST OF THE GIVEN PRODUCT IS TWELVE(12%)";
    getch();
    goto LK;
   }

}
f.close();
f.open("eighteen.txt",ios::in);
f.seekg(0);
while(!f.eof())
{
f>>dum_pdt3;
if(strcmpi(dum_pdt3,pdt)==0)
   {
    cout<<"\tTHE GST OF THE GIVEN PRODUCT IS EIGHTEEN(18%)";
    getch();
    goto LK;
   }
}
f.close();
f.open("28.txt",ios::in);
f.seekg(0);
while(!f.eof())
{
f>>dum_pdt4;
if(strcmpi(dum_pdt4,pdt)==0)
   {
    cout<<"\tTHE GST OF THE GIVEN PRODUCT IS TWENTYEIGHT(28%)";
    getch();
    goto LK;
   }
}
f.close();

cout<<"ITEM NOT FOUND";
goto LK;
}
if(option==2)
{
clrscr();
char product[20];
int p_gst;
cout<<"\tEnter the name of the product for which you have the GST: ";
gets(product);
cout<<"\n\tEnter the GST charged by the shopkeeper: ";
cin>>p_gst;
f.open("zero.txt",ios::in);
f.seekg(0);
while(!f.eof())
{
 f>>dp;
 if((strcmpi(dp,product)==0)&&(p_gst==0))
  {
  cout<<"PRODUCT MATCHES WITH THE GIVEN GST%";
  getch();
  goto LK;
  }
 if((strcmpi(dp,product)==0)&&(p_gst!=0))
  {
  cout<<"PRODUCT DOESNT MATCH WITH THE GIVEN GST%";
  cout<<"\n\nPLEASE ENQUIRE THE SHOPKEEPER FOR PROPER GST OF THE PRODUCT";
  getch();
  goto LK;
  }
}
f.close();
f.open("five.txt",ios::in);
f.seekg(0);
while(!f.eof())
{
 f>>dp;
 if((strcmpi(dp,product)==0)&&(p_gst==5))
  {
  cout<<"PRODUCT MATCHES WITH THE GIVEN GST%";
  getch();
  goto LK;
  }
 if((strcmpi(dp,product)==0)&&(p_gst!=5))
  {
  cout<<"PRODUCT DOESNT MATCH WITH THE GIVEN GST%";
  cout<<"\n\nPLEASE ENQUIRE THE SHOPKEEPER FOR PROPER GST OF THE PRODUCT";
  getch();
  goto LK;
  }
}
f.close();
f.open("12.txt",ios::in);
f.seekg(0);
while(!f.eof())
{
 f>>dp;
 if((strcmpi(dp,product)==0)&&(p_gst==12))
  {
  cout<<"PRODUCT MATCHES WITH THE GIVEN GST%";
  getch();
  goto LK;
  }
 if((strcmpi(dp,product)==0)&&(p_gst!=12))
  {
  cout<<"PRODUCT DOESNT MATCH WITH THE GIVEN GST%";
  cout<<"\n\nPLEASE ENQUIRE THE SHOPKEEPER FOR PROPER GST OF THE PRODUCT";
  getch();
  goto LK;
  }
}
f.close();
f.open("eighteen.txt",ios::in);
f.seekg(0);
while(!f.eof())
{
 f>>dp;
 if((strcmpi(dp,product)==0)&&(p_gst==18))
  {
  cout<<"PRODUCT MATCHES WITH THE GIVEN GST%";
  getch();
  goto LK;
  }
 if((strcmpi(dp,product)==0)&&(p_gst!=18))
  {
  cout<<"PRODUCT DOESN'T MATCH WITH THE GIVEN GST%";
  cout<<"\n\nPLEASE ENQUIRE THE SHOPKEEPER FOR PROPER GST OF THE PRODUCT";
  getch();
  goto LK;
  }
}
f.close();
f.open("28.txt",ios::in);
f.seekg(0);
while(!f.eof())
{
 f>>dp;
 if((strcmpi(dp,product)==0)&&(p_gst==28))
  {
  cout<<"PRODUCT MATCHES WITH THE GIVEN GST%";
  getch();
  goto LK;
  }
 if((strcmpi(dp,product)==0)&&(p_gst!=28))
  {
  cout<<"PRODUCT DOESNT MATCH WITH THE GIVEN GST%";
  cout<<"\n\nPLEASE ENQUIRE THE SHOPKEEPER FOR PROPER GST OF THE PRODUCT";
  getch();
  goto LK;
  }
}
f.close();
}
char shp_lcn[20],dumfk[20],shp_name1[30];
char coice;

if(option==3)
{
clrscr();
cout<<"ENTER THE LICENSE OF THE SHOP IN PROPER FORMAT: ";
gets(shp_lcn);
f1.open("licence.txt",ios::in);
f1.seekg(0);
while(!f1.eof())
 {
 f1>>dumfk;
 if(strcmpi(dumfk,shp_lcn)==0)
 {
 cout<<"THE SHOP IS REGISTERED UNDER GST ACT \n\nSO YOU CAN PROCEED YOUR SHOPPING";
 cout<<"\n\nHAVE A NICE DAY \n\n THANK YOU ";
 getch();
 goto LK;
 }
}
cout<<"THIS SHOP IS NOT REGISTERED UNDER GST ACT \n\n DO YOU WANT TO REGISTER A COMPLAINT WITH US?";
cout<<"\nENTER (y/n): ";
coice=getch();
if(coice=='Y'||coice=='y')
{
 clrscr();
 cout<<"\n\n\t";
 cout<<"PLEASE ENTER THE SHOP NAME: ";
 gets(shp_name1);
 cout<<"THANK YOU FOR YOUR VALUABLE FEEDBACK \n\nACTION WILL BE TAKEN AGAINST THE SHOP";
 cout<<"\n\nWE WILL MAKE SURE THAT THE SHOP'S LICENSE GETS CANCELLED";
 getch();
 goto LK;
}
if(coice=='N'||coice=='n')
{
 clrscr();

 cout<<"THANK YOU FOR YOUR VALUABLE FEEDBACK";
 getch();
 goto LK;
}
}
else if(option==4)
{
exit(0);

}
else
{
cout<<"INVALID INPUT!!PLEASE CHOOSE ANY OPTION(1-4)";
goto LK;
//hello 
}
getch();
return 0;
}