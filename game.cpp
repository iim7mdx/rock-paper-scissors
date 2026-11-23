#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
char arr[]={'r','p','s'};
char randomm(){
    return arr[rand()%3];
}
void game(char input1,char input2){
    if(input1=='s'&&input2=='p'||input1=='p'&&input2=='r'||input1=='r'&&input2=='s'){
        cout<<"Oh! you won the game!\n"<<"Your Move: "<<input1<<endl<<"Computer's Move: "<<input2<<endl;
    }
    else if(input1=='s'&&input2=='s'||input1=='p'&&input2=='p'||input1=='r'&&input2=='r'){
        cout<<"Game draw\n"<<"Your Move: "<<input1<<endl<<"Computer's Move: "<<input2<<endl;
    }
    else if(input1=='s'&&input2=='r'||input1=='p'&&input2=='s'||input1=='r'&&input2=='p'){
        cout<<"Oh! Computer won the game!\n"<<"Your Move: "<<input1<<endl<<"Computer's Move: "<<input2<<endl;
    }

}
int main(){
    char input1;
    srand(time(0));
    char input2=randomm();
    cout<<"\n\n\t\t Wolcome to Stone Paper Scissor\n\n";
    cout<<"\tEnter r for Rock, Enter P for Paper, Enter s for Scissor\n\n";
    cin>>input1;
    char mo=tolower(input1);
    game(mo,input2);
    
    return 0;
}