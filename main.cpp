#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main(){
    int a {0};
    int pass;
    int att {20};
    do{
        do{
            cout << "\nEnter password: ";
            cin >> pass;
            a++;
        }while (pass != 12345 && a < 3);

        if (a == 3){
            int time = att;
            cout << "you have wrong 3 times" << "\nyou need wait " << time << " seconds\n";
            for (int i = time ; i >= 0; i--){
                system ("cls");
                cout << "\n========\n" << i << "seconds\n" << "========";
                Sleep(1000);
                
            }
            att *= 2;
        }
        a = 0;
    }while (pass != 12345);

    cout << "Password is valid !!\n";
    system ("pause");
    
    return 0;
}
