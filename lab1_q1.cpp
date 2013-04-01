#include<iostream>
#include<string.h>
using namespace std;

char exor(char first,char second){
	if(first==second) return '0';
	else return '1';
}

int main(){
	char frame[50],generator[30];
	cout<<"\nEnter Frame: ";
	cin>>frame;
	cout<<"Enter Generator: ";
	cin>>generator;
	int f_length=strlen(frame);
	int g_length=strlen(generator);
	int i=0;
	for(i=f_length;i<(f_length+g_length-1);i++){
		frame[i]='0';
	}
	frame[i]='\0';
	cout<<"New Frame: "<<frame<<endl;
	f_length=strlen(frame);
	char temp[g_length+1];
	for(i=0;i<g_length;i++) temp[i]=frame[i];
	temp[g_length]='\0';
	i=g_length;
	while(i<f_length)
	{
		int j=0,k=0;
		for(j=0;j<g_length;j++){
		//	cout<<temp[j];
		temp[j]=exor(temp[j],generator[j]);
		}
		//cout<<"\nExor: "<<temp<<endl;
		j=0;
		bool begin=false;
		while(j<g_length)
		{
			if(temp[j]=='1') begin=true;
			if(begin) {temp[k]=temp[j];k++;}
			j++;
		}
		while(k<g_length){
			temp[k]=frame[i];
			i++;k++;
		}
	}
	cout<<"Remainder: "<<temp<<endl;
	for(int i=(f_length-g_length)+1,j=0;i<f_length;i++,j++){
		frame[i]=temp[j];
	}
	cout<<"Frame to send: "<<frame<<endl;
	cout<<endl;
	return 0;
}
