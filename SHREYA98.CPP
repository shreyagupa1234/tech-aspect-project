#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
void insert();
void list();
void search();
char *plan_name[5],free_call[5];
int i,monthly_rental[5],free_internet[5],free_sms[5],call_charges[5],sms_charges[5],data_charges[5],roaming_charges[5];
void main()
{
clrscr();
int ch=0;
cout<<"*******************Teleconm Application"<<"\n";
cout<<"Add to data plan press 1";
cout<<"\n";
cout<<"See all the list press 2\n";
cout<<"choose by plan name press 3\n";
cin>>ch;
switch(ch)
{
case 1:
insert();
break;
case 2:
list();
break;
case 3:
search();
break;
default:
cout<<"Press a valid Option";
exit(0);
}
getch();
}
void search()
{
char *p;
cout<<"Enter Plan name from the above";
cin>>p;
for(int i=0;i<5;i++)
{
if(strcmp(p,plan_name[i])==0)
{
cout<<"Data plan"<<plan_name[i]<<"\n";
cout<<"monthly rental"<<monthly_rental[i]<<"\n";
cout<<"free internet"<<free_internet[i]<<"\n";
cout<<"free calls"<<free_call[i]<<"\n";
cout<<"free sms"<<free_sms[i]<<"\n";
cout<<"call charges"<<call_charges[i]<<"\n";
cout<<"sms charges"<<sms_charges[i]<<"\n";
cout<<"data charges"<<data_charges[i]<<"\n";
cout<<"roaming charges"<<roaming_charges[i]<<"\n";
}
else
cout<<"choose right name"<<"\n";
}
}
void insert()
{
cout<<"*********First add  Data Plam********************";
//int i=0;
for(i=0;i<5;i++)
{
cout<<"\n enter "<<i<<" data plan in list";
cout<<"enter plan name";
cin>>plan_name[i];
cout<<"\n";
cout<<"enter monthly rental";
cin>>monthly_rental[i];
cout<<"\n";
cout<<"enter free internet";
cin>>free_internet[i];
cout<<"\n";
cout<<"enter free calls available or not";
cin>>free_call[i];
cout<<"\n";
cout<<"enter free sma";
cin>>free_sms[i];
cout<<"\n";
cout<<"enter call charges";
cin>>call_charges[i];
cout<<"\n";
cout<<"enter sms charges";
cin>>sms_charges[i];
cout<<"\n";
cout<<"enter data charges";
cin>>data_charges[i];
cout<<"\n";
cout<<"enter roaming charges";
cin>>roaming_charges[i];
cout<<"\n";
}
}
void list()
{
for(int i=0;i<5;i++)
{
cout<<"Data plan"<<plan_name[i]<<"\n";
cout<<"monthly rental"<<monthly_rental[i]<<"\n";
cout<<"free internet"<<free_internet[i]<<"\n";
cout<<"free calls"<<free_call[i]<<"\n";
cout<<"free sms"<<free_sms[i]<<"\n";
cout<<"call charges"<<call_charges[i]<<"\n";
cout<<"sms charges"<<sms_charges[i]<<"\n";
cout<<"data charges"<<data_charges[i]<<"\n";
cout<<"roaming charges"<<roaming_charges[i]<<"\n";
cout<<"***********************";
}}                                                                                                   