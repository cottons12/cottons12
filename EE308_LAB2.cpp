#include <string>
#include <iostream>
#include <fstream>
using namespace std;
string keyword[]={"auto","break","case","char","const","continue","default","do",
				  "double","else","enum","extern","float","for","goto","if",
				  "int","long","register","return","short","signed","sizeof","stastic",
				  "struct","switch","typedef","union","unsigned","void","volatile","while"};
int main(){
	int total=0;
	string str;
	cout<<"the .cpp file name you wanna in the same folder"<<endl;
	cin>>str;
	cout<<"what level of stastic you want(from 1 to 4)"<<endl;
	cin>> total;
	ifstream inFile,s1,s2;
	while (getline (inFile, str)){
        for(int i=0;i<total;i++){
        int pos;
        for(;;){
        	int count[]={0};
                if(str.find(keyword[i]) != -1){
                    pos = str.find(keyword[i]);
                    count[i]++;
                    str = str.substr(pos + keyword[i].length(),str.length() - pos - keyword[i].length());
                } 
                else break;
            }    
        }
    }
    int num[5]={25,2,6,15,9},x[3]={0,0,-1}; 
	int struc[count[num[0]]]={0};
	string pick[3]={"else if", "if","else"};
	while (getline (s1, str)){
		int pos;
		for(;;){
			if(str.find(keyword[num[1]]) != -1){
				if(str.find("//") != -1) break;
				else{
					struc[x[0]]++;
					break;
				}
			}
			if(str.find(keyword[num[2]]) != -1){
				if(str.find("//") != -1) break;
				else{
					x[0]++;
					break;
				}
			}
			if(str.find(pick[0]) != -1){
				pos = str.find(pick[0]);
				str = str.substr(pos + pick[0].length(),str.length() - pos - pick[0].length());
			}
			if(str.find(pick[1]) != -1){
				if(str.find("//") != -1) break;
				else{
					x[1]++;
					break;
				}
				x[1]++;
				break;
			}
			else break;
		}	
	}
	string pick[3]={"else if", "if","else"};
	while (getline (s1, str)){
		int pos;
		for(;;){
			if(str.find(pick[0]) != -1){
				pos = str.find(pick[0]);
				str = str.substr(pos + pick[0].length(),str.length() - pos -pick[0].length());
			}
			if(str.find(pick[1]) != -1){
				if(str.find("//") != -1) break;
				else{
					x[1]++;
					break;
				}
			}
			else break;
		}	
	}
	string pick[3]={"else if", "if","else"};
	while (getline (s1, str)){
		int pos;
		for(;;){
			if(str.find(pick[0]) != -1){
				pos = str.find(pick[0]);
				str = str.substr(pos + pick[0].length(),str.length() - pos -pick[0].length());
			}
			if(str.find(pick[1]) != -1){
				if(str.find("//") != -1) break;
				else{
					x[1]++;
					break;
				}
			}
			else break;
		}	
	}
	int divide[x[1]]={0}, ely=0,eln=0;
	while (getline (s2, str)){
		int pos;
		for(;;){
			if(str.find(pick[0]) != -1){
				if(str.find("//") != -1) break;
				else{
					divide[x[2]]++;
					break;
				} 
			}
			if(str.find(keyword[num[3]]) != -1){
				if(str.find("//") != -1) break;
				else{
					x[2]++;
					break;
				}
			}
			else break;
		}
	}
    for(int m=0;m<x[1];m++){
		if(divide[m]==0){
			eln++;
		}
		else{
			ely++;				
		}	
	}
}
