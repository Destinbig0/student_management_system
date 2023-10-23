/*  THIS IS A TESTING FILE, WHERE EVERYTHING THAT YOU'RE NOT SURE OF IS TESTED FROM     */

#include <iostream>
// #include <string>
// #include <windows.h>
#include <vector>
using namespace std;

void print_hello_world () {
    cout << "Hello world, its working!" << endl;
}

void print_my_name(){
    string name = nullptr;
    cout<<"Enter your name"<<endl;
    cin>>name;
    cout<<"Hello, "<<name;
}

void menu_function_name();

class Menus{

    private:
        vector<string> menus;
        vector<void (*)()> functions;
    public:
        void add(string, void (*function)());
        void selected(int index);
        int len();
};


void Menus::add(string name, void (*function)()){
    menus.push_back(name);
    functions.push_back(function);
}

void Menus::selected(int index){
    cout<<"Executing "<<menus.at(index)<<endl;
    functions.at(index)();
}

int Menus::len(){
    return menus.size();
}


void say_hello_fidele(){
    cout<<"Hello man"<<endl;
}

void say_salam_destin(){
    cout<<"Salam destin"<<endl;
}


int main () {
    
    // auto keep = print_hello_world;
    
    // keep();

    // vector<decltype(keep)> k;
    // k.push_back(print_hello_world);
    // k.push_back(print_my_name);


    //  Menus* menu = new Menus();

    // menu->add("Fidele",say_hello_fidele);
    // menu->add("Destin",say_salam_destin);

    //----------------------------------------------------
    // select_menu:
    // int select;
    // cout<<"Enter your Menu selection:"<<endl;
    // cin>>select;

    // if(menu->len() < select || select<0 || select == 0){
    //     goto select_menu;
    // }

    // menu->selected(select-1);
    //----------------------------------------------------

    

    // void (*f)() = print_hello_world;

    
    return 0;
} 






















/*

    HANDLE hStdin = GetStdHandle(STD_INPUT_HANDLE); 
    DWORD mode = 0;
    GetConsoleMode(hStdin, &mode);
    SetConsoleMode(hStdin, mode & (~ENABLE_ECHO_INPUT));

    string s;

    cout << "Enter the password: ";
    getline(cin, s);

    cout << "\nthe written input is : ";
    cout << s << endl;
*/