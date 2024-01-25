#include <iostream>
#include<conio.h>
#include<ctime>
#define YELLOW  "\033[33m"
#define GREEN   "\033[32m"
#define SKYBLUE  "\033[1;36m"
#define RED     "\033[31m"
#define BLUE    "\033[34m"

using namespace std;
int main()
{
    cout<<SKYBLUE<<"************Number Guessing Game****************"<<endl;
    cout<<SKYBLUE<<"**************Enter the Range*******************"<<endl;
    int n1,n2,guess,guesses,answer;
    cout<<"From : ";
    cin>>n1;
    cout<<"To : ";
    cin>>n2;
    srand(time(NULL));
    int random_number=(rand() % (n2 - n1 + 1)) + n1;
    answer=random_number;
    guesses=0;
    do{
        cout<<YELLOW<<"Enter Your Guess : ";
        cin>>guess;
        if(guess>answer){
            cout<<RED<<"Too High"<<endl;
        }
        else if(guess<answer){
            cout<<RED<<"Too Low"<<endl;
        }
        else{
            cout<<GREEN<<"You Won!!!"<<endl;
        }
        guesses++;
    }while(guess!=answer);
    cout<<BLUE<<"*************************************************"<<endl;
    cout<<BLUE<<"Answer= "<<answer<<endl;
    cout<<BLUE<<"No. of guesses you made : "<<guesses<<endl;
    cout<<BLUE<<"*************************************************";
    getch();

}