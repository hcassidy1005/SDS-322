//Hailey Cassidy 
//Homework 3 - K-shift decoder/ encoder 
//encode and decode a string of text based on a given key number
//February 13th, 2018

#include <iostream>
#include <cmath>
#include <string>
using std::endl;
using std::cout;
using std::cin; 
using std::string;
using std::ws;

int main(){
	string alphabet  = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890";
	char encrypt_decrypt;
	string input_string;
	int key;
	string output_string;
	int position;
	cout << "Enter e for encrypt or d decrypt" << endl;
	cin >> encrypt_decrypt;
	
	if (encrypt_decrypt == 'e'){
		//encryption code
		cout << "Enter the secret key: " <<endl;
		cin >> key;
		cout << "Enter a string to encrypt: " << endl;
		cin >> ws;
		getline(cin,input_string);
		position = 0;
		string current;
		while (position < input_string.length()){
			if (input_string[position] == ' '){
				output_string += " ";
			}// if space 
			else{
				current = input_string[position];
				output_string += alphabet[(alphabet.find(current) + key) % 62];	
			}// not space 
			position++;		
		}//while loop
		
		cout << input_string << " encrypted is: " << output_string <<endl;
	}//if e
	else if (encrypt_decrypt == 'd'){
		//decryption code
		cout << "Enter the secret key: " <<endl;
                cin >> key;
		cout << "Enter a string to decrypt: " << endl;
                cin >> ws;
		getline(cin, input_string);
		position = 0;
               	string current;
               	while (position < input_string.length()){
			
			if (input_string[position] == ' '){
                                output_string += " ";
                        }// if space 
                        else{
                       		current = input_string[position];
                       		output_string += alphabet[(alphabet.find(current) - key) % 62]; 
			}//not space
			position++;
                }//while loop 

		cout << input_string << " decrypted is: " << output_string <<endl;
	}//else if d
	else{
                cout << "Entry is not a valid choice"<< endl;
        }//else e and d
	
	
}// main 
