#include <iostream>
using namespace std;


int main() {
  int rick=0,bus=0,car=0,amount=0,veh=0,choice=0;
  while(true){
  cout<<"WELCOME TO CAR PARKING SYSYTEM";
  cout<<endl;
  cout<<endl;
  cout<<"Press-1 : For  rickshaw "<<endl;
  cout<<"Press-2 : For  Bus "<<endl;
  cout<<"Press-3 : For  car "<<endl;
  cout<<"Press-4 : To Show all the records "<<endl;
  cout<<"Press-5 : To delete all the records "<<endl;
  cout<<endl;
  cout<<"Enter your choice";
  cin>>choice;
  
  switch(choice){
  case 1:
  rick++;
  amount+=100;
  veh++;
  cout<<endl;
  cout<<"ADD ONE RICKSHAW IN RECORD";
  cout<<endl;
  system("pause");
  system("cls");
  break;
  
  case 2:
  bus++;
  amount+=200;
  veh++;
  cout<<endl;
  cout<<"ADD ONE BUS IN RECORD";
  cout<<endl;
  system("pause");
  system("cls");
   break;
  
  case 3:
  car++;
  amount+=300;
  veh++;
  cout<<endl;
  cout<<"ADD ONE CAR IN RECORD";
  cout<<endl;
  system("pause");
  system("cls");
   break;
  
  case 4:
  cout<<"TOTAL AMOUNT="<<amount<<endl;
  cout<<"TOTAL VEHICLES = "<<veh<<endl;
  cout<<" TOTAL CARS IS = "<<car<<endl;
  cout<<" TOTAL BUS IS = "<<bus<<endl;
  cout<<" TOTAL RICKSHAW IS = "<<rick<<endl;
  system("pause");
  system("cls");
   break;
  
  case 5:
  veh=0,car=0,bus=0,amount=0,rick=0;
  cout<<"ALL RECORDS HAVE BEEN DELETED";
   break;
   
  default:
  cout<<"INVALID IMPUT"<<endl;
  
   
  
  }
  
  }

    return 0;
}
