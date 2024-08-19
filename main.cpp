#include<iostream>
#include<cstdlib>
#include<conio.h>


using std::cout;
using std::cin;
using std::endl;


using namespace std;
int main()
{
    string username = "";
    string password = "";
    bool loginSuccess = false;
    string a[6]={"1", "2", "3", "4", "5"};
    string ans, name, answer;
    int menu, quantity, Choose, Choose1;
    string mainmenu[6]={"MilkTea", "Spaghetti", "Cake", "Burgers", "Fries"};
    string milktea[5]={"Fruit Special", "Brown Sugar", "Winter Melon", "Thai Milk Tea"};
    string spaghetti[4]={"Regular Spaghetti", "Medium Spaghetti", "Large Spaghetti"};
    string cake[5]={"Mango Supreme Cake","Black Forest Cake", "Sans Rival Cake", "Choco Mocha Crunch Cake"};
    string burger[5]={"Kin's Offner Bacon Burger", "Mushroom Kin's Burger", "Texas Burger", "Chicken Klub Hose Burger"};
    string fries[5]={"Crinkle Fries", "Steak Fries", "Curly Fries", "Waffle Fries"};

    do{

        cout<<"\tWelcome Please Login below\n\n";
        cout<<"Username: ";
        cin>>username;
        cout<<"Password: ";
        cin>>password;

        if(username == "customer" && password == "myaccount"){
            cout<<"\nSuccessful Login\n\n";
            loginSuccess = true;

            do{

    system("cls");
    cout<<"Hello Welcome To Food Machine"<<endl;
    cout<<"Please Enter Your Name: ";
    cin>>name;
	cout<<"Hello "<<name<<" What would you like to order?\n \n";

	cout<<"Main Menu"<<endl;
	for(int i = 0; i < 5; i++) {
            cout <<"["<<a[i]<<"]"<<mainmenu[i]<<"\n";
    }
	cout<<"Please Enter your Choice: ";
	cin>>menu;

    system("cls");
    if(menu == 1){
        for(int i = 0; i < 4; i++) {
            cout <<"["<<a[i]<<"]"<<milktea[i]<<"\n";
    }
		cout<<"Please Enter what Flavour would you like to have?:";
        cin>>Choose;

        system("cls");
        cout<<"MilkTea Size"<<endl;
        cout<<" [1]Small/50 \n [2]Regular/100 \n [3]Large/150 \n [4]Extra Large/200 \n";
        cout<<"Choose a Size please:";
        cin>>Choose1;
        if(Choose1>=1 && Choose1<=4){
			cout<<"Please Enter Quantity: ";
			cin>>quantity;
			switch(Choose1){
			case 1: Choose = 50*quantity;
			break;

			case 2: Choose = 100*quantity;
			break;

			case 3: Choose = 150*quantity;
			break;

			case 4: Choose = 200*quantity;
			break;
            }

            switch(Choose1)
			{
			case 1:
			    system("cls");
			    cout<<"This is Your Order"<<endl;
			    cout<<quantity<<" "<<milktea[0];
			    cout<<"\nThis is your total bill:"<<Choose;
			    cout<<"\nThank you, Have a Nice Day\n";
			break;

			case 2:
			    system("cls");
			    cout<<"This is Your Order"<<endl;
			    cout<<quantity<<" "<<milktea[1];
			    cout<<"\nThis is your total bill:"<<Choose;
			    cout<<"\nThank you, Have a Nice Day\n";
			break;

			case 3:
			    system("cls");
			    cout<<"This is Your Order"<<endl;
			    cout<<quantity<<" "<<milktea[2];
			    cout<<"\nThis is your total bill:"<<Choose;
			    cout<<"\nThank you, Have a Nice Day\n";
			break;

			case 4:
			    system("cls");
			    cout<<"This is Your Order"<<endl;
			    cout<<quantity<<" "<<milktea[3];
			    cout<<"\nThis is your total bill:"<<Choose;
			    cout<<"\nThank you, Have a Nice Day\n";
			break;
        }

    }
}
    else if(menu == 2){
    for(int i = 0; i < 3; i++) {
            cout <<"["<<a[i]<<"]"<<spaghetti[i]<<"\n";
    }
		cout<<"Please Choose you preferred Size:";
		cin>>Choose1;
        if(Choose1>=1 && Choose1<=4){
			cout<<"Please Enter Quantity: ";
			cin>>quantity;
			switch(Choose1){
			case 1: Choose = 50*quantity;
			break;

			case 2: Choose = 100*quantity;
			break;

			case 3: Choose = 150*quantity;
			break;

			case 4: Choose = 200*quantity;
			break;
            }

            switch(Choose1)
			{
			case 1:
			    system("cls");
			    cout<<"This is Your Order"<<endl;
			    cout<<quantity<<" "<<spaghetti[0];
			    cout<<"\nThis is your total bill:"<<Choose;
			    cout<<"\nThank you, Have a Nice Day\n";
			break;

			case 2:
			    system("cls");
			    cout<<"This is Your Order"<<endl;
			    cout<<quantity<<" "<<spaghetti[1];
			    cout<<"\nThis is your total bill:"<<Choose;
			    cout<<"\nThank you, Have a Nice Day\n";
			break;

			case 3:
			    system("cls");
			    cout<<"This is Your Order"<<endl;
			    cout<<quantity<<" "<<spaghetti[2];
			    cout<<"\nThis is your total bill:"<<Choose;
			    cout<<"\nThank you, Have a Nice Day\n";
			break;

        }

    }

}
    else if(menu == 3){
        for(int i = 0; i < 4; i++) {
            cout <<"["<<a[i]<<"]"<<cake[i]<<"\n";
    }
		cout<<"Please Enter what Flavour would you like to have?:";
        cin>>Choose;

        system("cls");
        cout<<"Cake Size"<<endl;
        cout<<" [1]Small/200 \n [2]Regular/300 \n [3]Large/500 \n [4]Extra Large/700 \n";
        cout<<"Choose a Size please:";
        cin>>Choose1;
        if(Choose1>=1 && Choose1<=4){
			cout<<"Please Enter Quantity: ";
			cin>>quantity;
			switch(Choose1){
			case 1: Choose = 200*quantity;
			break;

			case 2: Choose = 300*quantity;
			break;

			case 3: Choose = 500*quantity;
			break;

			case 4: Choose = 700*quantity;
			break;
            }

            switch(Choose1)
			{
			case 1:
			    system("cls");
			    cout<<"This is Your Order"<<endl;
			    cout<<quantity<<" "<<cake[0];
			    cout<<"\nThis is your total bill:"<<Choose;
			    cout<<"\nThank you, Have a Nice Day\n";
			break;

			case 2:
			    system("cls");
			    cout<<"This is Your Order"<<endl;
			    cout<<quantity<<" "<<cake[1];
			    cout<<"\nThis is your total bill:"<<Choose;
			    cout<<"\nThank you, Have a Nice Day\n";
			break;

			case 3:
			    system("cls");
			    cout<<"This is Your Order"<<endl;
			    cout<<quantity<<" "<<cake[2];
			    cout<<"\nThis is your total bill:"<<Choose;
			    cout<<"\nThank you, Have a Nice Day\n";
			break;

			case 4:
			    system("cls");
			    cout<<"This is Your Order"<<endl;
			    cout<<quantity<<" "<<cake[3];
			    cout<<"\nThis is your total bill:"<<Choose;
			    cout<<"\nThank you, Have a Nice Day\n";
			break;
        }

    }
}
    else if(menu == 4){
        for(int i = 0; i < 4; i++) {
            cout <<"["<<a[i]<<"]"<<burger[i]<<"\n";
    }
		cout<<"Please Enter what Flavour would you like to have?:";
        cin>>Choose;

        system("cls");
        cout<<"Burger Size"<<endl;
        cout<<" [1]Small/200 \n [2]Regular/300 \n [3]Large/500 \n [4]Extra Large/700 \n";
        cout<<"Choose a Size please:";
        cin>>Choose1;
        if(Choose1>=1 && Choose1<=4){
			cout<<"Please Enter Quantity: ";
			cin>>quantity;
			switch(Choose1){
			case 1: Choose = 40*quantity;
			break;

			case 2: Choose = 80*quantity;
			break;

			case 3: Choose = 120*quantity;
			break;

			case 4: Choose = 160*quantity;
			break;
            }

            switch(Choose1)
			{
			case 1:
			    system("cls");
			    cout<<"This is Your Order"<<endl;
			    cout<<quantity<<" "<<burger[0];
			    cout<<"\nThis is your total bill:"<<Choose;
			    cout<<"\nThank you, Have a Nice Day\n";
			break;

			case 2:
			    system("cls");
			    cout<<"This is Your Order"<<endl;
			    cout<<quantity<<" "<<burger[1];
			    cout<<"\nThis is your total bill:"<<Choose;
			    cout<<"\nThank you, Have a Nice Day\n";
			break;

			case 3:
			    system("cls");
			    cout<<"This is Your Order"<<endl;
			    cout<<quantity<<" "<<burger[2];
			    cout<<"\nThis is your total bill:"<<Choose;
			    cout<<"\nThank you, Have a Nice Day\n";
			break;

			case 4:
			    system("cls");
			    cout<<"This is Your Order"<<endl;
			    cout<<quantity<<" "<<burger[3];
			    cout<<"\nThis is your total bill:"<<Choose;
			    cout<<"\nThank you, Have a Nice Day\n";
			break;
        }

    }
}
    else if(menu == 5){
        for(int i = 0; i < 4; i++) {
            cout <<"["<<a[i]<<"]"<<fries[i]<<"\n";
    }
		cout<<"Please Enter what Flavour would you like to have?:";
        cin>>Choose;

        system("cls");
        cout<<"Burger Size"<<endl;
        cout<<" [1]Small/200 \n [2]Regular/300 \n [3]Large/500 \n [4]Extra Large/700 \n";
        cout<<"Choose a Size please:";
        cin>>Choose1;
        if(Choose1>=1 && Choose1<=4){
			cout<<"Please Enter Quantity: ";
			cin>>quantity;
			switch(Choose1){
			case 1: Choose = 30*quantity;
			break;

			case 2: Choose = 60*quantity;
			break;

			case 3: Choose = 90*quantity;
			break;

			case 4: Choose = 120*quantity;
			break;
            }

            switch(Choose1)
			{
			case 1:
			    system("cls");
			    cout<<"This is Your Order"<<endl;
			    cout<<quantity<<" "<<fries[0];
			    cout<<"\nThis is your total bill:"<<Choose;
			    cout<<"\nThank you, Have a Nice Day\n";
			break;

			case 2:
			    system("cls");
			    cout<<"This is Your Order"<<endl;
			    cout<<quantity<<" "<<fries[1];
			    cout<<"\nThis is your total bill:"<<Choose;
			    cout<<"\nThank you, Have a Nice Day\n";
			break;

			case 3:
			    system("cls");
			    cout<<"This is Your Order"<<endl;
			    cout<<quantity<<" "<<fries[2];
			    cout<<"\nThis is your total bill:"<<Choose;
			    cout<<"\nThank you, Have a Nice Day\n";
			break;

			case 4:
			    system("cls");
			    cout<<"This is Your Order"<<endl;
			    cout<<quantity<<" "<<fries[3];
			    cout<<"\nThis is your total bill:"<<Choose;
			    cout<<"\nThank you, Have a Nice Day\n";
			break;
        }

    }
   }
    cout<<"\nIf you want to order again [yes/no]"<<endl;
    cin>>ans;


    system("cls");
  }

  while(ans == "Yes" || ans == "yes" || ans == "YES" );
}

        else{
            cout<<"Incorrect username password combo \n";
            cout<<"Please try to Login again."<<endl;
        }

    cout<<"If you want to login again just type [exit] "<<endl;
    cin>>answer;

    system("cls");
  }
  while(answer == "exit" || answer == "exit");

  return 0;
}
