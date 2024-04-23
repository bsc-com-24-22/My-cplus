#include<cstdlib>
#include<ctime>
#include<iostream>


using namespace std;
int main () {
	srand (time(0));
	int randomNumbers= rand() % 11;
	switch (randomNumbers){
	case 10:
		std::cout<< "Your Subscription will expires soon. Renew!"<< std:: endl;
		break;
		
	case 5:
	     std::cout<<"Your subscription expires within 5 days"<< std:: endl;
		 std::cout<<"Renew now and save 10%!"<<std:: endl;
		 break;
		 
	case 1:
	     std::cout<<"Your subscription expires within a day"<< std:: endl;
		 std::cout<<"Renew now and save 20%!"<<std:: endl;
		 break;	
		  	
	case 11:
		std::cout<<"Your subscription has expired"<<std:: endl;
		break;
	case 9:
	     std::cout<<"You have an active subscription"<< std:: endl;
	     break;
	
	}
	
	return 0;

}