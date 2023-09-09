#include<bits/stdc++.h>
#include <string.h>
using namespace std;
struct encryption {
	char enc[255];
	char plaintext[200];
	char ciphertext[200];
	int key;
};
int main(){
	struct encryption e ;
	char username[20] , password[20] , choice;
	string uname = "vibhor" ,pass ="vibhor";
	int ch;
	cout<< "\n               -----------------------------       \n";
	 cout << "                             *--------SECURITY OF YOUR DATA MATTERS-------*                 \n";
    cout << "\n                             ----------------------------------------------                  \n";
    cout << "                             *------THANKYOU FOR USING OUR APPLICATION------*                 \n";
    cout << "\n     PLEASE LOGIN TO USE THE FEATURES : \n";
    cout << "Enter Username : ";
    cin >> username;
    cout << "Enter Password : ";
    cin >> password;
    if(username == uname && password == pass){
    	cout<<"\n      WELCOME TO ENCRYPT -DECRYPT WORLD     \n\n";
    	do
    	{
    		cout<<"pls choose your option:  \n";
    		cout<<" 1. Press 1 for Encryption \n2 . Press 2 for Decryption \n3 Press for exit \n";
    		cin>>ch;
    		switch(ch)
    		{
    			case 1:
    				cout<< "\n\n Enter the encryption key :";
    				cin>>e.key;
    				fflush(stdin); // to clean the buffer
    				cout<<"enter the plaintext :";
    				cin.get(e.plaintext,200);
    				cout<< "\n\n The CipherText is: ";
    				for(int i=0;i<strlen(e.plaintext);i++){
    					e.enc[i] = int(e.plaintext[i])+e.key;
    					cout<<e.enc[i];
					}
					break;
					
					case 2:
						cout<<"enter the deryption key: ";
						cin>>e.key;
						fflush(stdin);// to clean the buffer
						cout<<"enter the cipher text:";
						
					cin.get(e.ciphertext,200);
					cout<<"\n\n   the plain text is :";
					for(int i=0;i<strlen(e.ciphertext);i++){
							e.plaintext[i] = int(e.ciphertext[i])-e.key;
					cout<<e.plaintext[i];
					}
				break;
				
				case 3:
					  cout << "\n     SEE YOU SOON !!  \n\n";
                exit(0);
                break;
                
                 default:
                cout << "  INVALID INPUT !!   ";
            }
            cout << "\n\nPress y to continue and n to exit\n";
            cin >> choice;
                
					
			} while(choice == 'y');
		}
		else{
			 cout << "\nIncorrect username or password !! Try again...";
    }
	return 0;
	
	
}
