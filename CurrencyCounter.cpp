/* this is develop by tejas chaudhari(tej4code) i am using c++ programing language it is beginner friendly 
project date 07/11/2022 */

#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;
float Converter(){
	// using currency name  a.Dollar b.Rupess c.Euro d.Pound respectively 
	char currencyName1;
	char currencyName2;
	float currency1;
	float currency2;
	level5:
	cout<<"Enter the currency1 Name "<<endl;
	cin>>currencyName1;
	cout<<"Enter the Currency1 value "<<endl;
	cin>>currency1;
	// i am using switch case for the swiching output
	switch(currencyName1){
	     case 'a' :
	     		level1:
	    		cout<<"\nEnter the Currency2 Name "<<endl;
	    		cin>>currencyName2;
	    		if(currencyName2 =='a' || currencyName2 == 'A'){
	    			currency2 = currency1*1.00;
					//dollar to dollar covert	
				}
				else if(currencyName2 =='b' || currencyName2== 'B'){
					currency2 = currency1*81.98;
					//dollar to rupees conver 
				}
				else if(currencyName2=='c'|| currencyName2== 'C'){
					currency2 = currency1*1.00;
					//dollar to Euro convert
				}
				else if(currencyName2=='d'|| currencyName2== 'D'){
					currency2= currency1*0.87;
					//dollar to pounds convert
				}
				else{
					cout<<"\nyou are enter wrong value ";
					goto level1;
				}
				break;
		  case 'b'  :
	     		level2:
	    		cout<<"\nEnter the Currency 2 Name"<<endl;
	    		cin>>currencyName2;
	    		if(currencyName2=='a'|| currencyName2== 'A'){
	    			currency2 = currency1*0.01;
	    			//rupees to dollar convert
				}
				else if(currencyName2=='b'|| currencyName2== 'D'){
					currency2 = currency1*1.00;
					//rupess to rupees convert
				}
				else if(currencyName2=='c'|| currencyName2== 'C'){
					currency2 = currency1*0.01;
					//rupees to Euro covert
				}
				else if(currencyName2=='d'|| currencyName2== 'D'){
					currency2= currency1*0.01;
					//rupees to Pound convert
				}
				else{
					cout<<"\nyou are enter wrong value"<<endl;
					//using goto statmenet for  returning 
					goto level2;
				}
				break;	
		  case 'c'  :
	     		level3:
	    		cout<<"\nEnter the Currency 2 Name"<<endl;
	    		cin>>currencyName2;
	    		if(currencyName2=='a'|| currencyName2== 'A'){
	    			currency2 = currency1*0.99;
				}
				else if(currencyName2=='b'|| currencyName2=='B'){
					currency2 = currency1 * 81.80;
				}
				else if(currencyName2=='c'|| currencyName2=='C'){
					currency2 = currency1 * 1.00;
					
				}
				else if(currencyName2=='d'|| currencyName2== 'D'){
					currency2= currency1 * 0.87;
				}
				else{
					cout<<"\nyou are enter wrong value"<<endl;
					goto level3;
				}
				break;
		  case 'd':
	     		level4:
	    		cout<<"\nEnter the Currency 2 Name"<<endl;
	    		cin>>currencyName2;
	    		if(currencyName2=='a'|| currencyName2 == 'A'){
	    			currency2 = currency1*1.13;
	    			
				}
				else if(currencyName2=='b'|| currencyName2== 'A'){
					currency2 = currency1*93.29;
				}
				else if(currencyName2=='c'|| currencyName2== 'C'){
					currency2 = currency1*1.14;
					
				}
				else if(currencyName2=='d'|| currencyName2== 'D'){
					currency2= currency1*1.00;
				}
				else{
					cout<<"\nyou are enter wrong value"<<endl;
					goto level4;
				}
				break;
		 default:
		 		cout<<"\nYou are enter Wrong Choice "<<endl;
		 		goto level5;
		 		break;
		 		
	}
	return currency2;
	
};
int main(){

	string start;
 	
 	frontlevel:
	cout<<"_____________________________Welcome  To The CurrencyConverter_____________________"<<endl;
	cout<<"_________________________________you have Four choices ___________________________"<<endl;;
	cout<<" a.Dollar\n b.Rupess\n c.Euro\n d.Pound\n";
	cout<<"Enter to start application ";
	cin>>start;

	if(start == "s" || start == "S" || start == "start" || start == "START"){
	  float final = Converter();
	  cout<<"Result is "<<final<<endl;
	}
	else{
	  cout<<"Thank yor for using applications \n\n"<<endl; 
	  goto frontlevel; 
	}
	
	
	

	
	
	
	
	

	
}
