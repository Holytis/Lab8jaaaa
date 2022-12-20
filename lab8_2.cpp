#include<iostream>
#include<string>

using namespace std ;

int main()
{
    string ID , day , name , mov , last ;
cout << "Fahsai: Sawadee ka...Can you tell me your name?" << endl ;
cout << "?????: " ;
getline(cin,name) ;
cout << "Fahsai: Wow!!! " << name << " is a really cool name.\n" ;
cout << "Fahsai: I think you are an Engineering student. What is your student ID?\n" ;
cout << name << ": " ;
getline(cin,ID) ;
cout << "Fahsai: I think you may be GEAR " << (((int(ID[0]) - '0')*10) + (int(ID[1]) - '0')) - 12 << ". I have a free movie ticket for you.\n" ;
cout << "Fahsai: Let's go to the cinema together!!!\n" ;
cout << "Fahsai: What movie do you want to watch?\n" ;
cout << name << ": "  ;
getline(cin,mov) ;
cout << "Fahsai: So....which day are you free to go with me?\n" ;
cout << name << ": "  ;
getline(cin,day) ;
cout << "Fahsai: " << day << "....that is OK!!! I'm looking forward to watching " << mov << " with you.\n" ;
cout << name << ": "  ;
cin >> last ;
cin.ignore() ;
cout << "Fahsai: 555+ see you " << day << ". Bye Bye \\(^ ^)/"  ;

    return 0 ;
}
